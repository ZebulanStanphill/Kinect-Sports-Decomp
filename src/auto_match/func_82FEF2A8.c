typedef struct Pair {
    unsigned int key;
    int value;
} Pair;

typedef struct Node {
    struct Node *next;
    Pair pair;
} Node;

typedef struct List {
    Node *head;
} List;

extern Pair *fn_82FEF088(List *l);
static int *List_find(List *l, unsigned int key)
{
    Node *n;

    for (n = l->head; n != 0; n = n->next) {
        if (n->pair.key == key) {
            return &n->pair.value;
        }
    }
    return 0;
}

int *fn_82FEF2A8(List *l, unsigned int key, int value)
{
    int *v;
    Pair *e;

    v = List_find(l, key);
    if (v != 0) {
        *v = value;
    } else {
        e = fn_82FEF088(l);
        if (e != 0) {
            e->key = key;
            e->value = value;
            return &e->value;
        }
    }
    return v;
}
