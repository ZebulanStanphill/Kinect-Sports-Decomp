#include "xdk/vectorintrinsics.h"

typedef struct Anim_824554C8 {
    int f0;
    void *active; /* 0x004 */
    char pad8[0x1c4];
    int f1CC;   /* 0x1cc */
    float f1D0; /* 0x1d0 */
    int f1D4;   /* 0x1d4 */
    char pad1D8[8];
    float f1E0; /* 0x1e0 */
} Anim_824554C8;

typedef struct Self_824554C8 {
    char pad0[0xc];
    char fC[0x60]; /* 0x0c */
    float speed;   /* 0x6c */
    char pad70[0xc];
    Anim_824554C8 *anim; /* 0x7c */
    char pad80[0x10];
    int initialized; /* 0x90 */
} Self_824554C8;

void fn_824556F0(Self_824554C8 *self, void *data);
void fn_8254E7D8(Anim_824554C8 *anim, float a, float b, float c, __vector4 v);

static __forceinline void Blend(Anim_824554C8 *anim, float speed, __vector4 zero)
{
    if (anim->active != 0) {
        fn_8254E7D8(anim, 3.402823466e+38f, speed, speed, zero);
    }
}

void fn_824554C8(Self_824554C8 *self)
{
    Anim_824554C8 *anim;
    float rate;
    float weight;

    if (self->initialized == 0) {
        fn_824556F0(self, self->fC);
        self->initialized = 1;
    }
    Blend(self->anim, self->speed, __VMXGetReg(77));
    anim = self->anim;
    if (anim->active != 0) {
        anim->f1D4 = 0;
        rate = -1.0f;
        anim->f1CC = 0;
        weight = 1.0f;
        anim->f1D0 = rate;
        anim->f1E0 = weight;
    }
}
