typedef struct CS_824E4378 { int cs[7]; } CS_824E4378;
typedef struct Mgr_824E4378 {
    CS_824E4378 cs;
    char pad1c[0x34 - 0x1c];
    int f34;
} Mgr_824E4378;
typedef struct G_824E4378 { char pad[0x48]; int f48; } G_824E4378;
typedef struct Dev_824E4378 {
    char pad0[0x1a0];
    void *f1A0;
    char pad1a4[0x1f4 - 0x1a4];
    int f1F4;
    char pad1f8[4];
    int f1FC;
} Dev_824E4378;
extern G_824E4378 lbl_8327FBC0;
extern Mgr_824E4378 *fn_824B8548(void);
extern Dev_824E4378 *fn_8258C000(void);
extern void fn_82BE3F38(Dev_824E4378 *d);
extern void RtlEnterCriticalSection(CS_824E4378 *cs);
extern void RtlLeaveCriticalSection(CS_824E4378 *cs);

void fn_824E4378(void)
{
    Mgr_824E4378 *m = fn_824B8548();
    Dev_824E4378 *d;
    RtlEnterCriticalSection(&m->cs);
    m->f34 = 1;
    RtlLeaveCriticalSection(&m->cs);
    if (lbl_8327FBC0.f48 != 0) {
        d = fn_8258C000();
        if (d->f1FC != 0 && d->f1F4 != 0 && d->f1A0 != 0) {
            fn_82BE3F38(d);
        }
    }
}
