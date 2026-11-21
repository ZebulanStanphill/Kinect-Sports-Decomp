typedef struct Settings_829E31C8 {
    float width;            /* 0x00 */
    float height;           /* 0x04 */
    int channels;           /* 0x08 */
    int layers;             /* 0x0c */
    int format;             /* 0x10 */
    int pad14;              /* 0x14 */
    unsigned __int64 count; /* 0x18 */
    int flags;              /* 0x20 */
    float rate;             /* 0x24 */
    float scale;            /* 0x28 */
    int pad2c;              /* 0x2c */
} Settings_829E31C8;

typedef struct Self_829E31C8 {
    char pad0[0x8];
    void *device; /* 0x08 */
    char padc[0x34];
    char sub[0x2c];        /* 0x40 */
    unsigned char ready;   /* 0x6c */
    unsigned char started; /* 0x6d */
} Self_829E31C8;

extern const float lbl_8201FBB0;
extern float lbl_8315C704;

extern int fn_829E3C40(void *device, Settings_829E31C8 *settings);
extern int fn_829E5408(void *sub, float *x, float *y, float *z);
extern int fn_829E53C0(void *sub, float x, float y, float z);

int fn_829E31C8(Self_829E31C8 *self)
{
    Settings_829E31C8 settings;
    float x;
    float y;
    float z;
    int hr;

    if (self->ready == 0) {
        return 0x8000ffff;
    }
    if (self->started == 0) {
        return 0x8000ffff;
    }
    settings.channels = 1;
    settings.layers = 1;
    settings.width = 100.0f;
    settings.format = 4;
    settings.height = 100.0f;
    settings.count = 1;
    settings.rate = 60.0f;
    settings.flags = 0;
    settings.scale = lbl_8201FBB0;
    hr = fn_829E3C40(self->device, &settings);
    if (hr < 0) {
        return hr;
    }
    hr = fn_829E5408(self->sub, &x, &y, &z);
    if (hr < 0) {
        return hr;
    }
    if (y <= 0.0f) {
        return 0x8000ffff;
    }
    hr = fn_829E53C0(self->sub, x, y, lbl_8315C704);
    return hr < 0 ? hr : 0;
}
