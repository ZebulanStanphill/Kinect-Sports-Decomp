extern void fn_826C3378(void *self, void *q, int flag);

typedef struct {
    int f0;
    int f4;
    unsigned int refs;
} Obj;

typedef struct {
    Obj *p;
    void *q;
    unsigned char flag;
} Sub;

typedef struct {
    Obj *a;
    int *rc;
    Sub s;
} T;

T *fn_82702DE0(T *d, T *s)
{
    Sub *sub;
    int *rc;

    if (s->a != 0)
        s->a->refs = (s->a->refs + 1) & 0x8fffffff;
    d->a = s->a;
    rc = s->rc;
    if (rc != 0)
        (*rc)++;
    d->rc = s->rc;
    sub = &d->s;
    sub->flag = 0;
    sub->p = s->s.p;
    if (sub->p != 0)
        sub->p->refs = (sub->p->refs + 1) & 0x8fffffff;
    sub->q = 0;
    if (s->s.q != 0)
        fn_826C3378(sub, s->s.q, s->s.flag & 1);
    return d;
}
