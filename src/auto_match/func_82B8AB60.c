typedef struct Value_82B8AB60 { unsigned int v[2]; } Value_82B8AB60;
typedef struct Slot_82B8AB60 { unsigned int flags; char pad[0x24]; } Slot_82B8AB60;
typedef struct Ctx_82B8AB60 { char pad[0xc]; Slot_82B8AB60 *slots; char pad2[0x224]; void *env; } Ctx_82B8AB60;

__declspec(noreturn) extern void fn_82AA66A8(void *, int, ...);
extern void fn_82B8A7A0(Value_82B8AB60 *out, Ctx_82B8AB60 *ctx, int slot, int arg);
extern void fn_82B85298(Value_82B8AB60 *out, Ctx_82B8AB60 *ctx, void *env, int slot, int arg);
extern void fn_82B89CA0(Value_82B8AB60 *out, Ctx_82B8AB60 *ctx, int slot, int arg);

Value_82B8AB60 *fn_82B8AB60(Value_82B8AB60 *out, Ctx_82B8AB60 *ctx, int slot, int arg)
{
    switch (ctx->slots[slot].flags & 7) {
    case 1:
        fn_82B8A7A0(out, ctx, slot, arg);
        break;
    case 2:
    case 4:
        fn_82B85298(out, ctx, ctx->env, slot, arg);
        break;
    case 3:
        fn_82B89CA0(out, ctx, slot, arg);
        break;
    default:
        fn_82AA66A8(ctx, 0x12c0);
    }
    return out;
}
