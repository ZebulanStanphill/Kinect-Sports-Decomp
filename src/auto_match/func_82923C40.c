typedef struct Obj {
    unsigned int flags;
    void *a;
    void *b;
    void *c;
    void *d;
} Obj;

extern void fn_8262FEC8(void *p);
extern void fn_8263CB30(void *p);
extern void fn_82647460(void *p);
extern void fn_82923B48(void *b, void *a);
extern void fn_82BA02A8(int x);

int fn_82923C40(Obj *o)
{
    void *p = o->b;
    if (p == 0) p = o->a;
    if (p != 0) {
        fn_8263CB30(p);
    }
    if (o->a != 0 && o->b != 0 && o->d != 0 && (o->flags & 1) == 0) {
        fn_82BA02A8(1);
        fn_82BA02A8(0);
        fn_82BA02A8(1);
        fn_82923B48(o->b, o->a);
        fn_82BA02A8(0);
    }
    if (o->b != 0) {
        fn_8262FEC8(o->b);
        o->b = 0;
    }
    if (o->c != 0) {
        fn_8262FEC8(o->c);
        o->c = 0;
    }
    if (o->d != 0) {
        fn_82647460(o->d);
        o->d = 0;
    }
    if (o->a != 0) {
        fn_8262FEC8(o->a);
        o->a = 0;
    }
    return 0;
}
