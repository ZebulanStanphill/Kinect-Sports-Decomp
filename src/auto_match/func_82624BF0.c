typedef struct Obj {
    void *f0;
    int f4;
    void *f8;
    void *fc;
    void *f10;
    void *f14;
    void *f18;
    int f1c;
    int f20;
    int f24;
    int pad28;
    void *f2c;
} Obj;

extern void fn_8251FA58(void *p);
extern void fn_82522ED8(void *p);
extern void fn_82545950(void **p);
extern void fn_82545A90(void **p);
extern void fn_8262FEC8(void *p);

void fn_82624BF0(Obj *o)
{
    if (o->fc != 0) {
        fn_82545A90(&o->fc);
    }
    if (o->f8 != 0) {
        fn_82545950(&o->f8);
    }
    if (o->f18 != 0) {
        fn_8251FA58(o->f18);
        o->f18 = 0;
        o->f24 = 0;
    }
    if (o->f14 != 0) {
        fn_8251FA58(o->f14);
        o->f14 = 0;
        o->f20 = 0;
    }
    if (o->f10 != 0) {
        fn_8251FA58(o->f10);
        o->f10 = 0;
        o->f1c = 0;
    }
    if (o->f0 != 0) {
        fn_8262FEC8(o->f0);
        o->f0 = 0;
        o->f4 = 0;
    }
    if (o->f2c != 0) {
        fn_82522ED8(o->f2c);
        o->f2c = 0;
    }
    fn_82522ED8(o);
}
