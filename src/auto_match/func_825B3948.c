typedef struct {
    int first;
    int second;
} Pair;
typedef struct {
    void *ptr;
    void *rc;
} Ref;
typedef struct {
    int pad[2];
    void (*cb)(Pair *p, void *a, void *b);
} Obj;

extern void fn_82517978(Pair *out, void *ptr, void *rc, int c);
extern void fn_822315A0(void *rc);

void fn_825B3948(Obj *o, Ref *r, void *a, void *b)
{
    if (o->cb != 0) {
        Pair tmp;
        tmp.first = 0;
        tmp.second = 0;
        fn_82517978(&tmp, r->ptr, r->rc, 0);
        o->cb(&tmp, a, b);
    }
    if (r->rc != 0)
        fn_822315A0(r->rc);
}
