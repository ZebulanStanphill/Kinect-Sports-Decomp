typedef struct BitSet_82BB1DA0 {
    int unk0;
    int unk4;
    unsigned int bits[1];
} BitSet_82BB1DA0;

typedef struct Ctx_82BB1DA0 {
    int pad[0x216];
    BitSet_82BB1DA0 *regs;
} Ctx_82BB1DA0;

extern void fn_82AB15D0(int level, const char *fmt, ...);
extern int fn_82BB1B38(BitSet_82BB1DA0 *set);

#define GR_ASSERT(cond, line) \
    if (!(cond)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #cond, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\globalregs.cpp", line)

int fn_82BB1DA0(Ctx_82BB1DA0 *p)
{
    int i = fn_82BB1B38(p->regs);
    GR_ASSERT(i != -1, 0x226);
    p->regs->bits[(unsigned int)i >> 5] &= ~(1 << (i & 0x1f));
    return i;
}
