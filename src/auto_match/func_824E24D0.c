typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Target_824E24D0 {
    char pad000[0x960];
    unsigned char active;       /* 0x960 */
    unsigned char mode;         /* 0x961 */
    char pad962[0xe];
    __vector4 position;         /* 0x970 */
    float time;                 /* 0x980 */
} Target_824E24D0;

void fn_824E24D0(Target_824E24D0 *self, unsigned char mode, float time, __vector4 position)
{
    self->time = time;
    self->mode = mode;
    self->active = 1;
    self->position = position;
}
