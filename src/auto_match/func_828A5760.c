typedef struct Obj {
    char buf[16];
    unsigned int size;
    unsigned int res;
    int pad18;
    int pad1c;
    void *ptr;
} Obj;
extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);

void fn_828A5760(void *unused, Obj *o)
{
    if (o->ptr != 0) {
        fn_822315A0(o->ptr);
    }
    if (o->res >= 16) {
        fn_8265CA20(*(void **)o->buf);
    }
    o->size = 0;
    o->res = 15;
    o->buf[0] = 0;
}
