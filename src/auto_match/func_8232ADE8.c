typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_8232ADE8 { char data[0x18]; } Entry_8232ADE8;

typedef struct Ctx_8232ADE8 { char pad[0x93c]; void *mgr; } Ctx_8232ADE8;

typedef struct Obj_8232ADE8 {
    char pad0[0x8];
    Entry_8232ADE8 entries[10];   /* 0x008 */
    void *handle;                 /* 0x0f8 */
    Ctx_8232ADE8 *ctx;            /* 0x0fc */
    unsigned int current;         /* 0x100 */
    char pad104[0xc];
    __vector4 position;           /* 0x110 */
} Obj_8232ADE8;

extern int fn_82560100(void *context, void *target, __vector4 *position, float f, __vector4 *offset,
                       int c, int d, int e);
extern void fn_82575DF0(void *mgr, void *handle);

void fn_8232ADE8(Obj_8232ADE8 *self)
{
    if (self->current != 0) {
        fn_82560100(self->ctx, &self->entries[self->current - 1], &self->position, 0.0f, 0, 0, 0, 0);
    }
    self->current = 0;
    if (self->handle != 0) {
        fn_82575DF0(self->ctx->mgr, self->handle);
        self->handle = 0;
    }
}
