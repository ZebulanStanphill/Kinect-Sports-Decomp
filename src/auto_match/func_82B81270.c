extern unsigned char fn_82B80200(int self);
extern unsigned char fn_82ACA5E0(int self);

int fn_82B81270(int self, unsigned int count, unsigned int swizzle)
{
    unsigned int mask, shift, i;
    unsigned int used;
    if (fn_82B80200(self))
        return 1;
    if (!fn_82ACA5E0(self))
        return 0;
    if (swizzle == 0xe4)
        return 1;
    mask = 0;
    if (count) {
        unsigned int shift = 0;
        unsigned int remaining = count;
        do {
            mask |= 1u << ((swizzle >> shift) & 3);
            shift += 2;
        } while (--remaining);
    }
    used = (unsigned int)(((0x8da691691448ULL >> mask) >> mask) >> mask) & 7;
    return ((*(unsigned int *)(self + 8) >> 14) & 7) - used + count <= 4;
}
