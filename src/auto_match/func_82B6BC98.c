typedef void *(*Alloc_82B6BC98)(void *, int);

typedef struct Fac_82B6BC98 {
    void *a;
    Alloc_82B6BC98 alloc;
    void *c;
    int d;
    void *e;
    void *f;
} Fac_82B6BC98;

extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
extern void *fn_82AB6800(void *a, Alloc_82B6BC98 b, void *c, void *d);
extern void *fn_82AB6870(void *a, Alloc_82B6BC98 b, void *c, void *d);
extern void fn_82B6B728(Fac_82B6BC98 *f);

Fac_82B6BC98 *fn_82B6BC98(void *a, Alloc_82B6BC98 alloc, void *c, void *d, void *e)
{
    Fac_82B6BC98 *f;
    void *x;

    if (alloc == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "AllocateSysMem", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x215);
    }
    if (c == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "FreeSysMem", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x216);
    }
    if (d == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "initNumLists > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x217);
    }
    if (e == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "initNumItems > 0", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x218);
    }
    f = (Fac_82B6BC98 *)alloc(a, 0x18);
    if (f == 0) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pNewFactory", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x21f);
    } else {
        f->a = a;
        f->alloc = alloc;
        f->c = c;
        f->d = 0;
        f->e = fn_82AB6800(a, alloc, c, d);
        x = fn_82AB6870(a, alloc, c, e);
        f->f = x;
        if (x == 0 || f->e == 0) {
            if (f->f == 0 || f->e == 0) {
                fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "pNewFactory->pItemMemMgr && pNewFactory->pListMemMgr", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlistfactories.cpp", 0x23a);
            }
            fn_82B6B728(f);
            f = 0;
        }
    }
    return f;
}
