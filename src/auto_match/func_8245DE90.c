typedef struct Params_8245DE90 {
    unsigned int size; /* 0x00: width << 16 | height */
    int rate;          /* 0x04 */
    int bitRate;       /* 0x08 */
    int quality;       /* 0x0c */
    int count;         /* 0x10 */
    int flags;         /* 0x14 */
    int sourceA;       /* 0x18 */
    int sourceB;       /* 0x1c */
} Params_8245DE90;

typedef struct Encoder_8245DE90 {
    int pad00;
    int handle;  /* 0x04 */
    int sourceA; /* 0x08 */
    char pad0c[0x14 - 0x0c];
    int sourceB; /* 0x14 */
    char pad18[0x50 - 0x18];
    int started; /* 0x50 */
    int dirty;   /* 0x54 */
    char pad58[0x5c - 0x58];
    int output; /* 0x5c */
    char pad60[0xcc - 0x60];
    int width;  /* 0xcc */
    int height; /* 0xd0 */
    char padd4[0xdc - 0xd4];
    int mode;          /* 0xdc */
    unsigned int busy; /* 0xe0 */
} Encoder_8245DE90;

extern int fn_8245DD40(Encoder_8245DE90 *self);
extern int fn_8245DB68(Encoder_8245DE90 *self);
extern int fn_82E23478(Params_8245DE90 *params, int *handle);
extern int fn_82E23100(int *handle, int sourceA, int sourceB, int flags, int *output);
extern int lbl_83276598;

int fn_8245DE90(Encoder_8245DE90 *self, int mode)
{
    int hr;
    Params_8245DE90 params;
    int invalid;

    invalid = self->started == 1 || self->busy > 0;
    if (invalid) {
        hr = 0x15;
    } else if (self->dirty != 1 || (hr = fn_8245DD40(self)) == 0) {
        self->mode = mode;
        self->width = 640;
        self->height = 480;
        hr = fn_8245DB68(self);
        if (hr == 0) {
            params.size = 640 << 16 | 480;
            params.rate = 30;
            params.bitRate = 4000;
            params.quality = 0xfe;
            params.count = 4;
            params.flags = 0;
            params.sourceA = self->sourceA;
            params.sourceB = self->sourceB;
            hr = fn_82E23478(&params, &self->handle);
            if (hr == 0) {
                hr = fn_82E23100(&self->handle, self->sourceA, self->sourceB, 0, &self->output);
                if (hr == 0) {
                    self->busy = 0;
                    self->started = 1;
                    lbl_83276598 = 1;
                    goto done;
                }
            }
        }
    }
    if (self->started == 0) {
        fn_8245DD40(self);
    }
done:
    return hr;
}
