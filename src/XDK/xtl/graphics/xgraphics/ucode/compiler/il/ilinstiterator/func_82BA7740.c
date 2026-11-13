typedef struct ILInst_82BA7740 {
    unsigned int token;
} ILInst_82BA7740;

static __forceinline int GetOpcode_82BA7740(const ILInst_82BA7740 *p)
{
    int op = p->token & 0xffff;
    /* The `& 1` is needed for the game's `clrlwi` of the test's result (as in func_82BA7790). */
    return (op < 100) & 1 ? op : 0;
}

unsigned char fn_82BA7740(const ILInst_82BA7740 *p)
{
    int op = GetOpcode_82BA7740(p);
    return op == 0x71 || op == 0x72;
}
