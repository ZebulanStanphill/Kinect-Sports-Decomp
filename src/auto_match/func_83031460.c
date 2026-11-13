typedef struct Value_83031460 {
    int a;
    int b;
    int c;
} Value_83031460;

typedef struct Pair_83031460 {
    unsigned int key;
    Value_83031460 value;
} Pair_83031460;

typedef struct Node_83031460 {
    struct Node_83031460 *next;
    Pair_83031460 pair;
} Node_83031460;

typedef struct List_83031460 {
    Node_83031460 *head;
} List_83031460;

extern Pair_83031460 *fn_83031220(List_83031460 *l);

static Value_83031460 *List_find(List_83031460 *l, unsigned int key)
{
    Node_83031460 *n;

    for (n = l->head; n != 0; n = n->next) {
        if (n->pair.key == key) {
            return &n->pair.value;
        }
    }
    return 0;
}

Value_83031460 *fn_83031460(List_83031460 *l, unsigned int key, Value_83031460 value)
{
    Value_83031460 *v;
    Pair_83031460 *e;

    v = List_find(l, key);
    if (v != 0) {
        *v = value;
    } else {
        e = fn_83031220(l);
        if (e != 0) {
            e->key = key;
            e->value = value;
            return &e->value;
        }
    }
    return v;
}
