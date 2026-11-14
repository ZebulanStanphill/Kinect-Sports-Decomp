typedef struct Ptr_82293BF0 {
    void *obj;
    void *rep;
} Ptr_82293BF0;

typedef struct Main_82293BF0 {
    void *movie;
    char pad4[0xc];
    int f10;
    char f14[0x20];
    char f34[0x20];
    char f54[0x20];
    char pad74[0x28];
    short f9C;
} Main_82293BF0;

typedef struct Obj_82293BF0 {
    char pad0[0xc];
    Main_82293BF0 *main;
} Obj_82293BF0;

extern Ptr_82293BF0 *fn_8229AE10(Ptr_82293BF0 *out, Obj_82293BF0 *o);
extern void fn_82672C20(void *movie, const char *path, int a, int b);
extern void fn_822315A0(void *rep);
extern void XMemSet(void *p, int v, int n);

void fn_82293BF0(Obj_82293BF0 *o)
{
    Ptr_82293BF0 p;
    Main_82293BF0 *m;

    fn_82672C20(fn_8229AE10(&p, o)->obj, "_root.scorecardCtrl.reset", 0, 0);
    if (p.rep != 0) {
        fn_822315A0(p.rep);
    }
    m = o->main;
    fn_82672C20(m->movie, "_root.mainCtrl.reset", 0, 0);
    m->f10 = 0;
    m->f9C = 0;
    XMemSet(m->f14, 0, 0x20);
    XMemSet(m->f54, 0, 0x20);
    XMemSet(m->f34, 0, 0x20);
}
