typedef struct Page_826AABD0 {
    int values[32];             /* 0x00 */
    struct Page_826AABD0 *next; /* 0x80 */
} Page_826AABD0;

typedef struct PageArray_826AABD0 {
    Page_826AABD0 **data; /* 0x0 */
    unsigned int count;   /* 0x4 */
    int capacity;         /* 0x8 */
} PageArray_826AABD0;

typedef struct Stack_826AABD0 {
    int *current;             /* 0x00 */
    int *pageStart;           /* 0x04 */
    int *pageEnd;             /* 0x08 */
    int *prevPageTop;         /* 0x0c */
    PageArray_826AABD0 pages; /* 0x10 */
    Page_826AABD0 *reserved;  /* 0x1c */
} Stack_826AABD0;

extern void fn_827A9810(PageArray_826AABD0 *array, unsigned int count);

static __forceinline Page_826AABD0 *Get(PageArray_826AABD0 *array, unsigned int index)
{
    return array->data[index];
}

static __forceinline Page_826AABD0 *Last(PageArray_826AABD0 *array, __int64 count)
{
    return array->data[count - 1];
}

void fn_826AABD0(Stack_826AABD0 *self)
{
    if (self->pages.count > 1) {
        PageArray_826AABD0 *pages = &self->pages;
        Page_826AABD0 *page = Get(pages, pages->count - 1);
        int *prev;

        page->next = self->reserved;
        self->reserved = page;
        fn_827A9810(pages, pages->count - 1);
        page = Last(pages, (int)pages->count);
        self->pageStart = page->values;
        self->pageEnd = self->pageStart + 32;
        self->current = self->pageEnd - 1;
        if (self->pages.count > 1) {
            prev = Get(pages, self->pages.count - 2)->values + 31;
        } else {
            prev = self->pageStart;
        }
        self->prevPageTop = prev;
    } else {
        ++self->current;
        if (self->current) {
            *self->current = 0;
        }
    }
}
