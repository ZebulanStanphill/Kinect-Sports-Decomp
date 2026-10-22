typedef struct S {
    void *a;
    int b;
    void *c;
    int d;
} S;

extern void *fn_82E50BE8(void *p, int a, int b, int c, int d);

S *fn_82E80FD8(S *p, int b, void *h)
{
    void *r;

    p->b = b;
    p->a = 0;
    p->c = 0;
    p->d = 0;
    if (h != 0) {
        r = fn_82E50BE8(h, 0, 0, 0, 0);
        if (r != 0) {
            p->a = h;
            p->c = r;
        }
    }
    return p;
}
