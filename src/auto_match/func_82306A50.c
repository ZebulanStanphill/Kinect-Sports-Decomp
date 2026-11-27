#include "xdk/vectorintrinsics.h"

typedef struct Config_82306A50 {
    int pad0;
    unsigned char enabled; /* 0x4 */
} Config_82306A50;

typedef struct Range_82306A50 {
    float minimum; /* 0x0 */
    float maximum; /* 0x4 */
    char pad8[300 - 8];
} Range_82306A50;

typedef struct Owner_82306A50 {
    char pad0[0x55c];
    Range_82306A50 delays[1]; /* 0x55c, one per player */
} Owner_82306A50;

typedef struct Self_82306A50 {
    char pad0[0x10];
    Owner_82306A50 *owner; /* 0x10 */
    char pad14[0x3c];
    float time;         /* 0x50 */
    unsigned char done; /* 0x54 */
    char pad55[0xb];
    __vector4 v60; /* 0x60 */
    float delay;   /* 0x70 */
    char pad74[0xc];
    __vector4 v80; /* 0x80 */
    __vector4 v90; /* 0x90 */
    int countA0;   /* 0xa0 */
    char padA4[0xc];
    __vector4 vB0; /* 0xb0 */
    __vector4 vC0; /* 0xc0 */
    int pending;   /* 0xd0 */
} Self_82306A50;

extern Config_82306A50 *lbl_832975B0;
extern Config_82306A50 *fn_82250A18(void);
extern int fn_823CC7A0(void);
extern unsigned int lbl_83265A28;

void fn_82306A50(Self_82306A50 *self)
{
    Owner_82306A50 *owner;
    Range_82306A50 *range;
    Config_82306A50 *config;
    float delay;
    __vector4 zero0;
    __vector4 zero1;
    __vector4 zero2;
    __vector4 zero3;

    union {
        unsigned int bits;
        float value;
    } random;

    zero0 = __VMXGetReg(77);
    zero1 = __VMXGetReg(77);
    zero2 = __VMXGetReg(77);
    zero3 = __VMXGetReg(77);
    owner = self->owner;
    self->time = 0.0f;
    self->vB0 = zero0;
    self->vC0 = zero1;
    self->countA0 = 0;
    self->v80 = zero2;
    self->done = 0;
    self->v90 = zero3;
    self->v60 = __VMXGetReg(77);
    range = &owner->delays[fn_823CC7A0()];
    config = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    delay = range->maximum;
    if (config->enabled == 0) {
        float minimum = range->minimum;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        random.bits = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
        delay = (delay - minimum) * (random.value - 1.0f) + minimum;
    }
    self->delay = delay;
    self->pending = 1;
}
