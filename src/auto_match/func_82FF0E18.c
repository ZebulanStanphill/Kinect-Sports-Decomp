typedef struct Voice_82FF0E18 Voice_82FF0E18;

typedef struct VoiceVt_82FF0E18 {
    void *pad0[5];
    void (*Stop)(Voice_82FF0E18 *self); /* 0x14 */
} VoiceVt_82FF0E18;

struct Voice_82FF0E18 {
    VoiceVt_82FF0E18 *vt; /* 0x00 */
    char pad4[0x58];
    void *handle; /* 0x5c */
    char pad60[0x77];
    unsigned char state; /* 0xd7 */
    char padd8[0x58];
    unsigned int delay; /* 0x130 */
};

extern void *lbl_832642F4;
extern int fn_82FF0478(void *self, int arg, int flags, __int64 time, int mode);
extern void fn_82FF5400(void *mgr, void *handle, int flags, float value, int time, int curve, int mode);
extern void fn_82FF0250(Voice_82FF0E18 *self);

int fn_82FF0E18(Voice_82FF0E18 *self, __int64 *time, unsigned char force)
{
    if (force == 0 && self->delay > 1) {
        self->delay = self->delay - 1;
    } else {
        self->delay = 0;
        self->vt->Stop(self);
        if (*(int *)time != 0) {
            fn_82FF0478(self, 0, 0x8000000, *time, 0);
        } else if (self->handle != 0) {
            fn_82FF5400(lbl_832642F4, self->handle, 0x8000000, 0.0f, 0, 4, 0);
        } else {
            self->state = 0xff;
            fn_82FF0250(self);
        }
    }
    return 1;
}
