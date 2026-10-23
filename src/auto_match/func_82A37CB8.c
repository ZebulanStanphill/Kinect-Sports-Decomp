typedef struct Obj {
    int m0;
    void *m4;
    int m8;
    int mc;
    char cs[0x2c - 0x10];
    void *handle;
    int m30;
    int m34;
} Obj;

extern void fn_8265C990(void *p, int flags);
extern void fn_82A37B80(Obj *p);
extern void RtlLeaveCriticalSection(void *cs);
extern int NtClose(void *h);

void fn_82A37CB8(Obj *p)
{
    if (p->m4 != 0) {
        fn_82A37B80(p);
        if (p->m34 != 0) {
            fn_8265C990(p->m4, 0x24830000);
            p->m34 = 0;
        }
        p->m4 = 0;
        p->m8 = 0;
        p->mc = 0;
        RtlLeaveCriticalSection(p->cs);
    }
    if (p->handle != 0) {
        NtClose(p->handle);
        p->handle = 0;
    }
    p->m0 = 0;
}
