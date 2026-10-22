typedef struct {
    void *p;
    void *rc;
} Ref;

extern void fn_822315A0(void *rc);
extern Ref *fn_8229AE10(Ref *out, void *self);
extern void fn_82672C20(void *p, const char *s, int a, int b);

typedef struct {
    char pad0[0x34];
    int a;
    int shown;
} Obj;

void fn_82292268(Obj *o)
{
    Ref r;
    if (o->a != 0 && o->shown == 0) {
        fn_82672C20(fn_8229AE10(&r, o)->p, "_root.mc_topscorePanel.hide", 0, 0);
        if (r.rc != 0) {
            fn_822315A0(r.rc);
        }
        o->shown = 1;
    }
}
