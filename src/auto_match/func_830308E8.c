typedef struct Value_830308E8 {
    int a;
    int b;
    int c;
} Value_830308E8;

typedef struct Node_830308E8 {
    struct Node_830308E8 *next;
    unsigned int key;
    Value_830308E8 value;
} Node_830308E8;

typedef struct List_830308E8 {
    Node_830308E8 *head;
} List_830308E8;

typedef struct Obj_830308E8 {
    char pad[0xe4];
    List_830308E8 list;
} Obj_830308E8;

extern void *fn_83031460(List_830308E8 *l, unsigned int key, Value_830308E8 value);

static Value_830308E8 *List_find(List_830308E8 *l, unsigned int key)
{
    Node_830308E8 *n;

    for (n = l->head; n != 0; n = n->next) {
        if (n->key == key) {
            return &n->value;
        }
    }
    return 0;
}

int fn_830308E8(Obj_830308E8 *self, unsigned int key, const Value_830308E8 *value)
{
    Value_830308E8 *v = List_find(&self->list, key);
    if (v != 0) {
        *v = *value;
    } else {
        if (fn_83031460(&self->list, key, *value) == 0)
            return 2;
    }
    return 1;
}
