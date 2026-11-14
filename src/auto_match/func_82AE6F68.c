typedef struct Map_82AE6F68 {
    int header[2];
    unsigned __int64 bits[1];
} Map_82AE6F68;

static __forceinline void Release(Map_82AE6F68 *map, unsigned int entry)
{
    unsigned int sh = (entry >> 4) * 4;
    map->bits[sh >> 6] -= (unsigned __int64)(entry & 0xf) << (sh & 0x3f);
}
void fn_82AE6F68(Map_82AE6F68 *map, unsigned int first, unsigned int count)
{
    unsigned int i;
    for (i = first; i < first + count; i++) {
        unsigned int pos = i * 4;
        unsigned int v = (unsigned int)((map->bits[pos >> 6] & ((2ULL << ((pos + 3) & 0x3f)) - 1) & (~0ULL << (pos & 0x3f))) >> (pos & 0x3f));
        if (v != 0) {
            Release(map, (i << 4) | (v & 0xf));
        }
    }
}
