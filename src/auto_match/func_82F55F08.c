// Approach-state update: when active, with a scaled body and a target that is not flagged (0x1b0 bit 3),
// state 0 starts tracking (state 2, or 1 when the second mode is free) from the target position; states
// 1 and 2 are dropped when the target leaves the reach (fn_82F55DD0 distance minus lbl_82165D1C beyond
// the two radii), moves farther than lbl_82165D24 from the start point, or the state's own flag is set.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Body_82F55F08 {
    char pad0[0xc];
    float scale;                    /* 0x0c */
} Body_82F55F08;

typedef struct Target_82F55F08 {
    char pad0[0xb0];
    __vector4 position;             /* 0xb0 */
    char padC0[0x140];
    float radiusA;                  /* 0x200 */
    char pad204[0x5c];
    float radiusB;                  /* 0x260 */
} Target_82F55F08;

typedef struct Other_82F55F08 {
    char pad0[0x1b0];
    unsigned int flags;             /* 0x1b0 */
} Other_82F55F08;

typedef struct Self_82F55F08 {
    char pad0[0x4];
    int active;                     /* 0x04 */
    char pad8[0x4];
    int state;                      /* 0x0c */
    char pad10[0x38];
    int modeA;                      /* 0x48 */
    int doneA;                      /* 0x4c */
    char pad50[0x48];
    int modeB;                      /* 0x98 */
    int doneB;                      /* 0x9c */
    char padA0[0x18];
    Body_82F55F08 *body;            /* 0xb8 */
    char padBC[0x4];
    __vector4 start;                /* 0xc0 */
} Self_82F55F08;

extern float lbl_82165D1C;
extern float lbl_82165D24;
extern float fn_82F55DD0(Self_82F55F08 *self, __vector4 position);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

void fn_82F55F08(Self_82F55F08 *self, Target_82F55F08 **target, Other_82F55F08 *other)
{
    int state;
    int done;

    if (self->active == 0 || self->body == 0 || self->body->scale == 0.0f) {
        goto clear;
    }
    if (other != 0 && (other->flags & 8) != 0) {
        goto clear;
    }
    state = self->state;
    if (state == 0) {
        if (self->modeA == 0) {
            self->state = 2;
            self->start = (*target)->position;
        } else if (self->modeB == 0) {
            self->state = 1;
            self->start = (*target)->position;
        }
        return;
    } else {
        Target_82F55F08 *t = *target;
        __vector4 position = t->position;
        __vector4 length;

        if (fn_82F55DD0(self, position) - lbl_82165D1C > t->radiusB + t->radiusA) {
            goto clear;
        }
        length = Length3(__vsubfp(position, self->start));
        if (length.vector4_f32[0] > lbl_82165D24) {
            goto clear;
        }
        if (state == 1) {
            done = self->doneB;
        } else if (state == 2) {
            done = self->doneA;
        } else {
            return;
        }
        if (done == 0) {
            return;
        }
    }
clear:
    self->state = 0;
}
