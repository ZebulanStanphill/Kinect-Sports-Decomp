typedef struct Node Node;
typedef struct Item { int pad[3]; Node *xc; } Item;
struct Node { int pad[2]; unsigned int flags; char pad2[0x20]; Item *items[1]; };
typedef struct Link { unsigned int flags; int pad; struct Link *next; int pad2; Node *node; } Link;
typedef struct { int pad; Link *links; char pad2[0x14]; int x1c; } B;
extern unsigned int fn_82B09C40(void *a, Node *b, Node *c);
extern int fn_82B83718(void *a, int x);

int fn_82B0AD30(void *a, Node *b, Node *c);

static int notNull(Link *p) { if (p) return 1; return 0; }
static Node *find(B *b)
{
    Link *l;
    Node *n;
    for (l = b->links; notNull(l); l = l->next) {
        n = l->node;
        if (n != 0 && (n->flags & 0x3f80) == 0x3700 && (l->flags & 0xe000000) != 0)
            return n;
    }
    return 0;
}

int fn_82B0AD30(void *a, Node *b, Node *c)
{
    unsigned int i;
    for (i = 0; i < ((c->flags >> 19) & 7); i++) {
        if (c->items[i]->xc != b) {
            if (fn_82B09C40(a, b, c->items[i]->xc) != 0) {
                fn_82B83718(a, ((B *)b)->x1c);
                return 1;
            }
            if ((c->flags & 0x3f80) == 0x3980) {
                c = find((B *)b);
                if (c == 0) return 0;
                return fn_82B0AD30(a, b, c);
            }
        }
    }
    return 0;
}
