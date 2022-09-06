#include "ak7755_test.h"

int main(int argc, char *argv[])	
{
	DEGMSG("START");

	int fd = 0;
	int num, volume;
	unsigned long value;

	printf("input number : \n");
#if 0
	printf("0 : set normal \n");
	printf("1 : set door_call\n");
	printf("2 : set door_talk\n");
	printf("3 : set voip_home_guard \n");
	printf("4 : set voip_home_home \n");
	printf("5 : set voip_home_lobby \n");
	printf("6 : set home_pstn \n");
	printf("7 : set voip_sub_guard \n");
	printf("8 : set voip_sub_home \n");
	printf("9 : set voip_sub_lobby \n");
	printf("10 : set sub_pstn \n");
	printf("11 : set voip_door_smartphone \n");
	printf("12 : set voip_lobby_smartphone \n");
	printf("13 : set mic_mute(1:set, 0:unset) \n");
	printf("14 : set spk_mute(1:set, 0:unset) \n");
	printf("15 : get volume \n");
	printf("16 : set volume \n");
	printf("17 : set damp \n");
#endif	
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
#if 0
		case CX2070X_IOCTL_NORMAL:
			if (ioctl(fd, CX2070X_IOCTL_NORMAL_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_DOOR_CALL:
			printf("input backcall mode : \n");
			if (ioctl(fd, CX2070X_IOCTL_DOOR_CALL_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_DOOR_TALK:
			if (ioctl(fd, CX2070X_IOCTL_DOOR_TALK_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_HOME_GUARD:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_HOME_GUARD_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_HOME_HOME:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_HOME_HOME_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_HOME_LOBBY:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_HOME_LOBBY_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_HOME_PSTN:
			if (ioctl(fd, CX2070X_IOCTL_HOME_PSTN_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_SUB_GUARD:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_SUB_GUARD_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_SUB_HOME:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_SUB_HOME_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_SUB_LOBBY:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_SUB_LOBBY_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_SUB_PSTN:
			if (ioctl(fd, CX2070X_IOCTL_SUB_PSTN_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_DOOR_SMARTPHONE:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_DOOR_SMARTPHONE_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_VOIP_LOBBY_SMARTPHONE:
			if (ioctl(fd, CX2070X_IOCTL_VOIP_LOBBY_SMARTPHONE_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_MIC_MUTE:
			printf("input mic(left, right) mute set value (1:enable, 0:disable):");
			scanf("%d", &value);

			if (ioctl(fd, CX2070X_IOCTL_MIC_MUTE_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			break;
		case CX2070X_IOCTL_SPK_MUTE:
			printf("input spk(left, right) mute set value (1:enable, 0:disable):");
			scanf("%d", &value);

			if (ioctl(fd, CX2070X_IOCTL_SPK_MUTE_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			break;
		case CX2070X_IOCTL_GET_VOL:
			if (ioctl(fd, CX2070X_IOCTL_GET_VOL_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_SET_VOL:
			printf("input volume 1~5:");
			scanf("%d", &value);

			if (ioctl(fd, CX2070X_IOCTL_SET_VOL_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			DEGMSG("value:0x%x\n", value);
			break;
		case CX2070X_IOCTL_DAMP:
			printf("input damp value (1:enable, 0:disable):");
			scanf("%d", &value);

			if (ioctl(fd, CX2070X_IOCTL_DAMP_SET, &value) < 0) {
				DEGMSG("error ioctl");
				close(fd);
				return -1;
			}
			break;
#endif
		default:
			DEGMSG();
	}



	close(fd);
	DEGMSG("END");
	return 0;
}
