#include "ak7755_test.h"

int main(int argc, char *argv[])	
{
	DEGMSG("START");

	int fd = 0;
	int num, mute, volume;
	unsigned long value;

	printf("input number : \n");
	printf("------set path-----\n");
	printf("0 : set normal path \n");
	printf("1 : set door path \n");
	printf("2 : set door melody path \n");
	printf("3 : set home home path \n");
	printf("4 : set home lobby path \n");
	printf("5 : set home guard path \n");
	printf("6 : set pstn path \n");
	printf("7 : set pstn ars path \n");
	printf("8 : set sub home path \n");
	printf("9 : set sub lobby path \n");
	printf("10 : set sub guard path \n");
	printf("11 : set sub pstn path \n");
	printf("12 : set door smartphone path \n");
	printf("13 : set home smartphone path \n");
	printf("14 : set lobby smartphone path \n");
	printf("15 : set guard smartphone path \n");
	printf("------set volume-----\n");
	printf("16 : set audio mute \n");
	printf("17 : get audio mute \n");

	if (argc == 1)
	{
		scanf("%d", &num);
	}
#if 0
	else if (argc == 2)
	{
		num = atoi(argv[1]);
	}
	else if (argc == 3)
	{
		num = atoi(argv[1]);
		volume = atoi(argv[2]);
	}
#endif

	fd = open(AK7755_CTRL_DEV, O_RDWR);
	DEGMSG("[%s] fd : %d\n", AK7755_CTRL_DEV, fd);

	switch (num)	{
		case PATH_NORMAL:
			value = KDIWIN_AUDIO_PATH_NORMAL;
			if (ioctl(fd, IOCTL_SET_AUDIO_PATH, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case PATH_DOOR:
			value = KDIWIN_AUDIO_PATH_DOOR;
			if (ioctl(fd, IOCTL_SET_AUDIO_PATH, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case PATH_HOME_GUARD:
			value = KDIWIN_AUDIO_PATH_HOME_GUARD;
			if (ioctl(fd, IOCTL_SET_AUDIO_PATH, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case PATH_HOME_HOME:
			value = KDIWIN_AUDIO_PATH_HOME_HOME;
			if (ioctl(fd, IOCTL_SET_AUDIO_PATH, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case SET_AUDIO_MUTE:
			printf("mute ? \n"); 
			scanf("%d", &mute);
			value = (mute?1:0);
			if (ioctl(fd, IOCTL_SET_AUDIO_MUTE, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case GET_AUDIO_MUTE:
			if (ioctl(fd, IOCTL_GET_AUDIO_MUTE, &value) < 0) {
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
