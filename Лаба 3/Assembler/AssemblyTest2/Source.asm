.686
.model flat,stdcall
.stack 100h
.data

res_arr dq 50 dup (?) 
len equ ($-res_arr)/8 ;����� ������� ( ��������� equ ����������� �������� ��������� len) dq- ��������(4 �����)
zero dd 0; (���������� ���������� �������� � 4 �����)
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
fld one ; ��������� ������� � ���� 
fstp res_arr[ecx+ebx*8] ; ��������� �������� � ����������� �� �����
inc cur_i_reg ; ���������� �� 1 
mov ebx,cur_i_reg
fld one
fstp res_arr[ecx+ebx*8]
inc cur_i_reg ;i = 3
@@st:
mov ecx,0
mov ebx,cur_i_reg
sub ebx,2; i = i-2
fld res_arr[ecx+ebx*8] ;1 ��������� 
inc ebx; ���������� 1 � �������
fadd res_arr[ecx+ebx*8] ;2 ��������� 
mov ebx,cur_i_reg ; ���� � ebx
@@cmp_thr:
fld three ; ��������� 3
fld cur_i_float ; ��������� ������� ������
fprem ; �������� ������� �� �������
fld zero
fcompp ; ��������� ����� �� ������� ���� � ��������� �� �� ����� 
fstsw ax ; ��������� ��� ����� � ������� ��
sahf ; ������� �� �������� ah � ������� ������
fxch; ������ ������� st(0) � st(1)
je @@th ; ���� ������ � �����- ������� �� ����� ��� ��������� ����� (��������� ������)
jne @@add_to_arr ; ����� - ��������� ����� � ������ (�������, ���� �� �����)
@@th: ;���� ����� � �����
fst tmp ; ��������� �� st (0) � esp 
fld tmp
fcomp zero; ��������� ������������� ����� � ST(0) � ��������� � ����������� ������������� ST(0) �� �����
fstsw ax ; ��������� ��� ����� � ������� ��
sahf; ������� �� �������� ah � ������� ������
ja @@change ;���� tmp > 0, �� ��������� �� ������ ������ �����
jbe @@add_to_arr; �������, ���� ������ ��� �����
@@change:
fchs; ������ �����
@@add_to_arr:
mov ebx, cur_i_reg ; ������� ������
fstp res_arr[ecx+ebx*8] ; ��������� �� st (0) � esp � ����������� �� �����
cmp ebx,len ; i<50 = ������� ������ (��������� ���� �����)
je @res; ������� ���� �����
jne @@inc ; �������, ���� �� �����
@@inc:
fld cur_i_float ; ��������� ������� ������
fadd one ; ��������� ��� �� 1
fstp cur_i_float ;������ �������� � ���������� 
inc cur_i_reg ; �������� �� 1 ��� ��������
jmp @@st 
@res: ;�������� �������� �� �������
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