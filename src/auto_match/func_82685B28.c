typedef struct Node Node;
struct Node {
    Node *next;
    Node *prev;
    int pad[1];
    Node *link;
    struct Item *value;
};

typedef struct Item {
    char pad[0x64];
    unsigned int key;
} Item;

typedef struct {
    char pad[0x10];
    Node head;
} Cache;

typedef struct {
    char pad[0x1c];
    Cache *cache;
} Group;

typedef struct {
    char pad[0x38];
    Node *mru;
    char pad2[0x80 - 0x3c];
    unsigned char noA;
    unsigned char noB;
} Self;

extern void fn_826857F8(Self *self, Group *g, Item *it);
extern unsigned char fn_826EB300(Item *it, int mode, void *b, int c);

Item *fn_82685B28(Self *self, Group *g, unsigned int key, int mode, void *b, int c)
{
    Cache *cache = g->cache;
    Node *n;

    if (cache != 0) {
        for (n = cache->head.link; n != &cache->head; n = n->link) {
            if (fn_826EB300(n->value, mode, b, c)) {
                n->next->prev = n->prev;
                n->prev->next = n->next;
                n->next = self->mru;
                n->prev = (Node *)&self->mru;
                self->mru->prev = n;
                self->mru = n;
                return n->value;
            }
            if (mode != 0 && ((self->noA == 0 && mode == 2) || (self->noB == 0 && mode == 1)) &&
                key == n->value->key) {
                fn_826857F8(self, g, n->value);
                return 0;
            }
        }
    }
    return 0;
}
