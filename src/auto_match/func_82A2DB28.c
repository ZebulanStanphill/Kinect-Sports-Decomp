typedef struct Page_82A2DB28 {
    unsigned int offset;      /* 0x0 */
    unsigned char references; /* 0x4 */
    unsigned char next;       /* 0x5 */
    unsigned char previous;   /* 0x6 */
    unsigned char flags;      /* 0x7 */
} Page_82A2DB28;

typedef struct Cache_82A2DB28 {
    unsigned char padding[0x34];
    unsigned char *memory; /* 0x34 */
} Cache_82A2DB28;

extern unsigned int fn_82A2B9A0(Cache_82A2DB28 *, unsigned int, unsigned int, unsigned int *,
                                Page_82A2DB28 **);
extern int fn_82A2D890(Cache_82A2DB28 *, unsigned int *, Page_82A2DB28 **);
extern void fn_82A2B900(Cache_82A2DB28 *, unsigned int, unsigned int);
extern void *memset(void *, int, unsigned int);
extern const unsigned int lbl_82089378[3];

static __forceinline void SetFlags(unsigned char *flags, unsigned int kind)
{
    *flags = (*flags & 0x1c) | (kind & 3) | 0xc0;
}

int fn_82A2DB28(Cache_82A2DB28 *cache, unsigned int offset, unsigned int kind, unsigned char **memory,
                Page_82A2DB28 **page)
{
    Page_82A2DB28 *entry;
    unsigned int index;
    unsigned int pageIndex;
    Page_82A2DB28 *pageEntry;
    unsigned char *data;

    if (fn_82A2B9A0(cache, offset, kind, &index, &entry) == 0) {
        int result = fn_82A2D890(cache, &index, &entry);

        if (result < 0) {
            return result;
        }
    }
    if (kind >= 1 && kind <= 3) {
        offset -= offset % lbl_82089378[kind - 1];
    }
    pageIndex = index;
    data = cache->memory + pageIndex * 4096;
    memset(data, 0, 4096);
    pageEntry = entry;
    *memory = data;
    *page = pageEntry;
    fn_82A2B900(cache, pageIndex, 1);
    pageEntry->offset = offset;
    SetFlags(&pageEntry->flags, kind);
    ++pageEntry->references;
    return 0;
}
