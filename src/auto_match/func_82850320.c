typedef struct Ctx_82850320 {
    char pad0[0x1c];
    unsigned int type; /* 0x1c */
} Ctx_82850320;

typedef struct Obj_82850320 {
    char pad0[0x90];
    Ctx_82850320 *ctx; /* 0x90 */
} Obj_82850320;

extern void fn_8284FFE0(Obj_82850320 *self, void *arg, void *source, int value);
extern void fn_82850220(Obj_82850320 *self, void *arg, int value);

void fn_82850320(Obj_82850320 *self, void *arg, void *source, int value)
{
    if (self->ctx == 0) {
        return;
    }
    switch (self->ctx->type) {
    case 0:
        fn_8284FFE0(self, arg, source, value);
        break;
    case 1:
        fn_82850220(self, arg, value);
        break;
    }
}
