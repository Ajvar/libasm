global _ft_strdup
%include 'ft_strlen.s'
%include 'ft_strcpy.s'

SECTION .text

_ft_strdup:
	push rdi
	call _ft_strlen
	mov rdi, rax
	inc rdi
	call _malloc
	push rsi
	mov rdi, rax
	call _ft_strcpy
	ret
