typedef struct Value_83030780 {
    int a;
    int b;
    unsigned char mode : 3;
    unsigned char flag : 1;
    unsigned char other : 1;
    unsigned char rest : 3;
} Value_83030780;

typedef struct Pair_83030780 {
    unsigned int key;
    Value_83030780 value;
} Pair_83030780;

typedef struct Node_83030780 {
    struct Node_83030780 *next;
    Pair_83030780 pair;
} Node_83030780;

typedef struct List_83030780 {
    Node_83030780 *head;
} List_83030780;

typedef struct Object_83030780 {
    char pad[0xe4];
    List_83030780 list;
} Object_83030780;

extern Value_83030780 *fn_83031460(List_83030780 *l, unsigned int key, Value_83030780 value);

static __forceinline Value_83030780 *List_find(List_83030780 *l, unsigned int key)
{
    Node_83030780 *n;

    for (n = l->head; n != 0; n = n->next) {
        if (n->pair.key == key) {
            return &n->pair.value;
        }
    }
    return 0;
}

__int64 fn_83030780(Object_83030780 *self, unsigned int key, unsigned int mode)
{
    Value_83030780 *v;
    Value_83030780 value;

    v = List_find(&self->list, key);
    if (v != 0) {
        v->mode = mode;
        return 1;
    }
    value.b = 0;
    value.a = 0;
    value.other = 0;
    value.flag = 0;
    value.mode = mode;
    if (fn_83031460(&self->list, key, value) == 0) {
        return 2;
    }
    return 1;
}
