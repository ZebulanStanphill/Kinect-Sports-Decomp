extern void fn_82A1E650(void *, int);
extern void fn_82A1E658(void *);
extern void fn_82A1E810(void *);

typedef struct {
    char pad0[0xc];
    void *f0c;
    char pad1[0x1c];
    void *f2c;
    void *f30;
    void *f34;
    void *f38;
    int f3c;
    int f40;
} Obj_83055DD0;

void fn_83055DD0(Obj_83055DD0 *o)
{
    if (o->f2c != 0) {
        fn_82A1E810(o->f2c);
        if (o->f0c != 0) {
            fn_82A1E650(o->f0c, -1);
            fn_82A1E658(o->f0c);
            o->f0c = 0;
        }
        fn_82A1E658(o->f2c);
        o->f2c = 0;
    }
    if (o->f0c != 0) {
        fn_82A1E658(o->f0c);
        o->f0c = 0;
    }
    if (o->f34 != 0) {
        fn_82A1E658(o->f34);
        o->f34 = 0;
    }
    o->f3c = 0;
    if (o->f38 != 0) {
        fn_82A1E658(o->f38);
        o->f38 = 0;
    }
    o->f40 = 0;
    if (o->f30 != 0) {
        fn_82A1E658(o->f30);
        o->f30 = 0;
    }
}
