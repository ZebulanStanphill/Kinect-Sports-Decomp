typedef struct Inst_82BAB540 {
    char pad[0x50];
    int opcode;            /* 0x50 */
    char pad54[0x3b8 - 0x54];
    int type;              /* 0x3b8 */
} Inst_82BAB540;

typedef struct Ctx_82BAB540 {
    char pad0[0x70];
    int f70;               /* 0x70 */
    char pad74[0x824 - 0x74];
    int count4;            /* 0x824 */
    int count56;           /* 0x828 */
    int pad82c;
    int count78;           /* 0x830 */
} Ctx_82BAB540;

extern int fn_82BC2EF0(int opcode, int type);

int fn_82BAB540(Inst_82BAB540 *inst, Ctx_82BAB540 *ctx)
{
    switch (fn_82BC2EF0(inst->opcode, inst->type)) {
    case 4:
        return ctx->count4 - 1;
    case 5:
    case 6:
        return ctx->count56 - 1;
    case 7:
    case 8:
        return ctx->count78 + (ctx->f70 != 0);
    default:
        return 0;
    }
}
