#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/usb/cdc-wdm.h>

int main()
{
	__u16 max;
	int fd = open("/dev/cdc-wdm0",O_RDWR);
	if(!ioctl(fd,IOCTL_WDM_MAX_COMMAND,&max))
		printf("control message is %d\n",max);
}
