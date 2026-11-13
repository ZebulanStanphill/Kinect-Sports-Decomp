typedef void *(*Alloc_82B6BB00)(void *, int);

typedef struct Fac_82B6BB00 {
    void *a;
    Alloc_82B6BB00 alloc;
    void *c;
    int d;
    void *e;
    void *f;
} Fac_82B6BB00;

extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *fn_82AB5DE0(void *a, Alloc_82B6BB00 b, void *c, void *d);
extern void *fn_82AB5E50(void *a, Alloc_82B6BB00 b, void *c, void *d);
extern void fn_82B6B4E8(Fac_82B6BB00 *f);

Fac_82B6BB00 *fn_82B6BB00(void *a, Alloc_82B6BB00 alloc, void *c, void *d, void *e)
{
    Fac_82B6BB00 *f;
    void *x;

    if (alloc == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "AllocateSysMem", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x138);
    }
    if (c == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "FreeSysMem", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x139);
    }
    if (d == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "initNumLists > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x13a);
    }
    if (e == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "initNumItems > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x13b);
    }
    f = (Fac_82B6BB00 *)alloc(a, 0x18);
    if (f == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pNewFactory", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x142);
    } else {
        f->a = a;
        f->alloc = alloc;
        f->c = c;
        f->d = 0;
        f->e = fn_82AB5DE0(a, alloc, c, d);
        x = fn_82AB5E50(a, alloc, c, e);
        f->f = x;
        if (x == 0 || f->e == 0) {
            if (f->f == 0 || f->e == 0) {
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pNewFactory->pItemMemMgr && pNewFactory->pListMemMgr", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x15d);
            }
            fn_82B6B4E8(f);
            f = 0;
        }
    }
    return f;
}
