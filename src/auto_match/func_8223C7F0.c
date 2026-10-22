typedef struct Inner { int a; int b; __int64 c; } Inner;
typedef struct Obj { int unk0; int unk4; int unk8; int unkc; Inner in; __int64 d; int e; int f; int *p; } Obj;
extern void fn_82240070(Obj *o, int a, int b);
extern void *fn_8265C9E0(int size);
extern int fn_82F62CD0(void);
extern int fn_82F62800(void);
extern void fn_8223F508(int x);

static void Inner_init(Inner *i) { i->a = 0; i->b = 0x201; i->c = 6; }
void fn_8223C7F0(Obj *o) {
    o->unk8 = 0;
    Inner_init(&o->in);
    o->d = 0; o->e = 0; o->f = 0; o->p = 0;
    fn_82240070(o, 0, 0);
    {
        int *p = (int *)fn_8265C9E0(4);
        int *r = 0;
        if (p != 0) {
            *p = fn_82F62CD0();
            fn_8223F508(fn_82F62800());
            r = p;
        }
        o->p = r;
    }
}

