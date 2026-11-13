typedef struct Slot_82850438 { int count; int id; } Slot_82850438;
typedef struct Arg_82850438 { int pad0; Slot_82850438 *slot; char pad8[0x14]; void *buffer; } Arg_82850438;
typedef struct Obj_82850438 { char pad[0x90]; void *ctx; unsigned int bufferSize; } Obj_82850438;

void *memset(void *dst, int c, unsigned int n);
extern int fn_82859E38(void *ctx, int id);
extern void fn_82859E40(void *ctx, int id, int index);
extern void fn_828600E0(void *ctx, int id);
extern void fn_8284F8A0(void *ctx, int id, Obj_82850438 *self, Arg_82850438 *arg);

void fn_82850438(Obj_82850438 *self, Arg_82850438 *arg)
{
    void *ctx = self->ctx;
    Slot_82850438 *slot;
    int id;
    int i;
    int n;

    if (ctx != 0) {
        slot = arg->slot;
    } else {
        slot = 0;
    }
    id = slot->id;
    memset(arg->buffer, 0, self->bufferSize);
    i = 0;
    n = fn_82859E38(ctx, id);
    if (0 < n) {
        do {
            fn_82859E40(ctx, id, i);
            fn_828600E0(ctx, id);
            i++;
        } while (i < fn_82859E38(ctx, id));
    }
    slot->count++;
    fn_8284F8A0(ctx, id, self, arg);
}
