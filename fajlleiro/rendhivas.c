#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/list.h>
#include <linux/fdtable.h>

MODULE_DESCRIPTION ("Ez a PARP konyv bevezetesenek pelda modulja");
MODULE_AUTHOR ("Bátfai Norbert (nbatfai@gmail.com)");
MODULE_LICENSE ("GPL");

static int fleiro_init (void) {
 struct task_struct *task;
 struct list_head *p;

 list_for_each (p, current->tasks.next){
   task = list_entry (p, struct task_struct, tasks);
   printk (KERN_NOTICE "%s %i %i\n", task->comm,
   task->pid, task->files->next_fd);
 }

 return 0;
}

static void fleiro_exit (void) {
 printk (KERN_NOTICE "fleiro modul kilep\n");
}

module_init (fleiro_init);
module_exit (fleiro_exit);
