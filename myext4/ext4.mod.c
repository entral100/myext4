#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf704969, "module_layout" },
	{ 0x47a0cdcb, "mb_cache_entry_find_next" },
	{ 0xc90a9e03, "get_acl" },
	{ 0x4a165127, "kobject_put" },
	{ 0xc435d6b5, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6518015f, "d_path" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4b4af741, "kmem_cache_destroy" },
	{ 0xf4a00bf5, "fs_bio_set" },
	{ 0x5d3ef4eb, "page_zero_new_buffers" },
	{ 0x10ddabbc, "dquot_alloc" },
	{ 0x6d3d110f, "fscrypt_symlink_getattr" },
	{ 0x7328c240, "iget_failed" },
	{ 0x87338b47, "dquot_destroy" },
	{ 0xd731cdd9, "kmalloc_caches" },
	{ 0x6abef05, "fscrypt_has_permitted_context" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa704f931, "jbd2_fc_end_commit_fallback" },
	{ 0x7c2c6e3b, "fscrypt_free_inode" },
	{ 0x5eeaa6f6, "jbd2_journal_flush" },
	{ 0x4420700c, "iomap_seek_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xaf36a03, "drop_nlink" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xa4785cdc, "sb_min_blocksize" },
	{ 0x8de64a94, "bio_devname" },
	{ 0x1b45a596, "put_devmap_managed_page" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xbbd4f18d, "mark_buffer_dirty_inode" },
	{ 0x9945eda2, "dquot_load_quota_inode" },
	{ 0x53b954a2, "up_read" },
	{ 0xeecb44ab, "jbd2_journal_begin_ordered_truncate" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xb98053b9, "jbd2_wait_inode_data" },
	{ 0x7410aba2, "strreplace" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xda47a208, "bio_alloc_bioset" },
	{ 0xf3654110, "make_bad_inode" },
	{ 0x1c908e6e, "dquot_get_next_dqblk" },
	{ 0xc4449b8b, "__mark_inode_dirty" },
	{ 0x1b425e9c, "d_invalidate" },
	{ 0xeb9f092d, "dquot_writeback_dquots" },
	{ 0x880cb778, "__set_page_dirty_nobuffers" },
	{ 0xef0f9ec2, "crypto_alloc_shash" },
	{ 0xd2f8b15e, "filemap_fault" },
	{ 0x349cba85, "strchr" },
	{ 0x41b44ca0, "dquot_quotactl_sysfile_ops" },
	{ 0x7f456036, "dqput" },
	{ 0xcf0801b2, "fscrypt_get_symlink" },
	{ 0x3bcfa4a4, "fscrypt_encrypt_pagecache_blocks" },
	{ 0xebad648d, "proc_create_seq_private" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x2b56dde3, "__cleancache_get_page" },
	{ 0x718535d9, "dqget" },
	{ 0x266ae96c, "generic_write_checks" },
	{ 0xa0f32875, "fsverity_ioctl_measure" },
	{ 0xac537ac2, "percpu_counter_destroy" },
	{ 0xacaafcc, "fscrypt_prepare_new_inode" },
	{ 0xf151ba7f, "jbd2_journal_errno" },
	{ 0x1a542509, "__page_symlink" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x754d539c, "strlen" },
	{ 0xceec3ff8, "fsverity_cleanup_inode" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xd635fe93, "generic_file_llseek_size" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x21928b43, "dquot_acquire" },
	{ 0xaeff4122, "jbd2_journal_free_reserved" },
	{ 0xf689f797, "filemap_write_and_wait_range" },
	{ 0xa8a2224c, "jbd2_journal_lock_updates" },
	{ 0xf6b76d9d, "dax_supported" },
	{ 0xa0dff9b3, "inode_io_list_del" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0x823b0cce, "proc_create_single_data" },
	{ 0xafc08054, "dotdot_name" },
	{ 0xf36b7233, "from_kuid_munged" },
	{ 0x435bd846, "dget_parent" },
	{ 0x64999478, "congestion_wait" },
	{ 0xaa63db75, "end_buffer_write_sync" },
	{ 0x7085a76c, "bdev_read_only" },
	{ 0x1041dee9, "jbd2_journal_invalidatepage" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x64925270, "__dax_synchronous" },
	{ 0x9cafe0ea, "block_invalidatepage" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xb2bf5d52, "generic_fh_to_parent" },
	{ 0x59522b14, "seq_escape" },
	{ 0x2ec6bba0, "errseq_set" },
	{ 0xf160381, "iomap_zero_range" },
	{ 0x371c8674, "dquot_file_open" },
	{ 0x5581d822, "dquot_get_next_id" },
	{ 0x8ce0620b, "block_is_partially_uptodate" },
	{ 0xcd23ca9f, "fscrypt_prepare_symlink" },
	{ 0x7242d92, "put_dax" },
	{ 0x47e9a99b, "dquot_mark_dquot_dirty" },
	{ 0xf6f308fd, "rcuwait_wake_up" },
	{ 0xdf04fff1, "fscrypt_set_bio_crypt_ctx" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0x7d561fa4, "iomap_dio_iopoll" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x826708e4, "seq_puts" },
	{ 0xb58e9fe0, "is_bad_inode" },
	{ 0x3fc5c4e7, "blkdev_issue_flush" },
	{ 0x47ef630c, "pagecache_get_page" },
	{ 0x9e0367d2, "dquot_quota_on_mount" },
	{ 0x25820c64, "fs_overflowuid" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xc1afc047, "posix_acl_access_xattr_handler" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x1792c461, "posix_acl_update_mode" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x6f4090ae, "jbd2_log_wait_commit" },
	{ 0xac8597d5, "mb_cache_entry_get" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0xf1e5def5, "__lock_page" },
	{ 0x6003b057, "tag_pages_for_writeback" },
	{ 0x9e4c6a85, "__lock_buffer" },
	{ 0xc9f2b337, "jbd2_journal_force_commit" },
	{ 0xbae26113, "__percpu_down_read" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x94d02370, "touch_atime" },
	{ 0x4ecaf6ab, "__set_page_dirty_no_writeback" },
	{ 0xb66ba48d, "find_inode_by_ino_rcu" },
	{ 0x9831ecf8, "dput" },
	{ 0xd78b86c9, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3b4ce5b1, "dquot_quota_off" },
	{ 0x8a5e7ec6, "fscrypt_ioctl_get_policy" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdaef3116, "remove_proc_entry" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x4829cf6b, "fscrypt_enqueue_decrypt_work" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x92e8e9ab, "fsverity_enqueue_verify_work" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x64745f0d, "buffer_migrate_page" },
	{ 0xe11f063, "inc_nlink" },
	{ 0x230115ac, "block_read_full_page" },
	{ 0x58d4fca8, "fscrypt_fname_disk_to_usr" },
	{ 0xe091c977, "list_sort" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xee1ee4a8, "fscrypt_ioctl_add_key" },
	{ 0xec5e81b5, "file_path" },
	{ 0x755a0fd9, "init_user_ns" },
	{ 0x53126ecc, "__percpu_counter_sum" },
	{ 0xca431c05, "wake_bit_function" },
	{ 0xb97b520a, "pagevec_lookup_range" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe138fb8c, "percpu_counter_add_batch" },
	{ 0x2d5f69b3, "rcu_read_unlock_strict" },
	{ 0xb76df57b, "jbd2_fc_wait_bufs" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xd81a3247, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x21bdb523, "errseq_check_and_advance" },
	{ 0x3d56e7b3, "utf8_unload" },
	{ 0x7491d187, "__dquot_free_space" },
	{ 0x9df1cb92, "trace_event_buffer_reserve" },
	{ 0x2148f2e8, "d_instantiate_new" },
	{ 0xa3b6c0d8, "kobject_del" },
	{ 0xd67e617b, "generic_read_dir" },
	{ 0xfd902db, "mb_cache_entry_create" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xa3ac5189, "page_cache_sync_ra" },
	{ 0x258a2c02, "_raw_write_trylock" },
	{ 0x8b6e82, "__getblk_gfp" },
	{ 0x7d5e86c3, "igrab" },
	{ 0x186acef3, "__fscrypt_prepare_readdir" },
	{ 0x3cbcf1f, "__fscrypt_inode_uses_inline_crypto" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xa622db3e, "unlock_buffer" },
	{ 0x70239f9c, "noop_direct_IO" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe27dfc36, "fsverity_verify_bio" },
	{ 0x38e211f, "__dquot_alloc_space" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa4f10f55, "redirty_page_for_writepage" },
	{ 0xd689832b, "jbd2_journal_destroy" },
	{ 0xa9f8f856, "fscrypt_free_bounce_page" },
	{ 0x99078b39, "trace_print_flags_seq" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xaf4266dc, "pagevec_lookup_range_tag" },
	{ 0xd7093ef9, "bpf_trace_run3" },
	{ 0xa095e02e, "generic_check_addressable" },
	{ 0x1303b367, "jbd2_fc_end_commit" },
	{ 0x4c55f5ef, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xacd81eb3, "jbd2_inode_cache" },
	{ 0x519dd77a, "kthread_create_on_node" },
	{ 0x23a5f1d8, "dquot_get_dqblk" },
	{ 0x6aafa716, "dax_finish_sync_fault" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x2d29ffa3, "try_to_release_page" },
	{ 0xc267960e, "utf8_validate" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6fabae87, "kobject_create_and_add" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xaa44a707, "cpumask_next" },
	{ 0x3e0d03b2, "jbd2_journal_start" },
	{ 0x6dd9685e, "end_page_writeback" },
	{ 0x5e8c490f, "from_kgid_munged" },
	{ 0x2c647381, "wbc_account_cgroup_owner" },
	{ 0xca8c6e6, "fscrypt_drop_inode" },
	{ 0xece784c2, "rb_first" },
	{ 0x5122416b, "jbd2_journal_wipe" },
	{ 0xac382f10, "fscrypt_zeroout_range" },
	{ 0x42b9eb02, "invalidate_bdev" },
	{ 0x86bc92e1, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17341d99, "PDE_DATA" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x23ee13fd, "mb_cache_entry_find_first" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x4dcb3b1c, "inode_owner_or_capable" },
	{ 0x681dc224, "iomap_fiemap" },
	{ 0x83d3e229, "jbd2_transaction_committed" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xb71dfca8, "bio_associate_blkg_from_css" },
	{ 0x2e1a0463, "jbd2_journal_try_to_free_buffers" },
	{ 0xb6bb7c44, "kern_path" },
	{ 0xfb578fc5, "memset" },
	{ 0x20132610, "noop_invalidatepage" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xcad2d93c, "from_kuid" },
	{ 0xef88c3ee, "proc_mkdir" },
	{ 0xc296bec3, "jbd2_journal_dirty_metadata" },
	{ 0xa705b98c, "set_task_ioprio" },
	{ 0x1eef51f4, "bpf_trace_run1" },
	{ 0x9b420478, "utf8_strncasecmp" },
	{ 0x5938ee24, "iomap_bmap" },
	{ 0x86084d7c, "dax_layout_busy_page" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x96da2123, "dquot_alloc_inode" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x18554f24, "current_task" },
	{ 0x99e57e4, "freezing_slow_path" },
	{ 0xf962c787, "fscrypt_put_encryption_info" },
	{ 0x7d28cc, "from_kprojid" },
	{ 0xab4169d3, "__bread_gfp" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x2aa20293, "kthread_stop" },
	{ 0x737b654, "posix_acl_chmod" },
	{ 0x213a5967, "jbd2_journal_submit_inode_data_buffers" },
	{ 0x993b7e19, "file_modified" },
	{ 0x3afacbc0, "d_obtain_alias" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7436e426, "jbd2_journal_extend" },
	{ 0xf9749250, "jbd2_trans_will_send_data_barrier" },
	{ 0xdd1f60c1, "dax_writeback_mapping_range" },
	{ 0xbf2d8abb, "iov_iter_alignment" },
	{ 0xc226b040, "mb_cache_entry_delete_or_get" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0x5e8bb7ae, "__percpu_init_rwsem" },
	{ 0x9b9d439f, "crypto_shash_update" },
	{ 0xd4683308, "bio_add_page" },
	{ 0x8ed66338, "generic_writepages" },
	{ 0x50759163, "kobject_init_and_add" },
	{ 0xf1e046cc, "panic" },
	{ 0xcc745ff6, "__fscrypt_prepare_link" },
	{ 0xf9a6dfbd, "blkdev_issue_zeroout" },
	{ 0x19e49a4b, "jbd2_journal_start_commit" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x7fdb7c88, "__fscrypt_encrypt_symlink" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x3d374c5f, "fscrypt_ioctl_remove_key" },
	{ 0xceec8abd, "__mb_cache_entry_free" },
	{ 0x9166fada, "strncpy" },
	{ 0xe5dce5b, "trace_event_reg" },
	{ 0xd5263820, "mb_cache_destroy" },
	{ 0x615c20fa, "iomap_swapfile_activate" },
	{ 0x37a86537, "__sync_dirty_buffer" },
	{ 0xd610d9ba, "from_kgid" },
	{ 0xbd6841d4, "crc16" },
	{ 0x7015ccf5, "jbd2_journal_revoke" },
	{ 0x70b7d224, "fscrypt_decrypt_bio" },
	{ 0x53806aa6, "seq_putc" },
	{ 0x6a58d91b, "security_inode_init_security" },
	{ 0x889b1370, "_raw_read_trylock" },
	{ 0x5a921311, "strncmp" },
	{ 0x9b496b21, "posix_acl_alloc" },
	{ 0x63474cf, "kmem_cache_free" },
	{ 0xf71ee839, "set_nlink" },
	{ 0xb8721a53, "fscrypt_ioctl_set_policy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7b36d7af, "__wait_on_buffer" },
	{ 0x1e403d9c, "file_update_time" },
	{ 0x7130b93c, "write_cache_pages" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0x5e8b53d2, "jbd2_fc_begin_commit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb7e5099b, "jbd2_journal_release_jbd_inode" },
	{ 0xc240ea0a, "setattr_copy" },
	{ 0x6d1ac073, "bpf_trace_run5" },
	{ 0xddec8c98, "dquot_resume" },
	{ 0x1375b8ac, "__fscrypt_prepare_rename" },
	{ 0x58477340, "wait_on_page_writeback" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xa681fe88, "generate_random_uuid" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x63e8a8da, "thaw_bdev" },
	{ 0x986e00f, "unlock_two_nondirectories" },
	{ 0x7feb1a96, "insert_inode_locked" },
	{ 0xae9d5f85, "init_uts_ns" },
	{ 0xc0bf5469, "sync_dirty_buffer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x48ccde34, "truncate_pagecache" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x1d4c6d9d, "kmem_cache_create_usercopy" },
	{ 0xe809bccd, "blkdev_get_by_dev" },
	{ 0xea58a85f, "set_cached_acl" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xbccc4222, "thp_get_unmapped_area" },
	{ 0x4e3567f7, "match_int" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9c77bd4b, "unlock_page" },
	{ 0x4ed17a0, "jbd2_journal_blocks_per_page" },
	{ 0x5ee5a084, "generic_file_read_iter" },
	{ 0x5f976eb4, "jbd2_journal_abort" },
	{ 0xb7c0f443, "sort" },
	{ 0xce807a25, "up_write" },
	{ 0x2ca5d8e4, "fscrypt_ioctl_get_nonce" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4b0332a7, "fput" },
	{ 0xdfd9f564, "jbd2_journal_init_inode" },
	{ 0xc8fcc36e, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xac7f1ebe, "inode_nohighmem" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x25ffe9fb, "posix_acl_create" },
	{ 0x2ce06643, "__brelse" },
	{ 0xf5d8bcfe, "jbd2_journal_clear_err" },
	{ 0xbf47dcdd, "percpu_up_write" },
	{ 0x820c8e31, "jbd2_journal_start_reserved" },
	{ 0xc4cc855e, "bio_put" },
	{ 0xbbdd4a76, "dquot_set_dqblk" },
	{ 0x1e06482d, "__task_pid_nr_ns" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xad9901ae, "bit_waitqueue" },
	{ 0x800473f, "__cond_resched" },
	{ 0x5c66ff81, "dquot_claim_space_nodirty" },
	{ 0x769f6e64, "errseq_check" },
	{ 0x4ca136aa, "jbd2_journal_update_sb_errno" },
	{ 0x9954d6c5, "file_write_and_wait_range" },
	{ 0xc5725822, "inode_init_once" },
	{ 0x8100e8d1, "fsverity_verify_page" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x114085e8, "jbd2_journal_force_commit_nested" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x5e332b52, "__var_waitqueue" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa6a088b7, "fscrypt_match_name" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x2b6505d7, "mnt_drop_write_file" },
	{ 0x921542ac, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0xcb8410bf, "block_commit_write" },
	{ 0xdb963cce, "invalidate_inode_buffers" },
	{ 0x25dbcfa9, "fscrypt_mergeable_bio_bh" },
	{ 0x5d49aabc, "init_wait_var_entry" },
	{ 0x851dec9, "dquot_reclaim_space_nodirty" },
	{ 0xfef62dc5, "kmem_cache_alloc" },
	{ 0x47429413, "dquot_initialize_needed" },
	{ 0x9417b66f, "blkdev_put" },
	{ 0x8b86a2ca, "unregister_shrinker" },
	{ 0x3a50b333, "dquot_quota_on" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x482b1921, "fscrypt_set_bio_crypt_ctx_bh" },
	{ 0x5f0e35c6, "fsverity_file_open" },
	{ 0x4ab1a7a6, "dquot_initialize" },
	{ 0x3f488d5a, "generic_perform_write" },
	{ 0xc9dfc3e2, "fscrypt_file_open" },
	{ 0x1e32fbd7, "sync_mapping_buffers" },
	{ 0xa916b694, "strnlen" },
	{ 0x4dc8b215, "__filemap_set_wb_err" },
	{ 0xaeb5f300, "pagecache_write_end" },
	{ 0x35b6990d, "wait_for_stable_page" },
	{ 0xddde7cfc, "fs_kobj" },
	{ 0x98077fc1, "bdevname" },
	{ 0xd0bff2b1, "sync_blockdev" },
	{ 0xe2a44874, "d_alloc" },
	{ 0xb2e8c98f, "block_write_end" },
	{ 0x4b74121e, "truncate_inode_pages_final" },
	{ 0x2b5ab25b, "create_empty_buffers" },
	{ 0x1a4b7033, "make_kuid" },
	{ 0x375a2daa, "try_to_free_buffers" },
	{ 0x6a02ba46, "fscrypt_set_context" },
	{ 0xfa807acf, "trace_event_ignore_this_pid" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x80e5f86f, "fscrypt_fname_alloc_buffer" },
	{ 0x1000e51, "schedule" },
	{ 0x6d63396a, "jbd2_journal_get_write_access" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3688565a, "jbd2_journal_init_jbd_inode" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x21bc6a8a, "iomap_seek_hole" },
	{ 0xd257775e, "make_kprojid" },
	{ 0x5a80636d, "generic_write_end" },
	{ 0x26e0930a, "dquot_quota_sync" },
	{ 0xce19729, "mb_cache_entry_touch" },
	{ 0x605790dc, "fiemap_fill_next_extent" },
	{ 0x1953c958, "mempool_create" },
	{ 0x92997ed8, "_printk" },
	{ 0xdb7162e8, "fsverity_ioctl_read_metadata" },
	{ 0x2173540a, "unlock_new_inode" },
	{ 0xc340c15, "mnt_want_write_file" },
	{ 0x8b8059bd, "in_group_p" },
	{ 0xec41023e, "kill_block_super" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x79c36917, "d_drop" },
	{ 0x9898bf91, "lock_two_nondirectories" },
	{ 0x71360c20, "inode_newsize_ok" },
	{ 0xa263892b, "fscrypt_fname_free_buffer" },
	{ 0x2a8f8a82, "jbd2_fc_get_buf" },
	{ 0xd2ead4bb, "iomap_dio_rw" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xc2874d26, "d_mark_dontcache" },
	{ 0x96fca74d, "sysfs_notify" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xba3d8445, "crypto_destroy_tfm" },
	{ 0xe1dc57d5, "fscrypt_setup_filename" },
	{ 0xc689b95c, "trace_event_buffer_commit" },
	{ 0xc5e7d3f3, "wake_up_process" },
	{ 0xe0955f76, "utf8_casefold" },
	{ 0x2b107861, "fscrypt_decrypt_pagecache_blocks" },
	{ 0x20cbb30a, "__percpu_counter_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x341e00d5, "simple_get_link" },
	{ 0x1d1f3833, "vfs_setpos" },
	{ 0xe42eaed3, "clear_page_dirty_for_io" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xca610b54, "submit_bh" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xee1cbe5a, "path_put" },
	{ 0x7c797b6, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb04b0ea0, "dquot_drop" },
	{ 0x8c1f7cc1, "fscrypt_ioctl_get_policy_ex" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x95a02b29, "fsverity_prepare_setattr" },
	{ 0x9e2c8655, "sync_inode_metadata" },
	{ 0xc8b3643f, "jbd2_fc_release_bufs" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xa8b5e7f0, "kmem_cache_create" },
	{ 0xfff7a15f, "d_tmpfile" },
	{ 0x4f5dd75e, "dquot_transfer" },
	{ 0x12e21383, "register_filesystem" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6123e9e1, "event_triggers_call" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0xa9b975ca, "jbd2_journal_finish_inode_data_buffers" },
	{ 0x1a1c981, "dax_iomap_fault" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9aaef0a1, "__pagevec_release" },
	{ 0x1899e0ef, "remove_proc_subtree" },
	{ 0xf9be270f, "mb_cache_entry_wait_unused" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1e001093, "bpf_trace_run2" },
	{ 0xfcdce9b5, "__test_set_page_writeback" },
	{ 0xee29a622, "I_BDEV" },
	{ 0x4a4c1efe, "jbd2_journal_inode_ranged_wait" },
	{ 0x6434c27f, "iter_file_splice_write" },
	{ 0x511fbce3, "fscrypt_show_test_dummy_encryption" },
	{ 0x6377c8fd, "blockdev_superblock" },
	{ 0x541dadeb, "freeze_bdev" },
	{ 0x552e7eb1, "jbd2_journal_clear_features" },
	{ 0x348484ad, "iput" },
	{ 0x46820910, "jbd2_journal_init_dev" },
	{ 0x10458bed, "dax_iomap_rw" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xbc6c03aa, "read_cache_page" },
	{ 0x8d587de, "fscrypt_mergeable_bio" },
	{ 0x37a0cba, "kfree" },
	{ 0xab922491, "truncate_pagecache_range" },
	{ 0x91f2e142, "jbd2_journal_get_create_access" },
	{ 0x31d9589a, "inode_dio_wait" },
	{ 0xc54676f5, "page_get_link" },
	{ 0x62b48570, "d_find_any_alias" },
	{ 0x84b78d9e, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcc5c2df4, "trace_print_symbols_seq" },
	{ 0x26c6f374, "fiemap_prep" },
	{ 0xb3215c8b, "trace_event_raw_init" },
	{ 0xbdbfd3d4, "current_time" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x410a9985, "generic_error_remove_page" },
	{ 0x17c7fb61, "jbd2_journal_unlock_updates" },
	{ 0xbdaca970, "jbd2__journal_start" },
	{ 0xae226a2d, "d_splice_alias" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x89792487, "register_shrinker" },
	{ 0xfc399557, "utf8_load" },
	{ 0x4dc7090c, "block_page_mkwrite" },
	{ 0x12388b7c, "end_buffer_read_sync" },
	{ 0xa5c152f1, "sync_filesystem" },
	{ 0xcc2af22e, "fscrypt_set_test_dummy_encryption" },
	{ 0x9b260cb6, "invalidate_mapping_pages" },
	{ 0xb9d71de9, "__set_page_dirty_buffers" },
	{ 0x178112f4, "sb_set_blocksize" },
	{ 0x6d780af5, "jbd2_journal_set_features" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x19f58a16, "__bforget" },
	{ 0xd9a89c2b, "trace_event_printf" },
	{ 0xdcf6fc9a, "jbd2_journal_check_available_features" },
	{ 0x8ab2a2ef, "page_cache_ra_unbounded" },
	{ 0xaa2af4ae, "d_make_root" },
	{ 0x94b47353, "jbd2_journal_load" },
	{ 0x51e14166, "fscrypt_ioctl_get_key_status" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x62d7d29f, "inode_set_flags" },
	{ 0xa95eafd3, "inode_needs_sync" },
	{ 0x84c578af, "jbd2_journal_set_triggers" },
	{ 0x75270a9a, "__block_write_begin" },
	{ 0xf233840c, "__find_get_block" },
	{ 0x12461335, "posix_acl_default_xattr_handler" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xca9360b5, "rb_next" },
	{ 0xe24eeb1, "mark_buffer_dirty" },
	{ 0xccffe8de, "__fscrypt_prepare_lookup" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x927a1070, "bpf_trace_run6" },
	{ 0x72c52639, "jbd2_journal_inode_ranged_write" },
	{ 0xd897dfb1, "__fscrypt_prepare_setattr" },
	{ 0xa9c32cdf, "fs_dax_get_by_bdev" },
	{ 0x4dea0566, "unregister_filesystem" },
	{ 0x5cac4bb8, "fscrypt_fname_siphash" },
	{ 0x2192eb9d, "init_special_inode" },
	{ 0x613c2503, "dquot_get_state" },
	{ 0xfdef9998, "trace_raw_output_prep" },
	{ 0x9c3d81f, "jbd2_journal_stop" },
	{ 0xc3fa1b4b, "try_to_writeback_inodes_sb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb9c2c69f, "jbd2__journal_restart" },
	{ 0xefacc887, "jbd2_journal_forget" },
	{ 0xc23d6e55, "filemap_map_pages" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc16bfbbd, "new_inode" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7a2051cd, "generic_file_splice_read" },
	{ 0x3068d5d1, "fscrypt_ioctl_remove_key_all_users" },
	{ 0x8ec4332a, "set_blocksize" },
	{ 0x4c38d4e0, "utf8_strncasecmp_folded" },
	{ 0xc24a787f, "dquot_free_inode" },
	{ 0xd70b2582, "dquot_release" },
	{ 0x430fa6ba, "dquot_disable" },
	{ 0x870b0950, "jbd2_submit_inode_data" },
	{ 0x12d9256b, "generic_fh_to_dentry" },
	{ 0xea3fe7b6, "grab_cache_page_write_begin" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xea694fd4, "percpu_down_write" },
	{ 0xd5b9ff2a, "generic_set_encrypted_ci_d_ops" },
	{ 0xac85ff4b, "dquot_commit_info" },
	{ 0xa96bbd0e, "dquot_set_dqinfo" },
	{ 0x5b0cc0b8, "__cleancache_init_fs" },
	{ 0xeaed58c8, "page_mapped" },
	{ 0xd01ad549, "bpf_trace_run4" },
	{ 0x8b00c366, "clear_inode" },
	{ 0xdd2c169b, "mb_cache_create" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x9991f422, "pagecache_isize_extended" },
	{ 0x8cfdbe1c, "fsverity_ioctl_enable" },
	{ 0x3cd294dc, "d_instantiate" },
	{ 0x6655b723, "pagecache_write_begin" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xc1306c50, "__dquot_transfer" },
	{ 0x55aead74, "__put_page" },
	{ 0xde3654df, "filemap_flush" },
	{ 0x667c5bc1, "file_check_and_advance_wb_err" },
	{ 0x697b6dcf, "jbd2_complete_transaction" },
	{ 0xa65917f6, "clear_nlink" },
	{ 0xa16c77dc, "iget_locked" },
	{ 0x59203634, "vfs_fsync_range" },
	{ 0x6f44ab, "setattr_prepare" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xbef34b64, "generic_fillattr" },
	{ 0x5d40dc60, "inode_init_owner" },
	{ 0x4e758ad3, "noop_backing_dev_info" },
	{ 0x241c668c, "bh_uptodate_or_lock" },
	{ 0x5159f6d8, "percpu_free_rwsem" },
	{ 0x91a958e, "truncate_inode_pages" },
	{ 0x9addec43, "dquot_commit" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xa11874e, "bio_associate_blkg" },
	{ 0xdf929370, "fs_overflowgid" },
};

MODULE_INFO(depends, "mbcache,jbd2");


MODULE_INFO(srcversion, "9E1E992EAE0620E898C2123");
