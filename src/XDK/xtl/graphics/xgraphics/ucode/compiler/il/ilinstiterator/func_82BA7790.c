typedef struct ILInst_82BA7790 {
    unsigned int token;
} ILInst_82BA7790;

static __forceinline int GetOpcode_82BA7790(const ILInst_82BA7790 *p)
{
    int op = p->token & 0xffff;
    /* The `& 1` is needed for the game's `clrlwi` of the test's result; the original
       spelling is not known (a plain `op < 100` compiles without it). */
    return (op < 100) & 1 ? op : 0;
}

unsigned char fn_82BA7790(const ILInst_82BA7790 *p)
{
    int op = GetOpcode_82BA7790(p);
    return op == 0x28 || op == 0x2b || op == 0x29 || op == 0x2a || op == 0x27 || op == 0x53;
}
