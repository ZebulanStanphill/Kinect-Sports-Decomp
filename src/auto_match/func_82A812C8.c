typedef struct {
    void *a;
    void *b;
    void *c;
    void *d;
    void *e;
} T;

extern void fn_82C2B590(void *p);

void fn_82A812C8(T *t)
{
    if (t->c != 0) {
        fn_82C2B590(t->c);
        t->c = 0;
    }
    if (t->d != 0) {
        fn_82C2B590(t->d);
        t->d = 0;
    }
    t->a = 0;
    t->b = 0;
    t->c = 0;
    t->d = 0;
    t->e = 0;
}
