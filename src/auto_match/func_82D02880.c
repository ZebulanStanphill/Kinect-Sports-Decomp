/* Tree bin index of a large block size (the dlmalloc compute_tree_index scheme). */
unsigned int fn_82D02880(unsigned int size)
{
    unsigned int x;
    unsigned int y;
    unsigned int n;
    unsigned int k;

    x = size >> 8;
    if (x == 0) {
        return 0;
    }
    if (x > 0xffff) {
        return 31;
    }
    y = x;
    n = ((y - 0x100) >> 16) & 8;
    k = (((y <<= n) - 0x1000) >> 16) & 4;
    n += k;
    n += k = (((y <<= k) - 0x4000) >> 16) & 2;
    k = 14 - n + ((y <<= k) >> 15);
    return (k << 1) + ((size >> (k + 7)) & 1);
}
