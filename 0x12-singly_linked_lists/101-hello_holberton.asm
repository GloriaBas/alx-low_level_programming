fmt: db "%s", 10, 0
msg: db "Hello, Holberton", 0

	global main
	extern printf
main:
	mov esi, msg
	mov edi, fmt
	mov eax, 0
	call printf

	mov eax, 0
	ret
