extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
#define EXP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\expansion.cpp", line)

typedef int ILOpCode;
#define IL_OP_EXT_LAST 0x88

typedef void *(*Ctor_82BC6780)(void *info, void *arg);

typedef struct Expansion_82BC6780 {
    void *info;
    int pad04[4];
    Ctor_82BC6780 fpCtor;   /* 0x14 */
    int pad18[3];
} Expansion_82BC6780;

typedef struct Ctx_82BC6780 {
    int pad00[3];
    void *arg;              /* 0x0c */
} Ctx_82BC6780;

extern Expansion_82BC6780 lbl_8316EBC0[];

void *fn_82BC6780(Ctx_82BC6780 *ctx, ILOpCode il_op)
{
    Ctor_82BC6780 fpCtor;

    EXP_ASSERT((0 <= il_op) && (il_op < (ILOpCode)IL_OP_EXT_LAST), 0x44);
    fpCtor = lbl_8316EBC0[il_op].fpCtor;
    EXP_ASSERT(fpCtor != 0, 0x47);
    return fpCtor(lbl_8316EBC0[il_op].info, ctx->arg);
}
