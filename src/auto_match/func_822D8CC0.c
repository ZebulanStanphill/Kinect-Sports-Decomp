// Stores the normalized vector at +0x80 into the body, clears a body word, notifies it, and when
// the body's partner allows it and fn_8236FDE0 agrees, sends event 0x18 and drops the shared
// reference fn_82374520 hands back.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

struct Body_822D8CC0;

typedef struct Partner_822D8CC0 {
    char pad0[0x114];
    void *other;                    // 0x114
} Partner_822D8CC0;

typedef struct Link_822D8CC0 {
    char pad0[0xc];
    Partner_822D8CC0 *partner;      // 0x0c
} Link_822D8CC0;

typedef struct Body_822D8CC0 {
    char pad0[0x90];
    __vector4 direction;            // 0x90
    char padA0[0x78];
    Link_822D8CC0 *link;            // 0x118
    char pad11C[0x1b4];
    int word2D0;                    // 0x2d0
} Body_822D8CC0;

typedef struct World_822D8CC0 {
    char pad0[0x664];
    void *events;                   // 0x664
} World_822D8CC0;

typedef struct Self_822D8CC0 {
    char pad0[0x54];
    Body_822D8CC0 *body;            // 0x54
    World_822D8CC0 *world;          // 0x58
    char pad5C[0x24];
    __vector4 direction;            // 0x80
} Self_822D8CC0;

typedef struct SharedPtr_822D8CC0 {
    void *ptr;
    void *rep;
} SharedPtr_822D8CC0;

extern void fn_822CF300(Body_822D8CC0 *body, int flag);
extern int fn_8255FA88(void *other);
extern int fn_8236FDE0(Body_822D8CC0 *body);
extern void fn_823807F0(void *events, int id);
extern void fn_82374520(SharedPtr_822D8CC0 *out, World_822D8CC0 *world);
extern void fn_822315A0(void *rep);

static __forceinline __vector4 Normalize4(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum4fp(v, v);
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

static __forceinline int Allows(void *other)
{
    if (other != 0) {
        return fn_8255FA88(other);
    }
    return 1;
}

void fn_822D8CC0(Self_822D8CC0 *self)
{
    SharedPtr_822D8CC0 sp;

    self->body->direction = Normalize4(self->direction);
    self->body->word2D0 = 0;
    fn_822CF300(self->body, 0);
    if (Allows(self->body->link->partner->other) != 0 && fn_8236FDE0(self->body) != 0) {
        fn_823807F0(self->world->events, 0x18);
        fn_82374520(&sp, self->world);
        if (sp.rep != 0) {
            fn_822315A0(sp.rep);
        }
    }
}
