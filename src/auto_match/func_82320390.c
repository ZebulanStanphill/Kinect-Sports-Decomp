// When the timer has passed minTime and the body's speed exceeds the limit, sends the
// trigger's name to the target.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern void fn_822C72E0(void *, const char *);
extern float fn_827F6318(void *);

typedef struct String_82320390 {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
} String_82320390;

typedef struct Clock_82320390 {
    char pad00[0x110];
    void *timer;             // 0x110
} Clock_82320390;

typedef struct World_82320390 {
    char pad00[0xc];
    Clock_82320390 *clock;   // 0x0c
} World_82320390;

typedef struct Trigger_82320390 {
    int unk0;
    String_82320390 name;    // 0x04
    int unk1c;
    World_82320390 *world;   // 0x20
    float minTime;           // 0x24
    float limit;             // 0x28
} Trigger_82320390;

typedef struct Body_82320390 {
    __vector4 position;
    __vector4 velocity;
} Body_82320390;

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

static __forceinline const char *c_str(const String_82320390 *s)
{
    return s->res < 16 ? s->bx.buf : s->bx.ptr;
}

void fn_82320390(Trigger_82320390 *self, void *target, Body_82320390 *body)
{
    if (fn_827F6318(self->world->clock->timer) > self->minTime) {
        __vector4 l = Length3(body->velocity);
        if (l.vector4_f32[0] > self->limit) {
            fn_822C72E0(target, c_str(&self->name));
        }
    }
}
