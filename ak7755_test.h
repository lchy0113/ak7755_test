#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/mman.h>
#include <string.h>
#include "ak7755_ioctl.h"


#define DEBUG 
#ifdef DEBUG 
#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_RESET "\x1b[0m"
#define DEBUG_PREFIX ANSI_COLOR_RED " << AK7755_TEST >> "
#define DEGMSG(msg,...) fprintf(stderr, DEBUG_PREFIX "[%s %s %d] : " msg "\n" ANSI_COLOR_RESET, \
                                        __FILE__, __func__, __LINE__, ##__VA_ARGS__)

#else
#define DEGMSG(...)
#endif


#define AK7755_CTRL_DEV "/dev/ak7755_ctrl"

#if 0
enum cx2070x_ioctl_id {
	CX2070X_IOCTL_NORMAL,
	CX2070X_IOCTL_DOOR_CALL,
	CX2070X_IOCTL_DOOR_TALK,
	CX2070X_IOCTL_VOIP_HOME_GUARD,
	CX2070X_IOCTL_VOIP_HOME_HOME,
	CX2070X_IOCTL_VOIP_HOME_LOBBY,
	CX2070X_IOCTL_HOME_PSTN,
	CX2070X_IOCTL_VOIP_SUB_GUARD,
	CX2070X_IOCTL_VOIP_SUB_HOME,
	CX2070X_IOCTL_VOIP_SUB_LOBBY,
	CX2070X_IOCTL_SUB_PSTN,
	CX2070X_IOCTL_VOIP_DOOR_SMARTPHONE,
	CX2070X_IOCTL_VOIP_LOBBY_SMARTPHONE,
	CX2070X_IOCTL_MIC_MUTE,
	CX2070X_IOCTL_SPK_MUTE,
	CX2070X_IOCTL_GET_VOL,
	CX2070X_IOCTL_SET_VOL,
	CX2070X_IOCTL_DAMP
};
#endif
