#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/list.>

int simple_init(void) {
	printk(KERN_INFO "Loading Module\nVeigar");
	return 0;
}

void simple_exit(void) {
	printk(KERN_INFO "Removing Module\nVeigar");
}

module_init(simple_init);
module_exit(simple_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("descripcion generica");
MODULE_AUTHOR("Mario");