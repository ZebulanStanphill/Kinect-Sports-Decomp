typedef struct Map_82AE7088 {
    int header[2];
    unsigned __int64 bits[1];
} Map_82AE7088;

extern void fn_82AE5DE8(Map_82AE7088 *map, unsigned int entry);

void fn_82AE7088(Map_82AE7088 *map, unsigned int first, unsigned int count)
{
    unsigned int end = first + count;
    int i;
    for (i = first; i < end; i++) {
        __int64 b = i & 63;
        unsigned int v = 1 - (unsigned int)((map->bits[(unsigned int)i >> 6] & ((2ULL << b) - 1) & (~0ULL << b)) >> b);
        if (v != 0) {
            fn_82AE5DE8(map, (i << 4) | (v & 0xf));
        }
    }
}
