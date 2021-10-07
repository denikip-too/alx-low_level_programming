section .text
	global main
	extern printf
main:
	mov esi,message
	mov edi,fmt
	mov eax,0
	call printf

	mov ebx,0
	mov eax,1
	int 0x80

section .data
message: db 'Hello, Holberton', 0xa
fmt: db "%s", 17, 0
