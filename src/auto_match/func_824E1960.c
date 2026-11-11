// Returns the velocity vector of the object's physics node (object -> +0xfc -> +0x1c -> +0x3c,
// vector at +0x20) after storing its 3-component length in the node at +0x64; a constant vector
// when fn_824CD030 says the object has no such node.
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

typedef struct Node_824E1960 {
    char pad00[0x20];
    __vector4 velocity;             // 0x20
    char pad30[0x34];
    float speed;                    // 0x64
} Node_824E1960;

typedef struct Body_824E1960 {
    char pad00[0x3c];
    Node_824E1960 *node;            // 0x3c
} Body_824E1960;

typedef struct Holder_824E1960 {
    char pad00[0x1c];
    Body_824E1960 *body;            // 0x1c
} Holder_824E1960;

typedef struct Object_824E1960 {
    char pad00[0xfc];
    Holder_824E1960 *holder;        // 0xfc
} Object_824E1960;

extern const __vector4 lbl_821962C0;

int fn_824CD030(Object_824E1960 *self);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

__vector4 *fn_824E1960(__vector4 *result, Object_824E1960 *self)
{
    if (fn_824CD030(self) != 0) {
        Body_824E1960 *body = self->holder->body;
        __vector4 length = Length3(body->node->velocity);

        body->node->speed = length.vector4_f32[0];
        *result = body->node->velocity;
        return result;
    }
    *result = lbl_821962C0;
    return result;
}
