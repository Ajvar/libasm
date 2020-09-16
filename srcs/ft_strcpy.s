global ft_strcpy
section .text

ft_strcpy:
    mov rcx, -1
	mov rax, 0
loop:
    inc rcx
    mov dl, [rsi + rcx]
    mov [rdi + rcx], dl
	cmp [rdi + rcx], byte 0
	je end
    jmp loop
end:
	mov rax, rdi    
    ret
