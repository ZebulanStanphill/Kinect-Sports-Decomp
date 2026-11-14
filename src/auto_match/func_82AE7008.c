typedef struct Map_82AE7008 {
    int header;
    unsigned int bits[1];
} Map_82AE7008;

extern void fn_82AE5CC8(Map_82AE7008 *map, unsigned int entry);

void fn_82AE7008(Map_82AE7008 *map, unsigned int first, unsigned int count)
{
    unsigned int end = first + count;
    int i;
    for (i = first; i < end; i++) {
        int b = i & 31;
        unsigned int v = 1 - ((map->bits[(unsigned int)i >> 5] & ((2U << b) - 1) & (~0U << b)) >> b);
        if (v != 0) {
            fn_82AE5CC8(map, (i << 4) | (v & 0xf));
        }
    }
}
