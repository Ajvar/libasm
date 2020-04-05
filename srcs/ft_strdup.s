global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc

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
	mov rax, -1
	ret