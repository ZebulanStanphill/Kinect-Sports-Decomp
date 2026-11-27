struct Voice_83004B48 {
    virtual void SetVolume(int flags, float volume, int immediate);
};

struct Sound_83004B48 {
    int unknown00;
    Voice_83004B48 voice; /* 0x04 */
    char unknown08[0x18];
    unsigned int fade; /* 0x20 */
    char unknown24[0x18];
    unsigned char volume; /* 0x3c */
};

struct Request_83004B48 {
    Voice_83004B48 *voice; /* 0x00 */
    int flags;             /* 0x04 */
    float from;            /* 0x08 */
    float to;              /* 0x0c */
    int duration;          /* 0x10 */
    int curve;             /* 0x14 */
    unsigned char stop;    /* 0x18 */
};

extern "C" {
extern void *lbl_832642F4;
void fn_82FF5400(void *manager, unsigned int fade, int flags, float target, int duration, int curve,
                 int mode);
unsigned int fn_82FF59A8(void *manager, Request_83004B48 *request, int count, int unknown);
void fn_83004B48(void *self, Sound_83004B48 *sound, unsigned char restore, int curve, int duration);
}

void fn_83004B48(void *self, Sound_83004B48 *sound, unsigned char restore, int curve, int duration)
{
    Request_83004B48 request;

    if (sound != 0) {
        request.from = ((float)(sound->volume - 0xff) * 96.3f) * (1.0f / 255.0f);
        request.to = restore == 0 ? -96.3f : 0.0f;
        if (sound->fade != 0) {
            fn_82FF5400(lbl_832642F4, sound->fade, 0x800000, request.to, duration, curve, 0);
        }
        if (sound->fade == 0) {
            request.flags = 0x800000;
            if (duration != 0) {
                request.curve = curve;
                request.duration = duration;
                request.stop = 1;
                request.voice = &sound->voice;
                sound->fade = fn_82FF59A8(lbl_832642F4, &request, 1, 0);
            } else {
                sound->voice.SetVolume(0x800000, request.to, 1);
            }
        }
    }
}
