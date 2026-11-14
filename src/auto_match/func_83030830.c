typedef struct Key8_83030830 {
    int x;
    int y;
} Key8_83030830;

typedef struct Bits_83030830 {
    unsigned char a : 3;
    unsigned char f : 1;
    unsigned char b : 1;
    unsigned char c : 3;
    unsigned char pad[3];
} Bits_83030830;

typedef struct Value_83030830 {
    Key8_83030830 k;
    Bits_83030830 bits;
} Value_83030830;

typedef struct Node_83030830 {
    struct Node_83030830 *next;
    unsigned int key;
    Value_83030830 value;
} Node_83030830;

typedef struct List_83030830 {
    Node_83030830 *head;
} List_83030830;

typedef struct Obj_83030830 {
    char pad[0xe4];
    List_83030830 list;
} Obj_83030830;

extern void *fn_83031460(List_83030830 *l, unsigned int key, Value_83030830 v);

static __forceinline Value_83030830 *find_83030830(List_83030830 *l, unsigned int key)
{
    Node_83030830 *n;
    for (n = l->head; n != 0; n = n->next) {
        if (n->key == key)
            return &n->value;
    }
    return 0;
}

int fn_83030830(Obj_83030830 *self, unsigned int key, unsigned char flag)
{
    Value_83030830 *v = find_83030830(&self->list, key);
    if (v != 0) {
        v->bits.f = flag;
    } else {
        Value_83030830 nv;
        nv.k.y = 0;
        nv.k.x = 0;
        nv.bits.f = flag;
        nv.bits.a = 0;
        nv.bits.b = 0;
        if (fn_83031460(&self->list, key, nv) == 0)
            return 2;
    }
    return 1;
}
