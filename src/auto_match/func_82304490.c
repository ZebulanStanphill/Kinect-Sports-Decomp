typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Vec3_82304490 {
    float x, y, z;
} Vec3_82304490;

typedef struct Body_82304490 {
    char pad0[0x10];
    __vector4 pos;
    char pad20[0x20];
    float limit;
} Body_82304490;

typedef struct Range_82304490 {
    float value;
    int enabled;
} Range_82304490;

typedef struct Self_82304490 {
    char pad0[0x20];
    void *x20;
    Body_82304490 *body;
    char pad28[0x2c];
    Range_82304490 *range;
} Self_82304490;

extern void fn_822C6B30(__vector4 *in, void *a, Body_82304490 *body, Vec3_82304490 v);
extern __vector4 fn_825613E0(__vector4 v, float lo, float hi);

void fn_82304490(Self_82304490 *self, __vector4 *in)
{
    Body_82304490 *body;
    float limit;
    Vec3_82304490 v;

    if (self->range->enabled != 0) {
        v.y = self->range->value;
        v.x = 0.0f;
        v.z = 0.0f;
        body = self->body;
        fn_822C6B30(in, self->x20, body, v);
        limit = body->limit;
        body->pos = fn_825613E0(__vmulfp(*in, __vspltw(__lvlx(&body->limit, 0), 0)), -limit, limit);
    }
}
