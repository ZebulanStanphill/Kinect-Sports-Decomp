#include "xdk/vectorintrinsics.h"

extern const __vector4 lbl_82196750;

typedef struct Cfg_825ED6A8 {
    char pad0[0x90];
    int f90; /* 0x90 */
} Cfg_825ED6A8;

typedef struct Body_825ED6A8 {
    Cfg_825ED6A8 *cfg; /* 0x00 */
    int pad4[3];
    __vector4 position; /* 0x10 */
    float radius;       /* 0x20 */
    int pad24[21];
    unsigned int flags[1]; /* 0x78 */
} Body_825ED6A8;

typedef struct Arg_825ED6A8 {
    Body_825ED6A8 *body; /* 0x00 */
    int pad4[3];
    int valid; /* 0x10 */
} Arg_825ED6A8;

typedef struct Plane_825ED6A8 {
    __vector4 plane; /* 0x00 */
    char pad10[0x1f0];
} Plane_825ED6A8;

typedef struct Owner_825ED6A8 {
    char pad0[0x30];
    int mode; /* 0x30 */
    char pad34[0x11c];
    Plane_825ED6A8 planes[5]; /* 0x150 */
    char padB50[0x8c];
    unsigned char enabled; /* 0xbdc */
} Owner_825ED6A8;

typedef struct Self_825ED6A8 {
    int pad0;
    Owner_825ED6A8 *owner; /* 0x04 */
    int pad8[2];
    int index; /* 0x10 */
    int pad14[7];
    int side; /* 0x30 */
} Self_825ED6A8;

static __forceinline unsigned char IsActive(Owner_825ED6A8 *owner)
{
    return owner->mode == 1 && owner->enabled != 0;
}

static __forceinline int Classify(Owner_825ED6A8 *owner, int index, Body_825ED6A8 *body)
{
    __vector4 mask = __VMXGetReg(67);
    float radius = body->radius;
    __vector4 point = __vsel(body->position, lbl_82196750, mask);
    __vector4 d = __vmsum4fp(point, owner->planes[index].plane);
    float dist = d.vector4_f32[0];

    if (dist > radius)
        return 1;
    if (dist < -radius)
        return 0;
    return 2;
}

int fn_825ED6A8(Self_825ED6A8 *self, Arg_825ED6A8 *arg)
{
    Body_825ED6A8 *body;

    if (arg->valid == 0)
        return 0;
    body = arg->body;
    if ((body->flags[self->index] & 0x20) != 0)
        return 0;
    if (body->cfg->f90 != 0 && self->owner->enabled == 0)
        return 0;
    if (!IsActive(self->owner))
        return self->side == 2;
    return Classify(self->owner, self->index, body) == self->side;
}
