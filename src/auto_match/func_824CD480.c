#include "xdk/vectorintrinsics.h"

extern void *XMemSet(void *dst, int value, unsigned int size);

typedef struct Settings_824CD480 {
    __vector4 origin; /* 0x0 */
    char slots[0x40]; /* 0x10 */
    float scale[3];   /* 0x50 */
    float threshold;  /* 0x5c */
    float step;       /* 0x60 */
} Settings_824CD480;

Settings_824CD480 *fn_824CD480(Settings_824CD480 *self)
{
    self->origin = __VMXGetReg(77);
    self->step = 0.05f;
    self->scale[0] = 0.25f;
    self->scale[1] = 0.25f;
    self->scale[2] = 0.25f;
    self->threshold = 0.03f;
    XMemSet(self->slots, 0, sizeof(self->slots));
    return self;
}
