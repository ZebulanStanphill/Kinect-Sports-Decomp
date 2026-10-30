extern void fn_8265CA20(void *p);
extern void fn_8282CF00(void *p);
extern void fn_8282D5B8(void *p, int flags);
extern void fn_82831578(void *p);

typedef struct {
    void *a;
    void *b;
    int x8;
    void *c;
} Obj_8282D3A8;

void fn_8282D3A8(Obj_8282D3A8 *o)
{
    if (o->a != 0) {
        void *b;
        fn_8282CF00(o->a);
        o->a = 0;
        b = o->b;
        if (b != 0) {
            fn_82831578(b);
            fn_8265CA20(b);
        }
        o->b = 0;
        if (o->c != 0) {
            fn_8282D5B8(o->c, 3);
        }
        o->c = 0;
    }
}
