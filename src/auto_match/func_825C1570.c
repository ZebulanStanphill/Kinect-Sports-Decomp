typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Sound_825C1570 {
    void *emitter; /* 0x00 */
} Sound_825C1570;

typedef struct Spray_825C1570 {
    char pad0[0x54];
    float amount;         /* 0x54 */
    Sound_825C1570 sound; /* 0x58 */
    char pad5C[0x8];
    int active; /* 0x64 */
} Spray_825C1570;

extern int fn_825529B0(Sound_825C1570 *sound);
extern void fn_82535F50(void *emitter, __vector4 *position);
extern void fn_82552AD8(Sound_825C1570 *sound, char *name, float value);
extern void fn_82552B50(Sound_825C1570 *sound, int immediate);
extern float lbl_831D4558[0x4a];

void fn_825C1570(Spray_825C1570 *self, __vector4 position, float elapsed, int stop)
{
    float zero;

    zero = 0.0f;
    if (self->amount > zero) {
        self->amount = self->amount - lbl_831D4558[0x3d] * elapsed;
        if (self->amount > zero) {
            if (self->active != 0 && fn_825529B0(&self->sound) != 0) {
                fn_82535F50(self->sound.emitter, &position);
                fn_82552AD8(&self->sound, "water_spray_amount", self->amount * 100.0f);
            }
        } else {
            stop = 1;
        }
    }
    if (stop != 0 && self->active != 0) {
        if (fn_825529B0(&self->sound) != 0) {
            fn_82552B50(&self->sound, 1);
        }
        self->amount = zero;
        self->active = 0;
    }
}
