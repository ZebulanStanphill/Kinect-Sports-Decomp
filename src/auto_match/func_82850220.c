typedef struct Slot_82850220 { int count; int id; } Slot_82850220;
typedef struct Arg_82850220 { int pad0; Slot_82850220 *slot; char pad8[0x14]; void *buffer; } Arg_82850220;
typedef struct Ctx_82850220 { char pad[0x28]; int mode; } Ctx_82850220;
typedef struct Obj_82850220 { char pad[0x90]; Ctx_82850220 *ctx; unsigned int bufferSize; } Obj_82850220;

void *memset(void *dst, int c, unsigned int n);
extern int fn_82859E38(Ctx_82850220 *ctx, int id);
extern void fn_82859E40(Ctx_82850220 *ctx, int id, int index);
extern void fn_828600A0(Ctx_82850220 *ctx, int id);
extern void fn_8285A100(Ctx_82850220 *ctx, int id, int value);
extern void fn_8285FDF0(Ctx_82850220 *ctx, int id);
extern void fn_8284F8A0(Ctx_82850220 *ctx, int id, Obj_82850220 *self, Arg_82850220 *arg);

void fn_82850220(Obj_82850220 *self, Arg_82850220 *arg, int value)
{
    Ctx_82850220 *ctx = self->ctx;
    Slot_82850220 *slot;
    int id;
    int i;

    if (ctx != 0) {
        slot = arg->slot;
    } else {
        slot = 0;
    }
    id = slot->id;
    if (ctx->mode == 1) {
        memset(arg->buffer, 0, self->bufferSize);
        i = 0;
        if (0 < fn_82859E38(ctx, id)) {
            do {
                fn_82859E40(ctx, id, i);
                fn_828600A0(ctx, id);
                i++;
            } while (i < fn_82859E38(ctx, id));
        }
    } else {
        fn_828600A0(ctx, id);
    }
    slot->count++;
    fn_8285A100(ctx, id, value);
    fn_8285FDF0(ctx, id);
    if (self->ctx->mode == 1) {
        fn_8284F8A0(ctx, id, self, arg);
    }
}
