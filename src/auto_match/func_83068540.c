typedef struct Node {
    int m0;
    struct Node *next;
} Node;

typedef struct Item {
    int m0;
    int m4;
    struct Item *next;
    int mc;
} Item;

typedef struct VObj VObj;
typedef struct VObjVtbl {
    void (*destroy)(VObj *self, int flags);
} VObjVtbl;
struct VObj {
    VObjVtbl *vtbl;
};

typedef struct Obj {
    void *vtbl;
    int m4;
    int m8;
    void *owner;
    char pad10[0x2c];
    VObj *v3c;
    VObj *v40;
    Node *nodes;
    char pad48[0xc];
    Item *items2;
    char pad58[0x10];
    Item *items1;
    int m6c;
    int m70;
} Obj;

extern void fn_8265CA20(int x);
extern void fn_83065C58(Node *n);
extern void fn_8306AB80(void *owner, Obj *o);
extern char lbl_8217E8A8[];
extern char lbl_8217E8BC[];

void fn_83068540(Obj *o)
{
    Node *n;
    Node *next;
    Item *it;
    o->vtbl = lbl_8217E8BC;
    for (n = o->nodes; n != 0; n = next) {
        next = n->next;
        fn_83065C58(n);
    }
    if (o->v3c != 0) {
        o->v3c->vtbl->destroy(o->v3c, 1);
    }
    if (o->v40 != 0) {
        o->v40->vtbl->destroy(o->v40, 1);
    }
    fn_8265CA20(o->m70);
    for (it = o->items1; it != 0; it = it->next) {
        it->mc = 0;
        it->m0 = 0;
    }
    for (it = o->items2; it != 0; it = it->next) {
        it->mc = 0;
        it->m0 = 0;
    }
    o->vtbl = lbl_8217E8A8;
    if (o->owner != 0) {
        fn_8306AB80(o->owner, o);
    }
}
