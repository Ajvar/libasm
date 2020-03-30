global _ft_strcmp

SECTION .text

_ft_strcmp:
	push r12
	push r13
	mov r12, rdi
	mov r13, rsi
	mov rcx, -1

loop:
	inc rcx
	cmp byte [r12 + rcx], 0
	je equal
	mov dl, byte [r13 + rcx]
	cmp byte [r12 + rcx], dl
	jl less
	jg greater
	jmp loop
	
equal:
	cmp byte [r13 + rcx], 0
	je end
	jmp less

end:
	mov rax, 0
	pop r12
	pop r13
	ret
	
greater:
	mov rax, 1
	pop r12
	pop r13
	ret

less:
	mov rax, -1
	pop r12
	pop r13
	ret
