typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
} Node;

typedef struct {
    Node *node;
} Iter;

typedef struct {
    int alloc;
    Node *head;
    unsigned int size;
} Tree;

extern void fn_82230300(void *p, int a, int b);
extern void fn_82359C18(void *p);
extern void fn_824CA518(void *p);
extern Iter *fn_824CAC50(Iter *out, Tree *t, Iter first, Iter last);
extern void fn_8265CA20(void *p);

typedef struct {
    char m0[0x1c];
    char m1c[0x1c];
    Tree t38;
    char pad44[4];
    char m48[0x10];
    char m58[0x18];
    char m70[8];
} Obj;

void fn_824C9CB8(Obj *p)
{
    Iter buf;
    Iter first;
    Iter last;

    fn_82359C18(p->m70);
    fn_82359C18(p->m58);
    fn_824CA518(p->m48);
    last.node = p->t38.head;
    first.node = p->t38.head->left;
    fn_824CAC50(&buf, &p->t38, first, last);
    fn_8265CA20(p->t38.head);
    fn_82230300(p->m1c, 1, 0);
    fn_82230300(p->m0, 1, 0);
}
