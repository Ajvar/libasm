global ft_strlen
section .text

ft_strlen:
	mov rax, rdi
count:
	cmp byte [rax], 0
	je finished
	inc rax
	jmp count
finished:
	sub rax, rdi
	ret
	
