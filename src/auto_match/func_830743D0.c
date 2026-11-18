typedef struct Channel_830743D0 {
    int pad0;
    int pad4;
    int enabled; /* 0x8 */
} Channel_830743D0;

typedef struct Mixer_830743D0 {
    char pad0[0x3c0];
    float levels[20]; /* 0x3c0 */
} Mixer_830743D0;

extern Channel_830743D0 lbl_831BCB98[];
extern int fn_8306F320(Mixer_830743D0 *self, void *owner, int index);

void fn_830743D0(Mixer_830743D0 *self, void *owner)
{
    int i;

    for (i = 0; i < 20; i++) {
        if (lbl_831BCB98[i].enabled != 0) {
            switch (fn_8306F320(self, owner, i)) {
            case 1:
                self->levels[i] *= 0.87f;
                continue;
            case 2:
                break;
            default:
                self->levels[i] = 0.0f;
                continue;
            }
            self->levels[i] = 1.0f;
        } else {
            self->levels[i] = 1.0f;
        }
    }
}
