obj-$(CONFIG_EXT4_FS) += ext4exit.o

ext4exit-y  := balloc.o bitmap.o block_validity.o dir.o ext4_jbd2.o extents.o \
                extents_status.o file.o fsmap.o fsync.o hash.o ialloc.o \
                indirect.o inline.o inode.o ioctl.o mballoc.o migrate.o \
                mmp.o move_extent.o namei.o page-io.o readpage.o resize.o \
                super.o symlink.o sysfs.o xattr.o xattr_hurd.o xattr_trusted.o \
                xattr_user.o fast_commit.o orphan.o
KERNELDIR:=/usr/src/linux-source-5.15.0
PWD:=$(shell pwd)

ext4exit-$(CONFIG_EXT4_FS_POSIX_ACL)        += acl.o
ext4exit-$(CONFIG_EXT4_FS_SECURITY)         += xattr_security.o
ext4exit-inode-test-objs                    += inode-test.o
obj-$(CONFIG_EXT4_KUNIT_TESTS)          += ext4-inode-test.o
ext4exit-$(CONFIG_FS_VERITY)                += verity.o

default:
	make -C $(KERNELDIR) M=$(PWD) modules
clean:
	rm -rf *.o *.mod.c *.ko *.symvers

