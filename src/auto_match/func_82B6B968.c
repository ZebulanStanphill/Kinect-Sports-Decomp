typedef void *(*Alloc_82B6B968)(void *, int);

typedef struct Fac_82B6B968 {
    void *a;
    Alloc_82B6B968 alloc;
    void *c;
    int d;
    void *e;
    void *f;
} Fac_82B6B968;

extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *fn_82AB5A40(void *a, Alloc_82B6B968 b, void *c, void *d);
extern void *fn_82AB5AB0(void *a, Alloc_82B6B968 b, void *c, void *d);
extern void fn_82B6B298(Fac_82B6B968 *f);

Fac_82B6B968 *fn_82B6B968(void *a, Alloc_82B6B968 alloc, void *c, void *d, void *e)
{
    Fac_82B6B968 *f;
    void *x;

    if (alloc == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "AllocateSysMem", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x56);
    }
    if (c == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "FreeSysMem", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x57);
    }
    if (d == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "initNumLists > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x58);
    }
    if (e == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "initNumItems > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x59);
    }
    f = (Fac_82B6B968 *)alloc(a, 0x18);
    if (f == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pNewFactory", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x60);
    } else {
        f->a = a;
        f->alloc = alloc;
        f->c = c;
        f->d = 0;
        f->e = fn_82AB5A40(a, alloc, c, d);
        x = fn_82AB5AB0(a, alloc, c, e);
        f->f = x;
        if (x == 0 || f->e == 0) {
            if (f->f == 0 || f->e == 0) {
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pNewFactory->pItemMemMgr && pNewFactory->pListMemMgr", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x7b);
            }
            fn_82B6B298(f);
            f = 0;
        }
    }
    return f;
}
