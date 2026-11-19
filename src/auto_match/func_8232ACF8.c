typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_8232ACF8 {
    void *target; /* 0x0 */
    unsigned char pad4[0x14];
} Entry_8232ACF8;

typedef struct Ctx_8232ACF8 {
    unsigned char pad[0x93c];
    void *manager; /* 0x93c */
} Ctx_8232ACF8;

typedef struct Obj_8232ACF8 {
    unsigned char pad0[0x4];
    Entry_8232ACF8 entries[9]; /* 0x004 */
    unsigned char padDC[0x14];
    void *defaultTarget;  /* 0x0f0 */
    void *idleTarget;     /* 0x0f4 */
    void *handle;         /* 0x0f8 */
    Ctx_8232ACF8 *ctx;    /* 0x0fc */
    unsigned int current; /* 0x100 */
    unsigned char pad104[0xc];
    __vector4 position; /* 0x110 */
} Obj_8232ACF8;

extern float lbl_82192730[];

extern void *fn_82560100(Ctx_8232ACF8 *context, void *target, __vector4 *position, float blend, void *offset,
                         int c, int d, int e);
extern void fn_82575DF0(void *manager, void *handle);

void fn_8232ACF8(Obj_8232ACF8 *self, unsigned int index)
{
    void **target;
    void *current;

    if (index != self->current) {
        if (self->handle != 0) {
            fn_82575DF0(self->ctx->manager, self->handle);
            self->handle = 0;
        }
        if (index != 0) {
            Entry_8232ACF8 *entry = &self->entries[index - 1];
            if (entry->target != 0) {
                self->handle =
                    fn_82560100(self->ctx, &entry->target, &self->position, lbl_82192730[1], 0, 0, 0, 0);
            }
            current = self->defaultTarget;
            target = &self->defaultTarget;
        } else {
            current = self->idleTarget;
            target = &self->idleTarget;
        }
        if (current != 0) {
            fn_82560100(self->ctx, target, &self->position, 0.0f, 0, 0, 0, 0);
        }
        self->current = index;
    }
}
