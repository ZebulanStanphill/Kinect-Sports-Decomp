typedef struct Node {
    int f0;
    int f4;
    unsigned int flags;
    int pad[8];
    void *a;
    void *b;
    void *c;
} Node;

typedef struct Src {
    int pad[7];
    int f1c;
} Src;

typedef struct Expr {
    int pad[3];
    int fc;
    void *f10;
} Expr;

extern void fn_82AC6860(void *ctx, Node *n, void *p2, Src *p3);
extern void *fn_82ACA920(void *ctx, Expr *e, int x);
extern void *fn_82AD17B0(void *ctx, void *p);
extern void *fn_82AD1978(Node *n, void *p);
extern Node *fn_82B841E8(void *ctx, int a, int b, int c, int d, int e);

Node *fn_82B1BD10(void *ctx, void *p2, Src *p3, void *p4, void *p5, Expr *p6)
{
    Node *n;

    n = fn_82B841E8(ctx, p3->f1c, 0, 0x12, 3, 4);
    n->a = fn_82AD1978(n, fn_82AD17B0(ctx, p4));
    n->b = fn_82AD1978(n, fn_82AD17B0(ctx, p5));
    n->c = fn_82AD1978(n, p6->f10 != 0 ? fn_82ACA920(ctx, p6, p6->fc) : p6);
    n->flags = (n->flags & ~0x1c000) | 0x4000;
    fn_82AC6860(ctx, n, p2, p3);
    return n;
}
