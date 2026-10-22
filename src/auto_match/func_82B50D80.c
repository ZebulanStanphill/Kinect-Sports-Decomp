typedef struct Node {
    char pad0[0x30];
    unsigned int f30;
    char pad34[0x4c - 0x34];
    unsigned int f4c;
} Node;

typedef struct Rec {
    int f0;
    int f4;
    int f8;
    Node *fc;
    unsigned char f10;
    int f14;
} Rec;

typedef struct T {
    char pad0[0x20];
    unsigned int f20;
    char pad24[0x2c - 0x24];
    unsigned int f2c;
    char pad30[0x234 - 0x30];
    Node *f234;
    char pad238[0x248 - 0x238];
    int f248;
    int f24c;
} T;

extern void fn_82B4B498(T *t);
extern Node *fn_82B477E0(T *t);
extern void fn_82B4FA78(int a, int *p);
extern Rec *fn_82B50338(int a);
extern void fn_82B8F328(Node *a, Node *b, T *t);

void fn_82B50D80(T *t, Node **out)
{
    unsigned int saved;
    Node *n1;
    Node *n2;
    Rec *r;

    saved = t->f20;
    fn_82B4B498(t);
    n1 = fn_82B477E0(t);
    n1->f4c |= 0x100000;
    fn_82B8F328(t->f234, n1, t);
    fn_82B4B498(t);
    n2 = fn_82B477E0(t);
    fn_82B8F328(n1, n2, t);
    if ((t->f234->f30 & 0x20000000) != 0) {
        n2->f30 |= 0x20000000;
    }
    t->f234 = n2;
    fn_82B4B498(t);
    n1 = fn_82B477E0(t);
    if (out != 0) {
        fn_82B8F328(n1, *out, t);
        *out = n1;
    }
    r = fn_82B50338(t->f248);
    r->f0 = 0;
    fn_82B4FA78(t->f24c, &r->f4);
    r->fc = n1;
    r->f10 = (~t->f2c >> 1) & 1;
    r->f14 = saved;
    t->f2c |= 2;
    t->f20 = t->f234->f4c & 0x7ffff;
}
