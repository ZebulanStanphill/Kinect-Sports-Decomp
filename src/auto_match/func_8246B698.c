/* Updates the two effect pairs of an emitter set. Each slot (0x40 bytes) has a target
   position and two effects; the second effect is destroyed (fn_8246B5D8) and cleared once
   it is closer to the target than settings[5]. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Effect_8246B698 {
    char pad[0xa0];
    __vector4 position;
} Effect_8246B698;

typedef struct Slot_8246B698 {
    __vector4 target;          /* 0x00 */
    char pad10[0x14];
    Effect_8246B698 *first;    /* 0x24 */
    Effect_8246B698 *second;   /* 0x28 */
    char pad2c[0x14];
} Slot_8246B698;

typedef struct Owner_8246B698 {
    char pad[0x10];
    Slot_8246B698 slots[2];
} Owner_8246B698;

extern float lbl_831C6D60[];

extern void fn_8246A650(Effect_8246B698 *effect, float dt);
extern void fn_8246B5D8(Effect_8246B698 *effect);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline void Destroy(Effect_8246B698 *effect)
{
    if (effect != 0) {
        fn_8246B5D8(effect);
    }
}

void fn_8246B698(Owner_8246B698 *self, float dt)
{
    int i;

    for (i = 0; i < 2; i++) {
        if (self->slots[i].first != 0) {
            fn_8246A650(self->slots[i].first, dt);
        }
        if (self->slots[i].second != 0) {
            __vector4 l;

            fn_8246A650(self->slots[i].second, dt);
            l = Length3(__vsubfp(self->slots[i].second->position, self->slots[i].target));
            if (l.vector4_f32[0] < lbl_831C6D60[5]) {
                Destroy(self->slots[i].second);
                self->slots[i].second = 0;
            }
        }
    }
}
