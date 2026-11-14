typedef struct Value_830306E0 {
    int a;
    int b;
    unsigned char type : 5;
    unsigned char flags : 3;
    unsigned char pad[3];
} Value_830306E0;

typedef struct Pair_830306E0 {
    unsigned int key;
    Value_830306E0 value;
} Pair_830306E0;

typedef struct Node_830306E0 {
    struct Node_830306E0 *next;
    Pair_830306E0 pair;
} Node_830306E0;

typedef struct List_830306E0 {
    Node_830306E0 *head;
} List_830306E0;

typedef struct Obj_830306E0 {
    char pad[0xe4];
    List_830306E0 list;
} Obj_830306E0;

extern Value_830306E0 *fn_83031460(List_830306E0 *l, unsigned int key, Value_830306E0 value);

static Value_830306E0 *List_find(List_830306E0 *l, unsigned int key)
{
    Node_830306E0 *n;

    for (n = l->head; n != 0; n = n->next) {
        if (n->pair.key == key) {
            return &n->pair.value;
        }
    }
    return 0;
}

int fn_830306E0(Obj_830306E0 *self, unsigned int key, int a)
{
    Value_830306E0 *v = List_find(&self->list, key);
    if (v != 0) {
        v->a = a;
    } else {
        Value_830306E0 value;
        value.a = a;
        value.b = 0;
        value.type = 0;
        if (fn_83031460(&self->list, key, value) == 0)
            return 2;
    }
    return 1;
}
