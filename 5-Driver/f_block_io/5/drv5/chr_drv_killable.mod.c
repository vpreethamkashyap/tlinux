#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xab465258, "module_layout" },
	{ 0x37a0cba, "kfree" },
	{ 0x8823127a, "class_destroy" },
	{ 0x1001d708, "device_destroy" },
	{ 0xbd6d4a8a, "kmem_cache_alloc_trace" },
	{ 0x4ec0494, "kmalloc_caches" },
	{ 0xa27f57cd, "device_create" },
	{ 0x8d8ec813, "__class_create" },
	{ 0xf7267d89, "cdev_del" },
	{ 0xe865f196, "cdev_add" },
	{ 0x33f0e9a7, "cdev_init" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x30551482, "cdev_alloc" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0x75bb675a, "finish_wait" },
	{ 0x4292364c, "schedule" },
	{ 0x622fa02a, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xe45f60d8, "__wake_up" },
	{ 0x37ff4c06, "copy_from_user_overflow" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xa19ace52, "module_refcount" },
	{ 0x5def9f25, "current_task" },
	{ 0x50eedeb8, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6C40D6595213B2A8E8C55CB");
