global _ft_strcpy

SECTION .text

_ft_strcpy:
    mov rcx, -1
	mov rax, 0
loop:
    inc rcx
    mov dl, [rsi + rcx]
    mov [rdi + rcx], dl
	cmp [rdi + rcx], byte 0
	je end
    inc rcx
    jmp loop
end:
	mov rax, rdi    
    ret
