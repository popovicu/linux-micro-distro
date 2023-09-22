CROSS_COMPILE=riscv64-linux-gnu-

initramfs.cpio: init
	cpio -o -H newc < file_list.txt > initramfs.cpio

init: init.c
	${CROSS_COMPILE}gcc -static -o init init.c
