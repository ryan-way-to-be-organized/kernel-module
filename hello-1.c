#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
  printk(KERN_INFO "Hello world1.\n");

  return 0;
}

void cleanup_module(void)
{
  printk(KERN_INFO "Goodbye world1.\n");
}
