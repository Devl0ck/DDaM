.586 
.MODEL flat,C
.DATA

op1 DD 0.0
op2 DD 0.0
OTV DD 0.0

.CODE

extern fun_el:near ; объ€вление внешней функции 
public integral_calc
integral_calc proc C
	push ebp
	mov ebp,esp
	push dword ptr [ebp+12]
	call fun_el
	fld op1
	fadd
	fstp op1
	push dword ptr [ebp + 8]
	call fun_el
	fld op2
	fadd
	fstp op2
	fld op1
	fsub op2
	fstp OTV
	fld OTV
	mov esp,ebp
	pop ebp
	ret; выход из подпрограммы
integral_calc endp
End
