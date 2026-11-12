/* Ray test from this object's position towards a target (both with w cleared): walks the
   current group of the list and returns 1 when another object passes fn_822C50B8 against the
   normalised direction, the target distance and the squared radius. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);

extern const __vector4 lbl_8329EA20;    /* select mask: x, y, z from the first operand */

typedef struct Object_822C3FA8 {
    char pad0[0x80];
    __vector4 position;     /* 0x80 */
} Object_822C3FA8;

typedef struct Group_822C3FA8 {
    char pad0[0x8];
    unsigned int count;     /* 0x08 */
} Group_822C3FA8;

typedef struct List_822C3FA8 {
    Group_822C3FA8 **groups;    /* 0x00 */
    char pad4[0xc];
    int current;                /* 0x10 */
} List_822C3FA8;

typedef int (*Filter_822C3FA8)(Object_822C3FA8 *obj);

extern Object_822C3FA8 *fn_822ABA88(Group_822C3FA8 *group, unsigned int index);
extern int fn_822C50B8(Object_822C3FA8 *obj, __vector4 origin, __vector4 dir, float maxDistSq, float radiusSq,
                       Filter_822C3FA8 filter, float *distSqOut);

static __forceinline __vector4 Normalize3(__vector4 v)
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
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

int fn_822C3FA8(Object_822C3FA8 *self, List_822C3FA8 *list, float radius, Filter_822C3FA8 filter,
                __vector4 target)
{
    __vector4 zero, zero2, origin, to, diff, distSq, dir;
    float radiusSq = radius * radius;
    float out;
    unsigned int i;
    Object_822C3FA8 *obj;
    Object_822C3FA8 *hit = 0;

    zero = __VMXGetReg(77);
    zero2 = __VMXGetReg(77);
    origin = __vsel(self->position, zero, lbl_8329EA20);
    to = __vsel(target, zero2, lbl_8329EA20);
    diff = __vsubfp(to, origin);
    distSq = __vmsum3fp(diff, diff);
    dir = Normalize3(diff);
    for (i = 0; i < list->groups[list->current]->count; i++) {
        obj = fn_822ABA88(list->groups[list->current], i);
        if (obj != self) {
            if (fn_822C50B8(obj, origin, dir, distSq.vector4_f32[0], radiusSq, filter, &out) != 0) {
                hit = obj;
                break;
            }
        }
    }
    if (hit != 0)
        return 1;
    return 0;
}
