.686
.model flat,stdcall
.stack 100h

.data
mas dw 08A64h, 0B3D1h, 088BDh
mas1 dw 0, 0, 0
M dw ?
R dw ?

.code
ExitProcess PROTO STDCALL :DWORD
Start:

; ������� 1

xor eax, eax
xor ebx, ebx
xor ecx, ecx
xor edx, edx

mov cx, 3
mov bx, 0

l1: 
	push cx
		mov cx, 4
		mov ax, mas[bx]	
		mul cx
		mov mas1[bx], ax
		add bx, 2
	pop cx
loop l1

; ������� 2

xor eax, eax
xor ebx, ebx
xor ecx, ecx
xor edx, edx

mov ax, mas1[0]
mov bx, mas1[2]
add ax, bx

mov cx, mas1[4]
sub ax, cx
mov M, ax

xor ebx, ebx
xor ecx, ecx

cmp M, 21
jg p1; ������
jle p2; ������ ��� �����

p1:
	mov ax, M
	or ax, 0FF0h
	mov R, ax
	jmp p3
p2:
	mov ax, M
	add ax, 1028
	mov R, ax
	jmp p3
p3:

; ������� 3

cmp R, 0
jg adr1; ������� ��� ������������� R
jl adr2; ������� ��� ������������� R

adr1:
	rcl R, 3
	jmp adr3
adr2:
	ror R, 2
	jmp adr3
adr3:
	
@exit:
Invoke ExitProcess,1
End Start
