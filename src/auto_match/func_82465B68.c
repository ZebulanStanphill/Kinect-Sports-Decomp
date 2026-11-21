typedef struct Tuning_82465B68 {
    char pad0[0x14];
    float startValue; /* 0x14 */
    char pad18[0x30];
    unsigned int count; /* 0x48 */
    char pad4C[0x28];
    float step; /* 0x74 */
} Tuning_82465B68;

typedef struct Self_82465B68 {
    char pad0[0xd0];
    int mode;   /* 0xd0 */
    int active; /* 0xd4 */
    char padD8[4];
    float value; /* 0xdc */
    float rate;  /* 0xe0 */
} Self_82465B68;

extern Tuning_82465B68 lbl_831D3858;
extern void fn_82466200(Self_82465B68 *self, unsigned int index, float step);

void fn_82465B68(Self_82465B68 *self, int mode)
{
    if (mode != self->mode) {
        self->mode = mode;
        switch (mode) {
        case 0:
            if (self->active != 0) {
                self->active = 0;
            }
            self->value = 0.0f;
            break;
        case 1: {
            Tuning_82465B68 *tuning = &lbl_831D3858;
            unsigned int i;

            self->value = tuning->startValue;
            self->rate = 0.003f;
            for (i = 0; i < tuning->count; i++) {
                fn_82466200(self, i, tuning->step);
            }
            break;
        }
        }
    }
}
