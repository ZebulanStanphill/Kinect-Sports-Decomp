typedef struct S_82CE3C28 { int a[6]; void *p; } S_82CE3C28;
extern void fn_82A1F348(void *);

void fn_82CE3C28(S_82CE3C28 *s)
{
    void *t = s->p;
    s->a[0] = 0;
    s->a[1] = 0;
    s->a[2] = 0;
    s->a[3] = 0;
    s->a[4] = 0;
    s->a[5] = 0;
    if (t != 0) {
        fn_82A1F348(t);
        s->p = 0;
    }
}
