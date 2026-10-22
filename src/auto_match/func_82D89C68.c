extern void fn_82D907E8(int a, struct Node *n);
extern void fn_82D92868(int a, struct Node *n);
static const float lbl_82134508 = 3.40282e+38f;

typedef struct Item {
    char pad[0x1dc];
    float a;
    char pad2[0xc];
    float b;
} Item;

typedef struct Node {
    char pad[0x25];
    unsigned char f25a : 2;
    unsigned char f25b : 2;
    unsigned char f25c : 4;
    unsigned char f26a : 2;
    unsigned char mode : 2;
    unsigned char f26c : 4;
    char pad2[0x48 - 0x27];
    Item **items;
    int count;
} Node;

typedef struct Ctx {
    char pad[8];
    int owner;
    char pad2[0xcc - 0xc];
    Node *node;
} Ctx;

void fn_82D89C68(Ctx *c)
{
    Node *n = c->node;
    char mode;
    int i;

    if ((int)n == 0)
        mode = 0;
    else
        mode = n->mode;
    if (mode != 0) {
        if (n->f25b != 0 || n->f25a != 0) {
            int saved = *(int *)(c->owner + 0xb4);
            *(int *)(c->owner + 0xb4) = 0;
            c->node->f25b = 0;
            c->node->f25a = 1;
            fn_82D92868(c->owner, c->node);
            *(int *)(c->owner + 0xb4) = saved;
        }
        n = c->node;
        i = 0;
        if (0 < n->count) {
            Item **pp = n->items;

            do {
                Item *it = *pp++;
                i++;
                it->a = lbl_82134508;
                it->b = lbl_82134508;
            } while (i < n->count);
        }
        fn_82D907E8(c->owner, n);
    }
}
