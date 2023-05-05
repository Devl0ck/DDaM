.686
.model flat,stdcall
.stack 100h
.data

res_arr dq 50 dup (?) 
len equ ($-res_arr)/8 ;длина массива ( директива equ присваивает значение константе len) dq- директив(4 слова)
zero dd 0; (определяет переменную размером в 4 байта)
one dq 1.0 
three dd 3 
cur_i_float dd 3 
cur_i_reg dd 1 
tmp dq 0 
tt dq 50 dup (?) 

.code
ExitProcess PROTO STDCALL :DWORD
Start:
finit 
xor eax,eax
xor ebx,ebx
xor edx,edx
xor ecx,ecx
mov ecx,0
xor ebx,ebx
mov ebx,cur_i_reg 
fld one ; загружает единицу в стек 
fstp res_arr[ecx+ebx*8] ; Сохраняет значение с извлечением из стека
inc cur_i_reg ; Увеличение на 1 
mov ebx,cur_i_reg
fld one
fstp res_arr[ecx+ebx*8]
inc cur_i_reg ;i = 3
@@st:
mov ecx,0
mov ebx,cur_i_reg
sub ebx,2; i = i-2
fld res_arr[ecx+ebx*8] ;1 слагаемое 
inc ebx; прибовляет 1 к индексу
fadd res_arr[ecx+ebx*8] ;2 слагаемое 
mov ebx,cur_i_reg ; счет в ebx
@@cmp_thr:
fld three ; загрузили 3
fld cur_i_float ; загружаем текущий индекс
fprem ; получаем остаток от деления
fld zero
fcompp ; проверяем равен ли остаток нулю и извлекает их из стека 
fstsw ax ; загружаем все флаги в регистр АХ
sahf ; перенос из регистра ah в регистр флагов
fxch; меняет местами st(0) с st(1)
je @@th ; если третье в редяу- переход на метку для изменения знака (результат равный)
jne @@add_to_arr ; иначе - добавляем сумму в массив (переход, если не равно)
@@th: ;знак минус у числа
fst tmp ; загрузили из st (0) в esp 
fld tmp
fcomp zero; сравнение вещественного числа в ST(0) с операндом с последующим выталкиванием ST(0) из стека
fstsw ax ; загружаем все флаги в регистр АХ
sahf; перенос из регистра ah в регистр флагов
ja @@change ;если tmp > 0, то переходим по адресу замены знака
jbe @@add_to_arr; перейти, если меньше или равно
@@change:
fchs; замена знака
@@add_to_arr:
mov ebx, cur_i_reg ; текущий индекс
fstp res_arr[ecx+ebx*8] ; загрузили из st (0) в esp с извлечением из стека
cmp ebx,len ; i<50 = условие выхода (сравнение двух чисел)
je @res; Переход если равны
jne @@inc ; Переход, если не равно
@@inc:
fld cur_i_float ; загрузили текущий индекс
fadd one ; увеличили его на 1
fstp cur_i_float ;вывели значение в переменную 
inc cur_i_reg ; повысили на 1 для регистра
jmp @@st 
@res: ;получить значение из массива
xor eax,eax
mov ebx,1
mov ecx,len
@look: 
fld res_arr[eax+ebx*8]; 
inc ebx ;  
fstp tt[eax+ebx*8];
loop @look
exit:
Invoke ExitProcess,1
End Start