.686

.model flat,stdcall

.stack 100h

.data
X dw 11
Y dw 5
Z dw 76
M dw ?
.code
ExitProcess PROTO STDCALL :DWORD
Start:
mov bx, Z
not bx

mov ax, X
add ax, Y

mov dx, bx
xor dx, ax

mov bx, X
sub bx, Y

mov ax, cx
and ax, bx

exit:
Invoke ExitProcess,1
End Start
