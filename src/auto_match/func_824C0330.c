typedef struct Obj Obj;
typedef struct ObjVtbl {
    void (*dtor)(Obj *self, int flags);
} ObjVtbl;
struct Obj {
    ObjVtbl *vtbl;
};

typedef struct Node Node;
struct Node {
    Node *left;
};
typedef struct Iter {
    Node *node;
} Iter;

extern void fn_82230300(void *p, int a, int b);
extern void fn_822B1B28(void *p);
extern void fn_822B4EB0(Iter *out, void *tree, Iter first, Iter last);
extern void fn_82359C18(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_821C0678[];

typedef struct Self {
    void *vtbl;
    int f4;
    Node *head;
    char pad0c[0x1c - 0xc];
    char f1c[0x3c - 0x1c];
    char *f3c;
    Obj *f40;
} Self;

void fn_824C0330(Self *self)
{
    Obj *o;
    char *p;
    Iter it;
    Iter first;
    Iter last;

    o = self->f40;
    self->vtbl = lbl_821C0678;
    if (o != 0) {
        o->vtbl->dtor(o, 1);
    }
    p = self->f3c;
    if (p != 0) {
        fn_82359C18(p + 0x10);
        fn_822B1B28(p);
        fn_8265CA20(p);
    }
    fn_82230300(self->f1c, 1, 0);
    last.node = self->head;
    first.node = self->head->left;
    fn_822B4EB0(&it, &self->f4, first, last);
    fn_8265CA20(self->head);
}
