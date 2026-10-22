typedef struct Obj {
    char pad0[0x40];
    void *x40;
    void *x44;
    void *x48;
    void *x4c;
    void *x50;
    void *x54;
    void *x58;
    char pad5c[0x78 - 0x5c];
    void *x78;
    void *x7c;
    void *x80;
    void *x84;
} Obj;

extern void fn_8251FA58(void *p);
extern void fn_82522ED8(Obj *o);
extern void fn_82545950(void **pp);
extern void fn_82545A90(void **pp);
extern void fn_8262FEC8(void *p);
extern void fn_82645838(void *p);

void fn_825B1E50(Obj *o)
{
    if (o->x40 != 0) {
        fn_82645838(o->x40);
        fn_8262FEC8(o->x40);
        o->x40 = 0;
    }
    if (o->x44 != 0)
        fn_82545950(&o->x44);
    if (o->x48 != 0)
        fn_82545A90(&o->x48);
    if (o->x4c != 0)
        fn_82545950(&o->x4c);
    if (o->x50 != 0)
        fn_82545A90(&o->x50);
    if (o->x78 != 0)
        fn_82545950(&o->x78);
    if (o->x7c != 0)
        fn_82545A90(&o->x7c);
    if (o->x80 != 0)
        fn_82545A90(&o->x80);
    if (o->x84 != 0)
        fn_82545A90(&o->x84);
    if (o->x54 != 0) {
        fn_8251FA58(o->x54);
        o->x54 = 0;
    }
    if (o->x58 != 0) {
        fn_8251FA58(o->x58);
        o->x58 = 0;
    }
    fn_82522ED8(o);
}
