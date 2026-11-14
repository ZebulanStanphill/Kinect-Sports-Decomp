typedef struct Map_82ADEDB8 {
    int header[2];
    unsigned __int64 bits[1];
} Map_82ADEDB8;

extern void fn_82AE5A50(Map_82ADEDB8 *map, unsigned int entry);

void fn_82ADEDB8(Map_82ADEDB8 *map, unsigned int first, unsigned int count)
{
    unsigned int end = first + count;
    unsigned int i;
    for (i = first; i < end; i++) {
        int pos = i * 4;
        __int64 lo = pos & 63;
        __int64 hi = (pos + 3) & 63;
        unsigned int v = 15 - (unsigned int)((map->bits[(unsigned int)pos >> 6] & ((2ULL << hi) - 1) & (~0ULL << lo)) >> lo);
        if (v != 0) {
            fn_82AE5A50(map, (i << 4) | (v & 0xf));
        }
    }
}
