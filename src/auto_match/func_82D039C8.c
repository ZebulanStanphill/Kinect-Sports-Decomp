typedef struct Chunk_82D039C8 {
    unsigned int prevSize;
    unsigned int head;
    char pad[8];
} Chunk_82D039C8;

typedef struct Page_82D039C8 {
    struct Page_82D039C8 *prev;
    struct Page_82D039C8 *next;
    char pad[8];
    char *start;
    char *end;
} Page_82D039C8;

typedef struct Heap_82D039C8 {
    char pad0[0x10];
    Chunk_82D039C8 *top;
    unsigned int topSize;
    char pad1[0xa4 - 0x18];
    Page_82D039C8 pages;
} Heap_82D039C8;

typedef void (*WalkCallback_82D039C8)(void *start, unsigned int size, void *param);

static __forceinline unsigned char IsInuse(Chunk_82D039C8 *c) { return (unsigned char)((c->head >> 1) & 1); }
static __forceinline unsigned int ChunkSize(Chunk_82D039C8 *c) { return c->head & ~3; }

void fn_82D039C8(Heap_82D039C8 *self, WalkCallback_82D039C8 callback, void *param)
{
    Page_82D039C8 *page;

    self->top->head = self->topSize | 1;
    for (page = self->pages.next; page != &self->pages; page = page->next) {
        Chunk_82D039C8 *end = (Chunk_82D039C8 *)(page->end - 0x10);
        Chunk_82D039C8 *c = (Chunk_82D039C8 *)page->start;
        while (c != end) {
            unsigned int size = ChunkSize(c);
            if (IsInuse(c)) {
                callback(c + 1, ChunkSize(c) - 0x10, param);
            }
            c = (Chunk_82D039C8 *)((char *)c + size);
        }
    }
}
