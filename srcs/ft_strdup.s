global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc
extern ___error

SECTION .text

_ft_strdup:
	push rdi
	call _ft_strlen
	mov rdi, rax
	inc rdi
	call _malloc
	cmp rax, 0
	je error
	pop rsi
	mov rdi, rax
	call _ft_strcpy
	ret

error:
	push 100012
	call ___error
	pop qword [rax]
	mov rax, -1
	ret
