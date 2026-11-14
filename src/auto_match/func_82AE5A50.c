typedef struct Regs_82AE5A50 {
    int context;                    /* 0x00 */
    int pad4;
    unsigned __int64 words[16];     /* 0x08 */
} Regs_82AE5A50;

extern void fn_82AA66A8(int context, int code, unsigned int index);

void fn_82AE5A50(Regs_82AE5A50 *self, unsigned int reg)
{
    unsigned int first = (reg >> 4) * 4;
    unsigned int last = first + 3;
    unsigned __int64 high = (2ULL << (last & 63)) - 1;
    unsigned __int64 low = ~0ULL << (first & 63);
    unsigned int bits = reg & 0xf;
    if ((((high & low) & self->words[first >> 6]) >> (first & 63)) & bits) {
        fn_82AA66A8(self->context, 0xdc6, reg >> 4);
        return;
    }
    self->words[first >> 6] |= (unsigned __int64)bits << (first & 63);
}
