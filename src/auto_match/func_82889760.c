typedef struct Value_82889760 {
    int f0;
    char stream[0x10];
    int f14;
    int f18;
    void *first;
    void *last;
    void *end;
    char pad28[0x20];
} Value_82889760;

typedef struct Pair_82889760 {
    unsigned short key;
    char pad2[6];
    Value_82889760 value;
} Pair_82889760;

typedef struct Node_82889760 {
    struct Node_82889760 *left;
    struct Node_82889760 *parent;
    struct Node_82889760 *right;
    int padC;
    Pair_82889760 pair;
    char color;
    char isnil;
} Node_82889760;

typedef struct Map_82889760 {
    int alval;
    Node_82889760 *head;
    unsigned int size;
} Map_82889760;

extern void fn_828E9D28(void *stream, void *buf, int size);
extern void fn_82889220(Value_82889760 *dst, Value_82889760 *src);
extern Node_82889760 *fn_82888948(Map_82889760 *map);
extern void fn_82889518(Node_82889760 **result, Map_82889760 *map, Node_82889760 *where, Node_82889760 *node);
extern void fn_8265CA20(void *p);

Value_82889760 *fn_82889760(Map_82889760 *map, unsigned short *key)
{
    Node_82889760 *where = map->head;
    Node_82889760 *node = map->head->parent;

    while (!node->isnil) {
        if (node->pair.key < *key) {
            node = node->right;
        } else {
            where = node;
            node = node->left;
        }
    }
    if (where == map->head || *key < where->pair.key) {
        Value_82889760 tmp;
        Pair_82889760 pair;
        Node_82889760 *result;
        Node_82889760 *newNode;
        Pair_82889760 *p;

        tmp.first = 0;
        tmp.last = 0;
        tmp.end = 0;
        tmp.f14 = 0;
        tmp.f18 = 0;
        fn_828E9D28(tmp.stream, 0, 0);
        pair.key = *key;
        fn_82889220(&pair.value, &tmp);
        newNode = fn_82888948(map);
        p = &newNode->pair;
        if (p != 0) {
            p->key = pair.key;
            fn_82889220(&p->value, &pair.value);
        }
        fn_82889518(&result, map, where, newNode);
        where = result;
        if (pair.value.first != 0)
            fn_8265CA20(pair.value.first);
        if (tmp.first != 0)
            fn_8265CA20(tmp.first);
    }
    return &where->pair.value;
}
