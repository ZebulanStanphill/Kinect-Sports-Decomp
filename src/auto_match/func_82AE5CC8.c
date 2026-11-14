typedef struct Regs_82AE5CC8 {
    int context;                    /* 0x00 */
    unsigned int words[32];         /* 0x04 */
} Regs_82AE5CC8;

extern void fn_82AA66A8(int context, int code, unsigned int index);

void fn_82AE5CC8(Regs_82AE5CC8 *self, unsigned int reg)
{
    unsigned int first = reg >> 4;
    unsigned int last = first;
    unsigned int high = (2U << (last & 31)) - 1;
    unsigned int low = ~0U << (first & 31);
    unsigned int bits = reg & 0xf;
    if ((((high & low) & self->words[first >> 5]) >> (first & 31)) & bits) {
        fn_82AA66A8(self->context, 0xdc6, reg >> 4);
        return;
    }
    self->words[first >> 5] |= bits << (first & 31);
}
