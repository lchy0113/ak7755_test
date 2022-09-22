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

enum ak7755_id {
	PATH_NORMAL = 0,
	PATH_DOOR,
	PATH_DOOR_MELODY,
	PATH_HOME_HOME,
	PATH_HOME_LOBBY,
	PATH_HOME_GUARD,        /*  5 */
	PATH_PSTN,
	PATH_PSTN_ARS,
	PATH_SUB_HOME,
	PATH_SUB_LOBBY,
	PATH_SUB_GUARD,         /* 10 */
	PATH_SUB_PSTN,
	PATH_DOOR_SMARTPHONE,
	PATH_HOME_SMARTPHONE,
	PATH_LOBBY_SMARTPHONE,
	PATH_GUARD_SMARTPHONE,  /* 15 */
	SET_AUDIO_MUTE,
	GET_AUDIO_MUTE,
	SET_MIC_MUTE,
	GET_MIC_MUTE,
	SET_BACK_OUT,			/* 20 */
	GET_BACK_OUT,
	PATH_END,
};
