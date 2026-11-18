typedef struct PageMap_82691A10 {
    unsigned int shift; /* 0x00 */
} PageMap_82691A10;

typedef struct Pool_82691A10 {
    char reserved00[0x10];  /* 0x00 */
    unsigned int alignMask; /* 0x10 */
    PageMap_82691A10 pages; /* 0x14 */
} Pool_82691A10;

typedef struct Globals_82691A10 {
    char reserved000[0x2c4]; /* 0x000 */
    char lock[0x1c];         /* 0x2c4 */
} Globals_82691A10;

extern Globals_82691A10 *lbl_831E7E60;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void *fn_826914F8(Pool_82691A10 *pool, unsigned short type, unsigned int size, unsigned int pageSize,
                         unsigned int headerSize, unsigned char *created);
extern void fn_8270BE60(PageMap_82691A10 *pages, void *block);

void *fn_82691A10(Pool_82691A10 *pool, unsigned int size, unsigned int alignment, unsigned int granularity,
                  unsigned char *created)
{
    void *cs = lbl_831E7E60->lock;
    unsigned int align;
    unsigned int total;
    unsigned int pages;
    void *block;

    RtlEnterCriticalSection(cs);
    align = pool->alignMask + 1;
    if (alignment > align) {
        align = alignment;
    }
    total = ((align > 0x1000 ? align : 0) + align + size - 1) & ~(align - 1);
    total = (total + granularity - 1) / granularity * granularity;
    pages = ((1 << pool->pages.shift) + total - 1) >> pool->pages.shift;
    block = fn_826914F8(pool, 10, total, 0x1000, (pages + 15) / 16 * 4, created);
    if (block != 0) {
        fn_8270BE60(&pool->pages, block);
    }
    RtlLeaveCriticalSection(cs);
    return block;
}
