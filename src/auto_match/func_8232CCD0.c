typedef struct Settings_8232CCD0 {
    char pad0[0x27c];
    int randomize;
} Settings_8232CCD0;

typedef struct State_8232CCD0 {
    char pad0[8];
    Settings_8232CCD0 *settings;
    void *controller;
    int minimum;
    int maximum;
    char pad18[0x20];
    int choice;
} State_8232CCD0;

extern void fn_8232C528(void *controller, int mode);
extern unsigned int lbl_83265A28;

static __forceinline float RandomUnit(unsigned int *seed)
{
    union {
        unsigned int bits;
        float value;
    } u;

    *seed = *seed * 0x19660d + 0x3c6ef35f;
    u.bits = (*seed & 0x7fffff) | 0x3f800000;
    return u.value - 1.0f;
}

void fn_8232CCD0(State_8232CCD0 *self)
{
    if (self->settings->randomize) {
        int maximum = self->maximum + 1;
        int minimum = self->minimum;
        self->choice = (int)((float)(maximum - minimum) * RandomUnit(&lbl_83265A28) + (float)minimum);
    } else {
        fn_8232C528(self->controller, 2);
    }
}
