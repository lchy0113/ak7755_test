#ifndef __AK7755_IOCTL_H__
#define __AK7755_IOCTL_H__
/**
  * AK7755 ioctl table
  */

///////////////////////////////////////////////////////////////////////
#define IOCTL_BASE					    'R'
#define IOCTL_GET_INFO                  _IOR(IOCTL_BASE, 0, struct driver_info*)

#define IOCTL_SET_AUDIO_PATH            _IOW(IOCTL_BASE, 10, unsigned long)
#define IOCTL_SET_AUDIO_MUTE_PATH       _IOW(IOCTL_BASE, 11, unsigned long)
#define IOCTL_GET_AUDIO_PATH            _IOR(IOCTL_BASE, 12, unsigned long)

#define IOCTL_SET_AUDIO_MUTE            _IOW(IOCTL_BASE, 20, unsigned long)
#define IOCTL_GET_AUDIO_MUTE            _IOR(IOCTL_BASE, 21, unsigned long)
#define IOCTL_SET_MIC_MUTE              _IOW(IOCTL_BASE, 22, unsigned long)
#define IOCTL_GET_MIC_MUTE              _IOR(IOCTL_BASE, 23, unsigned long)
#define IOCTL_SET_BACK_OUT              _IOW(IOCTL_BASE, 24, unsigned long)
#define IOCTL_GET_BACK_OUT              _IOR(IOCTL_BASE, 25, unsigned long)
#define IOCTL_SET_DAMP                  _IOW(IOCTL_BASE, 26, unsigned long)
#define IOCTL_GET_DAMP                  _IOR(IOCTL_BASE, 27, unsigned long)

#define IOCTL_SET_DOOR_BACKOUT_VOLUME   _IOW(IOCTL_BASE, 30, unsigned long)
#define IOCTL_GET_DOOR_BACKOUT_VOLUME   _IOR(IOCTL_BASE, 31, unsigned long)
#define IOCTL_SET_DOOR_TALK_VOLUME      _IOW(IOCTL_BASE, 32, unsigned long)
#define IOCTL_GET_DOOR_TALK_VOLUME      _IOR(IOCTL_BASE, 33, unsigned long)
#define IOCTL_SET_NEIGHBOR_TALK_VOLUME  _IOW(IOCTL_BASE, 34, unsigned long)
#define IOCTL_GET_NEIGHBOR_TALK_VOLUME  _IOR(IOCTL_BASE, 35, unsigned long)
#define IOCTL_SET_LOBBY_TALK_VOLUME     _IOW(IOCTL_BASE, 36, unsigned long)
#define IOCTL_GET_LOBBY_TALK_VOLUME     _IOR(IOCTL_BASE, 37, unsigned long)
#define IOCTL_SET_GUARD_TALK_VOLUME     _IOW(IOCTL_BASE, 38, unsigned long)
#define IOCTL_GET_GUARD_TALK_VOLUME     _IOR(IOCTL_BASE, 39, unsigned long)
#define IOCTL_SET_NEIGHBOR_MIC_VOLUME   _IOW(IOCTL_BASE, 40, unsigned long)
#define IOCTL_GET_NEIGHBOR_MIC_VOLUME   _IOR(IOCTL_BASE, 41, unsigned long)
#define IOCTL_SET_LOBBY_MIC_VOLUME      _IOW(IOCTL_BASE, 42, unsigned long)
#define IOCTL_GET_LOBBY_MIC_VOLUME      _IOR(IOCTL_BASE, 43, unsigned long)
#define IOCTL_SET_GUARD_MIC_VOLUME      _IOW(IOCTL_BASE, 44, unsigned long)
#define IOCTL_GET_GUARD_MIC_VOLUME      _IOR(IOCTL_BASE, 45, unsigned long)

#define IOCTL_SET_PSTN_TALK_VOLUME      _IOW(IOCTL_BASE, 50, unsigned long)
#define IOCTL_GET_PSTN_TALK_VOLUME      _IOR(IOCTL_BASE, 51, unsigned long)

#define IOCTL_SET_VOIP_TALK_VOLUME      _IOW(IOCTL_BASE, 60, unsigned long)
#define IOCTL_GET_VOIP_TALK_VOLUME      _IOR(IOCTL_BASE, 61, unsigned long)
///////////////////////////////////////////////////////////////////////

typedef enum KDIWIN_AUDIO_PATHe {
	KDIWIN_AUDIO_PATH_NORMAL = 0,
	KDIWIN_AUDIO_PATH_DOOR,
	KDIWIN_AUDIO_PATH_DOOR_MELODY,
	KDIWIN_AUDIO_PATH_HOME_HOME,
	KDIWIN_AUDIO_PATH_HOME_LOBBY,
	KDIWIN_AUDIO_PATH_HOME_GUARD,        /*  5 */
	KDIWIN_AUDIO_PATH_PSTN,
	KDIWIN_AUDIO_PATH_PSTN_ARS,
	KDIWIN_AUDIO_PATH_SUB_HOME,
	KDIWIN_AUDIO_PATH_SUB_LOBBY,
	KDIWIN_AUDIO_PATH_SUB_GUARD,         /* 10 */
	KDIWIN_AUDIO_PATH_SUB_PSTN,
	KDIWIN_AUDIO_PATH_DOOR_SMARTPHONE,
	KDIWIN_AUDIO_PATH_HOME_SMARTPHONE,
	KDIWIN_AUDIO_PATH_LOBBY_SMARTPHONE,
	KDIWIN_AUDIO_PATH_GUARD_SMARTPHONE,  /* 15 */
	KDIWIN_AUDIO_PATH_END,
}KDIWIN_AUDIO_PATH;


#endif
