typedef struct Value_83030640 {
    int a;
    int b;
    unsigned char type : 5;
    unsigned char flags : 3;
    unsigned char pad[3];
} Value_83030640;

typedef struct Pair_83030640 {
    unsigned int key;
    Value_83030640 value;
} Pair_83030640;

typedef struct Node_83030640 {
    struct Node_83030640 *next;
    Pair_83030640 pair;
} Node_83030640;

typedef struct List_83030640 {
    Node_83030640 *head;
} List_83030640;

typedef struct Obj_83030640 {
    char pad[0xe4];
    List_83030640 list;
} Obj_83030640;

extern Value_83030640 *fn_83031460(List_83030640 *l, unsigned int key, Value_83030640 value);

static Value_83030640 *List_find(List_83030640 *l, unsigned int key)
{
    Node_83030640 *n;

    for (n = l->head; n != 0; n = n->next) {
        if (n->pair.key == key) {
            return &n->pair.value;
        }
    }
    return 0;
}

int fn_83030640(Obj_83030640 *self, unsigned int key, int b)
{
    Value_83030640 *v = List_find(&self->list, key);
    if (v != 0) {
        v->b = b;
    } else {
        Value_83030640 value;
        value.a = 0;
        value.b = b;
        value.type = 0;
        if (fn_83031460(&self->list, key, value) == 0)
            return 2;
    }
    return 1;
}
