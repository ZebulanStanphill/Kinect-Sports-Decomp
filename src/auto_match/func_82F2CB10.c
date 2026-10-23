extern void fn_8265C990(void *p, unsigned int flags);
extern void fn_82F641F8(void *p);

typedef struct {
    char pad0[0x40];
    int f40;
    char pad44[0x7c - 0x44];
    void *f7c;
    void *f80;
} Obj;

void fn_82F2CB10(Obj *o)
{
    if (o->f80 != 0) {
        fn_8265C990(o->f80, 0x248c8000);
        o->f80 = 0;
    }
    if (o->f7c != 0) {
        fn_82F641F8(o->f7c);
        o->f7c = 0;
    }
    o->f40 = 1;
}
