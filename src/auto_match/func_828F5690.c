/* Looks a name up in the hash table (sorted chains) and reports whether the
   entry depends on itself: an entry already being visited answers 1; otherwise
   it is marked, its children of kind 9 are followed through the names they
   refer to, and the mark is cleared again.
   The original keeps the name in r8 across the hash call (link-time code
   generation with fn_828F5390) and has strcmp inline (/Oi). */
extern int strcmp(const char *, const char *);
extern unsigned int fn_828F5390(void *, const char *);

typedef struct Node_828F5690 {
    const char *name; /* 0x00 */
    int pad4;
    struct Node_828F5690 *children; /* 0x08 */
    struct Node_828F5690 *next;     /* 0x0c */
    int state;                      /* 0x10 */
    int pad14;
    const char *reference; /* 0x18 */
} Node_828F5690;

typedef struct Table_828F5690 {
    char pad0[0x78];
    Node_828F5690 *buckets[1]; /* 0x78 */
} Table_828F5690;

int fn_828F5690(Table_828F5690 *self, const char *name);

int fn_828F5690(Table_828F5690 *self, const char *name)
{
    Node_828F5690 *node;
    Node_828F5690 *child;

    for (node = self->buckets[fn_828F5390(self, name)]; node != 0; node = node->next) {
        int order = strcmp(name, node->name);

        if (order < 0) {
            return 0;
        }
        if (order == 0) {
            break;
        }
    }
    if (node == 0) {
        return 0;
    }
    if (node->state != 0) {
        return 1;
    }
    node->state = 1;
    for (child = node->children; child != 0; child = child->next) {
        if (child->state == 9 && fn_828F5690(self, child->reference) != 0) {
            break;
        }
    }
    node->state = 0;
    return 0 != child;
}
