extern int fn_82ABDD90(void *ctx, unsigned int op, unsigned int a, unsigned int b);

static __forceinline unsigned char IsGroupOp(unsigned int op)
{
    return op == 0x61 || op == 0x63 || op == 0x64;
}

static __forceinline int LookupOperand(char *instr, void *ctx)
{
    unsigned int *word = (unsigned int *)(instr + 8);
    return *(int *)(fn_82ABDD90(ctx, *word >> 7 & 0x7f, *word >> 19 & 7, *word >> 14 & 7) + (instr - 4));
}

int fn_82B17130(char *instr, void *ctx)
{
    unsigned int op = *(unsigned int *)(instr + 8) >> 7 & 0x7f;
    if (op == 0x60)
        return LookupOperand(instr, ctx);
    if (IsGroupOp(op))
        return LookupOperand(instr, ctx);
    return 0;
}
