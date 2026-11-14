typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entity_82421510 {
    char pad0[0x89c];
    float threshold;             /* 0x89c */
    char pad8A0[0xd48 - 0x8a0];
    int handle;                  /* 0xd48 */
} Entity_82421510;

typedef struct Ctx_82421510 { char pad[0x4c]; void *context; } Ctx_82421510;

typedef struct Self_82421510 {
    char pad0[0xc];
    Entity_82421510 **entity;    /* 0x0c */
    Ctx_82421510 *ctx;           /* 0x10 */
    char pad14[0x2c];
    int fired;                   /* 0x40 */
} Self_82421510;

extern int fn_825200A8(void *a, void *b);
extern int fn_82560100(void *context, void *target, __vector4 *position, float f, __vector4 *offset,
                       int c, int d, int e);
extern int lbl_82196288;
extern const float lbl_821CA45C[2];

void fn_82421510(Self_82421510 *self, float t, __vector4 position, __vector4 offset)
{
    Entity_82421510 *e;
    int *handle;

    if (self->fired == 0) {
        e = *self->entity;
        if (t > e->threshold) {
            handle = &e->handle;
            if (fn_825200A8(handle, &lbl_82196288) == 0) {
                fn_82560100(self->ctx->context, handle, &position, lbl_821CA45C[1], &offset, 0, 0, 0);
                self->fired = 1;
            }
        }
    }
}
