typedef struct Stack_82B02A28 {
    unsigned int items[4];
    unsigned int count;
} Stack_82B02A28;

typedef struct Entry_82B02A28 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
} Entry_82B02A28;

typedef struct EStack_82B02A28 {
    Entry_82B02A28 items[8];
    unsigned int count;
} EStack_82B02A28;

typedef struct State_82B02A28 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    Stack_82B02A28 stk;
    EStack_82B02A28 estk;
    unsigned int pad[11];
    unsigned int d0;
    unsigned int d4;
} State_82B02A28;

typedef struct Node_82B02A28 {
    int f0;
    int f4;
    unsigned int flags;
} Node_82B02A28;

typedef struct Desc_82B02A28 {
    unsigned int a : 4;
    unsigned int kind : 3;
    unsigned int b : 12;
    unsigned int bits : 8;
    unsigned int c : 5;
} Desc_82B02A28;

extern int fn_82AC9F80(void *ctx, unsigned int v, int z);
extern void fn_82AD1270(Desc_82B02A28 *p, unsigned int v);
extern unsigned int fn_82AD12C8(unsigned int v);
extern Desc_82B02A28 *fn_82AD17B0(void *ctx, unsigned int v);
extern int fn_82AD18C0(void *ctx, Node_82B02A28 *n, int z);
extern int fn_82AD1918(void *ctx, unsigned int a, unsigned int b, unsigned int c);
extern void fn_82AD1978(Node_82B02A28 *n, int v);
extern void fn_82AD1B28(Node_82B02A28 *n);
extern Node_82B02A28 *fn_82AF77E0(void *ctx, int z, Node_82B02A28 *parent, int x, int y);
extern Node_82B02A28 *fn_82AF80A8(void *ctx, int z, Node_82B02A28 *parent, Desc_82B02A28 *d);
extern void fn_82AFA378(void *ctx, Node_82B02A28 *n);
extern void fn_82AFE7E0(void *ctx, Node_82B02A28 *parent, int z, Node_82B02A28 *n);

static __forceinline void push_82B02A28(Stack_82B02A28 *st, unsigned int v)
{
    st->items[st->count] = v;
    st->count++;
}

static __forceinline unsigned int pop_82B02A28(Stack_82B02A28 *st)
{
    unsigned int n;

    n = st->count - 1;
    st->count = n;
    return st->items[n];
}

static __forceinline Entry_82B02A28 epop_82B02A28(EStack_82B02A28 *st)
{
    st->count--;
    return st->items[st->count];
}

Node_82B02A28 *fn_82B02A28(void *ctx, Node_82B02A28 *parent, State_82B02A28 *s)
{
    unsigned int bits;
    unsigned int a;
    unsigned int b;
    Desc_82B02A28 *p;
    Node_82B02A28 *cur;
    Node_82B02A28 *nn;
    Entry_82B02A28 e;
    int x;
    int y;
    int t;

    if (s->stk.count == 3) {
        push_82B02A28(&s->stk, s->d4);
    }
    bits = 0;
    while (s->stk.count != 0) {
        bits = pop_82B02A28(&s->stk) | (bits << 2);
    }
    a = s->a;
    b = s->b;
    p = fn_82AD17B0(ctx, a);
    p->kind = 4;
    fn_82AD1270(p, b);
    p->bits = bits;
    cur = fn_82AF80A8(ctx, 0, parent, p);
    if (s->c != 0) {
        fn_82AD1978(cur, fn_82AC9F80(ctx, s->c, 0));
    }
    while (s->estk.count != 0) {
        e = epop_82B02A28(&s->estk);
        if (s->estk.count != s->d0 - 1) {
            x = fn_82AD1918(ctx, e.a, e.b, e.c);
            y = fn_82AD18C0(ctx, cur, 0);
            if ((cur->flags & 0x3f80) == 0x180) {
                t = x;
                x = y;
                y = t;
            }
            nn = fn_82AF77E0(ctx, 0, parent, x, y);
            if ((e.c & 8) != 0) {
                fn_82AD1978(nn, fn_82AC9F80(ctx, fn_82AD12C8(e.d), 0));
            }
            fn_82AD1B28(cur);
            cur->flags |= 0x1000000;
            fn_82AFA378(ctx, cur);
            cur = nn;
        }
    }
    if ((parent->flags & 1) != 0) {
        cur->flags |= 1;
    }
    fn_82AFE7E0(ctx, parent, 0, cur);
    return cur;
}
