extern void fn_827AEE78(void *p);

typedef struct Pair {
    int last;
    int end;
} Pair;

typedef struct Sub {
    int first;
    Pair r;
    unsigned char flag;
} Sub;

typedef struct T {
    int i0;
    int p0;
    unsigned int i1;
    int p1;
    int x10;
    int x14;
    Sub v;
} T;

typedef struct S {
    int a;
    int b;
    int x8;
    T t;
    int d;
} S;

static void Pair_init(Pair *r)
{
    r->end = 0;
    r->last = 0;
}

static void Sub_init(Sub *s)
{
    Pair_init(&s->r);
    s->first = 0;
    s->flag = 0;
}

static void T_init(T *t)
{
    t->i0 = -1;
    t->p0 = 0;
    t->i1 = 0xffffffff;
    t->p1 = 0;
    t->x10 = 0;
    t->x14 = 0;
    Sub_init(&t->v);
}

S *fn_827AF310(S *p, int a, int b, int d)
{
    p->a = a;
    p->b = b;
    p->x8 = 0;
    T_init(&p->t);
    p->d = d;
    fn_827AEE78(p);
    return p;
}
