typedef struct Node_83030588 Node_83030588;

typedef struct Flags_83030588 {
    unsigned char a : 4;
    unsigned char flag : 1;
    unsigned char c : 3;
    unsigned char pad[3];
} Flags_83030588;

typedef struct Value_83030588 {
    int a;
    int b;
    Flags_83030588 fl;
} Value_83030588;

struct Node_83030588 {
    Node_83030588 *next;
    unsigned int key;
    Value_83030588 val;
};

typedef struct List_83030588 {
    Node_83030588 *head;
} List_83030588;

typedef struct Obj_83030588 {
    char pad[0xe4];
    List_83030588 list;
} Obj_83030588;

extern void *fn_83031460(List_83030588 *list, unsigned int key,
                         Value_83030588 v);

static __forceinline Value_83030588 *find_83030588(List_83030588 *l, unsigned int key)
{
    Node_83030588 *n;
    for (n = l->head; n != 0; n = n->next) {
        if (n->key == key)
            return &n->val;
    }
    return 0;
}

int fn_83030588(Obj_83030588 *o, unsigned int key, unsigned char flag)
{
    Value_83030588 *v = find_83030588(&o->list, key);
    if (v != 0) {
        v->fl.flag = flag;
    } else {
        Value_83030588 nv;
        nv.b = 0;
        nv.a = 0;
        nv.fl.flag = flag;
        nv.fl.a = 0;
        if (fn_83031460(&o->list, key, nv) == 0)
            return 2;
    }
    return 1;
}
