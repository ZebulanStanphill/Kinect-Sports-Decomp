typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
} Node;

typedef struct Iter {
    Node *node;
} Iter;

typedef struct Tree {
    int alloc;
    Node *head;
    unsigned int size;
} Tree;

extern void fn_82230300(void *p, int a, int b);
extern void fn_822315A0(void *p);
extern void fn_82359C18(void *p);
extern void fn_824CA518(void *p);
extern void fn_824CAA50(void *p);
extern Iter *fn_824CAC50(Iter *out, Tree *t, Iter first, Iter last);
extern void fn_8265CA20(void *p);
extern char lbl_821C7FB8[];

typedef struct Sub78 {
    void *vtbl;
    int pad4;
    char m8[0x18];
} Sub78;

typedef struct Obj {
    int pad0;
    void *p4;
    char m8[0x1c];
    char m24[0x20];
    char m44[0x10];
    Tree t54;
    char pad60[4];
    char m64[0x14];
    Sub78 s78;
    char m98[8];
} Obj;

Obj *fn_824C6A00(Obj *p)
{
    Iter buf;
    Iter first;
    Iter last;
    Sub78 *s;

    fn_82359C18(p->m98);
    s = &p->s78;
    fn_82359C18(s->m8);
    s->vtbl = lbl_821C7FB8;
    fn_824CA518(p->m64);
    last.node = p->t54.head;
    first.node = p->t54.head->left;
    fn_824CAC50(&buf, &p->t54, first, last);
    fn_8265CA20(p->t54.head);
    fn_824CAA50(p->m44);
    fn_82230300(p->m24, 1, 0);
    fn_82230300(p->m8, 1, 0);
    if (p->p4 != 0) {
        fn_822315A0(p->p4);
    }
    fn_8265CA20(p);
    return p;
}
