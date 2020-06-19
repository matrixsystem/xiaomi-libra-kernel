#ifndef AUDIO_SERVICE_H
#define AUDIO_SERVICE_H

#define AUDIO_SERVICE_IOCTL_MAGIC 'a'

#define AUDIO_SERVICE_CAL_SET _IOWR(AUDIO_SERVICE_IOCTL_MAGIC, 1, void*)
#define AUDIO_SERVICE_CAL_GET _IOWR(AUDIO_SERVICE_IOCTL_MAGIC, 2, void*)
#define AUDIO_SERVICE_PRESET_SET _IOWR(AUDIO_SERVICE_IOCTL_MAGIC, 3, void*)

#endif