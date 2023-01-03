cmd_/usr/src/myext4/ext4.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /usr/src/myext4/ext4.ko /usr/src/myext4/ext4.o /usr/src/myext4/ext4.mod.o;  true
