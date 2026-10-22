typedef struct _RTL_CRITICAL_SECTION RTL_CRITICAL_SECTION;
extern void RtlEnterCriticalSection(RTL_CRITICAL_SECTION *);
extern void RtlLeaveCriticalSection(RTL_CRITICAL_SECTION *);

typedef struct {
    char pad0[0x10];
    int f10;
    int f14;
    int f18;
    unsigned int flags;
    unsigned int flags2;
    char cs[0x1c];
    int f40;
    char pad44[0xc];
} Entry;

extern int fn_82FA4F60();
extern void fn_82FA4E40(Entry *);
extern void fn_82FA54B8(Entry *);
extern void fn_82FA64D0(int);
extern int lbl_8326420C;
extern Entry *lbl_83264210;

int fn_82FA57F0(int idx)
{
    int r;
    Entry *e;

    r = fn_82FA4F60();
    if (r == 1) {
        e = &lbl_83264210[idx];
        RtlEnterCriticalSection((RTL_CRITICAL_SECTION *)e->cs);
        if ((e->flags & 8) == 8) {
            e->f10 = 0;
            e->f14 = 0;
            e->f18 = 0;
        } else {
            fn_82FA64D0(e->f40);
        }
        if ((e->flags2 & 0x80000000) != 0) {
            fn_82FA54B8(e);
        }
        fn_82FA4E40(e);
        lbl_8326420C--;
        RtlLeaveCriticalSection((RTL_CRITICAL_SECTION *)e->cs);
    }
    return r;
}
