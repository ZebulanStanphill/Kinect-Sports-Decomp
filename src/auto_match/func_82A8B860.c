typedef struct Player_82A8B860 Player_82A8B860;

typedef struct PlayerVtbl_82A8B860 {
    void *f00;
    void *f04;
    int (*GetState)(Player_82A8B860 *self); /* 0x08 */
} PlayerVtbl_82A8B860;

struct Player_82A8B860 {
    PlayerVtbl_82A8B860 *vt;
    char pad4[0x5988 - 0x4];
    unsigned int frameCount; /* 0x5988 */
    float frameRate;         /* 0x598c */
    int width;               /* 0x5990 */
    int height;              /* 0x5994 */
    int format;              /* 0x5998 */
    int flags;               /* 0x599c */
};

int fn_82A8B860(Player_82A8B860 *self, float *duration, int *width, int *height, int *format, int *flags)
{
    int hr;

    hr = self->vt->GetState(self);
    if (duration != 0) {
        *duration = hr >= 0 ? (float)(self->frameCount - 1) / self->frameRate : 0.0f;
    }
    if (width != 0) {
        *width = hr >= 0 ? self->width : 0;
    }
    if (height != 0) {
        *height = hr >= 0 ? self->height : 0;
    }
    if (format != 0) {
        *format = hr >= 0 ? self->format : 0;
    }
    if (flags != 0) {
        *flags = hr >= 0 ? self->flags : 0;
    }
    return hr;
}
