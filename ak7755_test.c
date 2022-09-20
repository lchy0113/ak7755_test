#include "ak7755_test.h"

int main(int argc, char *argv[])	
{
	DEGMSG("START");

	int fd = 0;
	int num, volume;
	unsigned long value;

	printf("input number : \n");
	printf("0 : set normal path \n");
	printf("1 : set guard path \n");
	printf("2 : set neighbor path \n");

	if (argc == 1)
	{
		scanf("%d", &num);
	}
	else if (argc == 2)
	{
		num = atoi(argv[1]);
	}
	else if (argc == 3)
	{
		num = atoi(argv[1]);
		volume = atoi(argv[2]);
	}

	fd = open(AK7755_CTRL_DEV, O_RDWR);
	DEGMSG("[%s] fd : %d\n", AK7755_CTRL_DEV, fd);

	switch (num)	{
		case AK7755_NORMAL_PATH:
			value = KDIWIN_AUDIO_PATH_NORMAL;
			if (ioctl(fd, IOCTL_SET_AUDIO_PATH, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case AK7755_GUARD_PATH:
			value = KDIWIN_AUDIO_PATH_HOME_GUARD;
			if (ioctl(fd, IOCTL_SET_AUDIO_PATH, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case AK7755_NEIGHBOR_PATH:
			value = KDIWIN_AUDIO_PATH_HOME_HOME;
			if (ioctl(fd, IOCTL_SET_AUDIO_PATH, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		default:
			DEGMSG();
	}



	close(fd);
	DEGMSG("END");
	return 0;
}
