#ifndef _LINUX_N0KZ_ATTRIBUTES_H
#define _LINUX_N0KZ_ATTRIBUTES_H

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/kobject.h>
#include <linux/sysfs.h>

struct n0kz_attributes {
    int pid_shrink;
    int file_sync;
};

extern struct n0kz_attributes n0kz_data;

#endif /* _LINUX_N0KZ_ATTRIBUTES_H */
