#include <string.h>

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Frame_822BCAB0 {
    __vector4 axes[2]; /* 0x00 */
    float scale[3];    /* 0x20 */
    float pad2C;       /* 0x2C */
} Frame_822BCAB0;

typedef struct Slot_822BCAB0 {
    char pad0[0x440];
    Frame_822BCAB0 frame; /* 0x440 */
    char pad470[0x1c10 - 0x470];
} Slot_822BCAB0;

typedef struct Self_822BCAB0 {
    char pad0[0x24];
    Slot_822BCAB0 *slots; /* 0x24 */
    char pad28[0x228];
    __vector4 rest; /* 0x250 */
} Self_822BCAB0;

void fn_822BCAB0(Self_822BCAB0 *self, int index, Frame_822BCAB0 *out)
{
    __vector4 rest;

    if (self->slots != 0) {
        memcpy(out, &self->slots[index].frame, sizeof(Frame_822BCAB0));
        out->axes[0].vector4_f32[0] *= -1.0f;
        out->axes[0].vector4_f32[2] *= -1.0f;
        out->axes[1].vector4_f32[0] *= -1.0f;
        out->axes[1].vector4_f32[2] *= -1.0f;
    } else {
        rest = self->rest;
        out->scale[1] = 0.0f;
        out->scale[2] = 0.0f;
        out->scale[0] = 0.0f;
        out->axes[0] = rest;
        out->axes[1] = rest;
    }
}
