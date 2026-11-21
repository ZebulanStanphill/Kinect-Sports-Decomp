typedef struct PageEntry_82A2CA20 {
    char pad0[0x28];
    unsigned char flags;    /* 0x28 */
    unsigned char pages[3]; /* 0x29: 24-bit little-endian page count */
    char pad2c[0x8];
    unsigned int size; /* 0x34 */
    char pad38[0x8];
} PageEntry_82A2CA20;

typedef struct Resource_82A2CA20 {
    char pad0[0x18];
    unsigned int size;      /* 0x18 */
    unsigned int committed; /* 0x1c */
    char pad20[0x15];
    unsigned char flags; /* 0x35 */
    unsigned short page; /* 0x36 */
} Resource_82A2CA20;

typedef struct Link_82A2CA20 {
    struct Link_82A2CA20 *next; /* 0x00 */
} Link_82A2CA20;

typedef struct Holder_82A2CA20 {
    Resource_82A2CA20 *resource; /* 0x00 */
    char pad4[0x44];
    Link_82A2CA20 link; /* 0x48 */
} Holder_82A2CA20;

typedef struct Heap_82A2CA20 {
    char pad0[0x80];
    Link_82A2CA20 resources; /* 0x80 */
} Heap_82A2CA20;

void fn_82A2CA20(Heap_82A2CA20 *self, unsigned int offset, PageEntry_82A2CA20 *entries)
{
    PageEntry_82A2CA20 *entry;
    PageEntry_82A2CA20 *end;
    unsigned int pages;
    unsigned int first;
    unsigned int last;
    Link_82A2CA20 *link;
    Resource_82A2CA20 *resource;
    unsigned int committed;

    end = (PageEntry_82A2CA20 *)((char *)entries + 0x1000);
    for (entry = entries; entry < end; entry++) {
        if ((entry->flags & 0x80) == 0) {
            pages = (entry->size + 0xfff) >> 12;
            if (((entry->pages[2] << 8) + entry->pages[1] << 8) + entry->pages[0] > pages) {
                entry->pages[0] = (unsigned char)pages;
                entry->pages[1] = (unsigned char)(pages >> 8);
                entry->pages[2] = (unsigned char)(pages >> 16);
            }
        }
    }
    first = offset >> 6;
    link = self->resources.next;
    last = first + 0x40;
    while (link != &self->resources) {
        resource = ((Holder_82A2CA20 *)((char *)link - 0x48))->resource;
        link = link->next;
        if ((resource->flags & 2) == 0 && resource->page >= first && resource->page < last) {
            committed = (resource->size + 0xfff) & ~0xfff;
            if (resource->committed > committed) {
                resource->committed = committed;
            }
        }
    }
}
