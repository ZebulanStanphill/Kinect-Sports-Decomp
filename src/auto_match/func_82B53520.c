typedef struct Q {
    char pad0[8];
    unsigned int f8;
} Q;

typedef struct Node {
    char pad0[0x20];
    unsigned int f20;
    unsigned int f24;
} Node;

typedef struct Info {
    char pad0[0x10];
    int f10;
    char pad14[0x28 - 0x14];
    void *f28;
    char pad2c[0x38 - 0x2c];
    int f38;
} Info;

typedef struct P2 {
    int f0;
    Info *f4;
} P2;

typedef struct T {
    int f0;
    unsigned int f4;
    char pad8[0x28 - 8];
    unsigned int f28;
    unsigned int f2c;
    char pad30[0x234 - 0x30];
    Node *f234;
} T;

extern void fn_82B47118(T *t, Q *q, P2 *p);
extern Node *fn_82B477E0(T *t);
extern void fn_82B52FF8(T *t, int a, int b, int c, Q *q);
extern void fn_82B53448(T *t, Info *info, int a, Q *q);
extern Q *fn_82B841E8(T *t, Node *n, unsigned int *p, int a, int b, int c);
extern void fn_82B8F328(Node *old, Node *n, T *t);

Q *fn_82B53520(T *t, P2 *p, int a)
{
    Node *node;
    Q *q;

    node = t->f234;
    if ((node->f24 & 1) == 0) {
        q = (Q *)((node->f20 & ~1) - 0x28);
        if (q != 0 && (q->f8 & 0x3f80) == 0x2980) {
            goto done;
        }
    }
    if ((t->f28 & 0x40000) != 0 ||
        ((t->f2c & 0x2000000) != 0 && node == (Node *)((t->f4 & 1) ? 0 : t->f4))) {
        node = fn_82B477E0(t);
        fn_82B8F328(t->f234, node, t);
        t->f234 = node;
    }
    q = fn_82B841E8(t, t->f234, &t->f234->f20, 0x53, 0, 0);
    if (p->f4->f28 != 0) {
        fn_82B52FF8(t, a, p->f4->f10, p->f4->f38, q);
    }
    fn_82B53448(t, p->f4, a, q);
done:
    fn_82B47118(t, q, p);
    return q;
}
