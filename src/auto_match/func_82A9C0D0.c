typedef struct Tab_82A9C0D0 { char pad[0xc]; unsigned int count; unsigned int off; } Tab_82A9C0D0;
typedef struct Ent_82A9C0D0 { char b[0x14]; } Ent_82A9C0D0;
typedef struct Obj_82A9C0D0 { char pad[0x90]; int f90; } Obj_82A9C0D0;
typedef struct Ctx_82A9C0D0 { char pad[0x184]; Tab_82A9C0D0 *f184; } Ctx_82A9C0D0;
extern void fn_82A99B70(void *w, const char *fmt, const char *name);
extern void fn_82A99BC8(void *w);
extern void fn_82A99C28(void *w, const char *name);
extern void fn_82A9A860(void *w);
extern void fn_82A9BFE8(Obj_82A9C0D0 *o, void *w, Tab_82A9C0D0 *t, Ent_82A9C0D0 *e);

void fn_82A9C0D0(Obj_82A9C0D0 *o, void *w, Ctx_82A9C0D0 *c)
{
    Tab_82A9C0D0 *t;
    Ent_82A9C0D0 *e;
    unsigned int i;
    if (o->f90 >= 0) {
        t = c->f184;
        fn_82A99BC8(w);
        fn_82A99B70(w, "<%s", "constanttable");
        fn_82A9A860(w);
        if (t != 0) {
            e = (Ent_82A9C0D0 *)((char *)t + t->off);
            for (i = 0; i < t->count; i++) {
                fn_82A9BFE8(o, w, t, e);
                e++;
            }
        }
        fn_82A99C28(w, "constanttable");
    }
}
