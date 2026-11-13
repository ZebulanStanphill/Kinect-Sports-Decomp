typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);

typedef struct Body_822FB230 {
    char pad0[0x10];
    __vector4 pos;
    char pad20[0x20];
    float limit;
} Body_822FB230;

typedef struct Node_822FB230 {
    char pad0[0x114];
    void *p;
} Node_822FB230;

typedef struct Ctx_822FB230 {
    char pad0[0xc];
    Node_822FB230 *node;
} Ctx_822FB230;

typedef struct Self_822FB230 {
    char pad0[0x24];
    Body_822FB230 *body;
    char pad28[0x2c];
    Ctx_822FB230 *ctx;
} Self_822FB230;

extern int fn_8255FA88(void *p);
extern void fn_822FB3B8(Self_822FB230 *self);
extern __vector4 fn_825613E0(__vector4 v, float lo, float hi);

void fn_822FB230(Self_822FB230 *self, __vector4 *in)
{
    Body_822FB230 *body;
    float limit;
    int r;

    if (self->ctx->node->p != 0)
        r = fn_8255FA88(self->ctx->node->p);
    else
        r = 1;
    if (r)
        fn_822FB3B8(self);
    body = self->body;
    limit = body->limit;
    body->pos = fn_825613E0(__vmulfp(*in, __vspltw(__lvlx(&body->limit, 0), 0)), -limit, limit);
}
