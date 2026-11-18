typedef struct Entry_82693208 {
    void **pages;       /* 0x0 */
    unsigned int flags; /* 0x4 */
} Entry_82693208;

typedef struct Map_82693208 {
    unsigned int header;       /* 0x0 */
    Entry_82693208 entries[1]; /* 0x4 */
} Map_82693208;

void fn_82693208(Map_82693208 *map, unsigned int addr, unsigned int size, void *owner)
{
    unsigned int first = addr >> 20;
    unsigned int end = addr + size - 1;
    unsigned int last = end >> 20;
    unsigned int i;

    for (i = first; i <= last; i++) {
        unsigned int lo = 0;
        unsigned int hi = 0xff;
        void **pages;
        unsigned int j;

        if (i == first) {
            lo = (addr >> 12) & 0xff;
        }
        if (i == last) {
            hi = (end >> 12) & 0xff;
        }
        pages = map->entries[i].pages;
        for (j = lo; j <= hi; j++) {
            pages[j] = owner;
        }
    }
}
