typedef struct Link_827BA058 {
    struct Link_827BA058 *next; /* 0x0 */
    struct Link_827BA058 *prev; /* 0x4 */
} Link_827BA058;

typedef struct Entry_827BA058 {
    char pad0[0xc];
    Link_827BA058 *link; /* 0xc */
} Entry_827BA058;

typedef struct Cache_827BA058 {
    char pad0[0x740];
    Link_827BA058 recent; /* 0x740 */
    char pad748[0x794 - 0x748];
    char map[1]; /* 0x794 */
} Cache_827BA058;

extern Entry_827BA058 **fn_827B76D8(void *map, int key);
extern Entry_827BA058 *fn_827B9528(Cache_827BA058 *self, int a, int key, int b, int c, int d, int e);

Entry_827BA058 *fn_827BA058(Cache_827BA058 *self, int a, int key, int b, int c, int d, int e)
{
    Entry_827BA058 **slot = fn_827B76D8(self->map, key);
    Entry_827BA058 *entry = slot ? *slot : 0;

    if (entry != 0) {
        Link_827BA058 *link = entry->link;

        link->next->prev = link->prev;
        link->prev->next = link->next;
        link->next = self->recent.next;
        link->prev = &self->recent;
        self->recent.next->prev = link;
        self->recent.next = link;
        return entry;
    }
    return fn_827B9528(self, a, key, b, c, d, e);
}
