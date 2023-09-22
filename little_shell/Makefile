CROSS_COMPILE=riscv64-linux-gnu-

initramfs.cpio: init little_shell
	cpio -o -H newc < file_list.txt > initramfs.cpio

little_shell: little_shell.go
	GOOS=linux GOARCH=riscv64 go build little_shell.go

init: init.c
	${CROSS_COMPILE}gcc -static -o init init.c
