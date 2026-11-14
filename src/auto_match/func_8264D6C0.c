/* Flushes the data cache lines of [start, end) and syncs; addresses in
   0x7F100000-0x86FFFFFF are not cached and are left alone. */
#define __sync() __emit(0x7C0004AC)

void __dcbf(int offset, void const *base);

void fn_8264D6C0(unsigned int start, unsigned int end)
{
    char *p;
    unsigned int lines;
    unsigned int blocks;

    if (start >= 0x7f100000 && start < 0x87000000)
        return;
    start &= ~0x7f;
    end = (end + 0x7f) & ~0x7f;
    p = (char *)start;
    lines = (int)(end - start) / 0x80;
    blocks = lines >> 3;
    lines &= 7;
    for (; blocks != 0; blocks--) {
        __dcbf(0, p);
        __dcbf(0x80, p);
        __dcbf(0x100, p);
        __dcbf(0x180, p);
        __dcbf(0x200, p);
        __dcbf(0x280, p);
        __dcbf(0x300, p);
        __dcbf(0x380, p);
        p += 0x400;
    }
    for (; lines != 0; lines--) {
        __dcbf(0, p);
        p += 0x80;
    }
    __sync();
}
