typedef struct ILInst_82BA73F0 {
    unsigned int token;
    unsigned short pad4;
    unsigned short operand6;
    unsigned short pad8;
    unsigned short operandA;
} ILInst_82BA73F0;

static __forceinline int GetOpcode_82BA73F0(const ILInst_82BA73F0 *p)
{
    int op = p->token & 0xffff;
    /* The `& 1` is needed for the game's `clrlwi` of the test's result (as in func_82BA7790). */
    return (op < 100) & 1 ? op : 0;
}

unsigned short fn_82BA73F0(const ILInst_82BA73F0 *p)
{
    switch (GetOpcode_82BA73F0(p)) {
    case 0x8:
    case 0x71:
        return p->operand6;
    case 0x9:
    case 0x72:
        return p->operandA;
    }
    return 0;
}
