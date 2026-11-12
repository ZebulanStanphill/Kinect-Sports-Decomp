typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);

typedef struct Target_822BF0B0 Target_822BF0B0;
typedef struct TargetVtbl_822BF0B0 {
    void *slot0;
    void *slot1;
    __vector4 *(*GetPosition)(__vector4 *result, Target_822BF0B0 *self);
} TargetVtbl_822BF0B0;
struct Target_822BF0B0 {
    TargetVtbl_822BF0B0 *vt;
};

typedef struct Listener_822BF0B0 Listener_822BF0B0;
typedef struct ListenerVtbl_822BF0B0 {
    void *slot0;
    void *slot1;
    void (*Notify)(Listener_822BF0B0 *self, int hit, int b, int a);
} ListenerVtbl_822BF0B0;
struct Listener_822BF0B0 {
    ListenerVtbl_822BF0B0 *vt;
};

typedef struct Actor_822BF0B0 {
    char pad0[0x24];
    int busy;                       /* 0x24 */
    char pad28[0x58];
    __vector4 position;             /* 0x80 */
    char pad90[0x1e0];
    Target_822BF0B0 *target;        /* 0x270 */
    char pad274[0x2c];
    char hitTest[0x308];            /* 0x2a0 */
    Listener_822BF0B0 *listener;    /* 0x5a8 */
} Actor_822BF0B0;

extern int fn_82321FA8(void *hitTest, Actor_822BF0B0 *actor, int a, __vector4 v, __vector4 dir);

static __forceinline __vector4 Normalize3(__vector4 v)
{
    __vector4 d, h, rsq, rcp, rt, zero, mask, result;
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    d = __vmsum3fp(v, v);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

void fn_822BF0B0(Actor_822BF0B0 *self, int a, int b, __vector4 v)
{
    __vector4 position;
    __vector4 targetPos;
    int result;
    int hit;

    if (self->busy != 0)
        return;
    position = self->position;
    result = fn_82321FA8(self->hitTest, self, a, v,
                         Normalize3(__vsubfp(position, *self->target->vt->GetPosition(&targetPos, self->target))));
    if (result == 7)
        return;
    {
        Listener_822BF0B0 *listener = self->listener;
        switch (result) {
        case 0:
        case 1:
        case 2:
            hit = 1;
            break;
        case 3:
        case 4:
        case 5:
            hit = 0;
            break;
        case 6:
            hit = 1;
            break;
        default:
            hit = 0;
            break;
        }
        listener->vt->Notify(listener, hit, b, a);
    }
}
