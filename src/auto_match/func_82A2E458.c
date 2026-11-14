typedef struct Link_82A2E458 {
    struct Link_82A2E458 *next;
    struct Link_82A2E458 *prev;
} Link_82A2E458;

typedef struct Entry_82A2E458 {
    char pad0[0x36];
    unsigned short id;              /* 0x36 */
    char pad38[0x48 - 0x38];
    Link_82A2E458 link;             /* 0x48 */
} Entry_82A2E458;

typedef struct Owner_82A2E458 {
    Link_82A2E458 entries;          /* 0x00 */
    int pad8;
    Link_82A2E458 *shared;          /* 0x0c */
    char pad10[0x35 - 0x10];
    unsigned char flags;            /* 0x35 */
    char pad36[0x40 - 0x36];
    Link_82A2E458 local;            /* 0x40 */
} Owner_82A2E458;

typedef struct Request_82A2E458 {
    char pad0[0x40];
    unsigned int key;               /* 0x40 */
} Request_82A2E458;

extern void fn_82A2CBB0(Entry_82A2E458 *entry, int p, Request_82A2E458 *request);

void fn_82A2E458(Owner_82A2E458 *self, Request_82A2E458 *request)
{
    unsigned int key = request->key >> 6;
    unsigned int second = 0;
    Link_82A2E458 *head = &self->entries;

    for (;;) {
        Link_82A2E458 *l;
        for (l = head->next; head != l; ) {
            Entry_82A2E458 *e = (Entry_82A2E458 *)((char *)l - 0x48);
            if (e->id == key) {
                fn_82A2CBB0(e, 0, request);
                return;
            }
            l = e->link.next;
        }
        if (second)
            return;
        if (self->flags & 4) {
            head = &self->local;
        } else {
            head = self->shared;
            if (head == 0)
                return;
        }
        second = 1;
    }
}
