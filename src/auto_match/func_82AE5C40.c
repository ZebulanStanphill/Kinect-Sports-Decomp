typedef struct BitSet_82AE5C40 {
    unsigned int bits[32];
} BitSet_82AE5C40;

typedef struct Allocator_82AE5C40 {
    int unknown0;
    int unknown4;
    BitSet_82AE5C40 used;      /* 0x8 */
} Allocator_82AE5C40;

extern int fn_82AE50A8(BitSet_82AE5C40 *set, unsigned int from);
extern int fn_82AE56A8(BitSet_82AE5C40 *set, unsigned int first, unsigned int last);

int fn_82AE5C40(Allocator_82AE5C40 *self, unsigned int from, unsigned int count)
{
    unsigned int start;
    int hit;
    unsigned int end;

    start = fn_82AE50A8(&self->used, from * 4);
    if (start == -1) {
        return -1;
    }
    for (;;) {
        end = start + count * 4;
        if (end > 0x400) {
            return -1;
        }
        hit = fn_82AE56A8(&self->used, start, end - 1);
        if (hit == -1) {
            if ((start & 3) == 0)
                return start >> 2;
            hit = start;
        }
        start = (hit + 4) & ~3;
    }
}
