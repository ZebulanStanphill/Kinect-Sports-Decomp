typedef struct Node Node;
struct Node {
    int pad0[2];
    Node *left;
    Node *right;
    int *links;
};

typedef struct {
    int v[8];
} Item;

typedef struct {
    char pad0[0xa0];
    unsigned int count;
    char pada4[0x120 - 0xa4];
    Item *items;
} Src;

typedef struct {
    void *owner;
    unsigned int count;
    Node **nodes;
} Tree;

extern void *fn_8265CA60(unsigned int size);
extern Node *fn_82835A40(Tree *t, Item *item);

Tree *fn_82831478(Tree *t, void *owner, Src *src)
{
    unsigned int i;

    t->owner = owner;
    t->count = src->count;
    t->nodes = (Node **)fn_8265CA60(t->count <= 0x3fffffff ? t->count * 4 : 0xffffffff);
    for (i = 0; i < t->count; i++) {
        t->nodes[i] = fn_82835A40(t, &src->items[i]);
    }
    for (i = 0; i < t->count; i++) {
        Node *nd = t->nodes[i];
        if (nd->links[0] >= 0) {
            nd->left = t->nodes[nd->links[0]];
        }
        if (nd->links[1] >= 0) {
            nd->right = t->nodes[nd->links[1]];
        }
    }
    return t;
}
