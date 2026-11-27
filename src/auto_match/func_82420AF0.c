/* Moves the object up by `dy`, makes its body keyframed and marks it dirty; `spawn` also starts the
   spawn effect at the context's position. Exact only when compiled together with fn_825200A8
   (link-time code generation): r6 and r7 stay live across that call. */

#include "xdk/vectorintrinsics.h"

typedef struct Float3_82420AF0 {
    float x;
    float y;
    float z;
} Float3_82420AF0;

typedef struct Entity_82420AF0 {
    char pad0[0xd4c];
    int handle; /* 0xd4c */
    char padD50[4];
    int target; /* 0xd54 */
} Entity_82420AF0;

typedef struct Body_82420AF0 {
    char padding00[0xe8];
    unsigned char motionType; /* 0xe8 */
} Body_82420AF0;

typedef struct Ctx_82420AF0 {
    char pad0[0x4c];
    void *context;      /* 0x4c */
    __vector4 position; /* 0x50 */
    char pad60[0x1d0 - 0x60];
    int dirty; /* 0x1d0 */
    char pad1D4[0x7c0 - 0x1d4];
    Body_82420AF0 *body; /* 0x7c0 */
} Ctx_82420AF0;

typedef struct Self_82420AF0 {
    char pad0[0xc];
    Entity_82420AF0 **entity; /* 0x0c */
    Ctx_82420AF0 *ctx;        /* 0x10 */
    char pad14[0xc];
    __vector4 position; /* 0x20 */
    int state;          /* 0x30 */
} Self_82420AF0;

extern int fn_825200A8(void *a, void *b);
extern int fn_82560100(void *context, void *target, __vector4 *position, float f, const __vector4 *offset,
                       int c, int d, int e);
extern void fn_8253C548(Ctx_82420AF0 *ctx, __vector4 *position, const Float3_82420AF0 *angles);
extern void fn_82D8B6C8(Body_82420AF0 *body, int motionType, int activation, int updateFilter);
extern void fn_82563B08(Body_82420AF0 *body, __vector4 a, __vector4 b);
extern int lbl_82196288;
extern const float lbl_821CA45C[2];
extern const __vector4 lbl_821962C0;
extern const __vector4 lbl_821962E0;
extern const Float3_82420AF0 lbl_821CA1A0;

/* Starts the spawn effect at `position` unless the entity's handle is already the idle one. */
static __forceinline void Spawn(void *context, Entity_82420AF0 *e, __vector4 position)
{
    if (fn_825200A8(&e->handle, &lbl_82196288) == 0) {
        fn_82560100(context, &e->target, &position, lbl_821CA45C[1], &lbl_821962E0, 0, 0, 0);
    }
}

void fn_82420AF0(Self_82420AF0 *self, float dy, int spawn)
{
    Body_82420AF0 *body;

    if (spawn != 0) {
        Ctx_82420AF0 *ctx = self->ctx;
        Entity_82420AF0 *e = *self->entity;

        Spawn(ctx->context, e, ctx->position);
    }
    {
        __vector4 position = self->position;

        position.vector4_f32[1] += dy;
        fn_8253C548(self->ctx, &position, &lbl_821CA1A0);
    }
    body = self->ctx->body;
    if (body->motionType != 4) {
        fn_82D8B6C8(body, 4, 1, 0);
        fn_82563B08(self->ctx->body, lbl_821962C0, lbl_821962C0);
    }
    self->ctx->dirty = 1;
    self->state = 2;
}
