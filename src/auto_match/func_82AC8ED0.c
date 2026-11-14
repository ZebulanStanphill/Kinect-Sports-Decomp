typedef struct Map_82AE6F68 {
    int header[2];
    unsigned __int64 bits[1];
} Map_82AE6F68;

extern void fn_82AE5A50(Map_82AE6F68 *map, unsigned int entry);

void fn_82AC8ED0(Map_82AE6F68 *map, unsigned int entry)
{
    unsigned int pos = (entry >> 4) * 4;
    unsigned int v = (unsigned int)((map->bits[pos >> 6] & ((2ULL << ((pos + 3) & 0x3f)) - 1) & (~0ULL << (pos & 0x3f))) >> (pos & 0x3f));
    v = entry & ~v & 0xf;
    if (v != 0) {
        fn_82AE5A50(map, ((entry >> 4) << 4) | (v & 0xf));
    }
}
