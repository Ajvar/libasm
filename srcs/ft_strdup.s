global ft_strdup
extern ft_strlen
extern ft_strcpy
extern malloc
extern __errno_location
section .text

ft_strdup:
	push rdi
	call ft_strlen
	mov rdi, rax
	inc rdi
	call malloc
	cmp rax, 0
	je error
	pop rsi
	mov rdi, rax
	call ft_strcpy
	ret

error:
	push 100012
	call __errno_location
	pop qword [rax]
	mov rax, -1
	ret
