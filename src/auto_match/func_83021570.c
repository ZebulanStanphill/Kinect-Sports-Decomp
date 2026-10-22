typedef struct Sub { int a, b, c, d; } Sub;
typedef struct T {
    void *vt;
    int base[3];
    Sub s;
} T;
extern void *fn_82FA5060(int heap, int size);
extern void fn_83008328(T *t, int a);
extern char lbl_8217C594[];
extern int lbl_831BC768;

static void Sub_init(Sub *s)
{
    s->a = 0;
    s->b = 0;
    s->c = 0;
    s->d = 0;
}

static T *T_ctor(T *t, int a)
{
    fn_83008328(t, a);
    t->vt = lbl_8217C594;
    Sub_init(&t->s);
    return t;
}

T *fn_83021570(int a)
{
    T *m = (T *)fn_82FA5060(lbl_831BC768, 0x20);
    return m ? T_ctor(m, a) : 0;
}
