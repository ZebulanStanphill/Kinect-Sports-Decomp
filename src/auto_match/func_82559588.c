typedef struct Sys_82559588 {
    char pad0[0x2a88];
    unsigned int f2a88;
    char pad1[0x2efc - 0x2a8c];
    unsigned int f2efc;
    char pad2[0x35f0 - 0x2f00];
    int f35f0;
} Sys_82559588;
typedef struct G_82559588 {
    char pad[0x28];
    int h28;
    int dev;
    int ev30;
    void *bufA;
    int sizeA;
    void *bufB;
    int sizeB;
    int ev44;
} G_82559588;
#define __eieio() __emit(0x7C0006AC)
extern Sys_82559588 *lbl_8320A898;
extern G_82559588 lbl_8327FBC0;
extern unsigned int lbl_83265A28;
extern float lbl_821CA45C[];
extern float lbl_821954B0[];
extern int *lbl_831C1678[];
extern void *lbl_8326B7C8;
extern int lbl_8326B370;
extern unsigned char lbl_83276742;
extern unsigned int fn_82A1BB18(void);
extern void fn_82CE0410(void);
extern int fn_82554D38(void);
extern unsigned int fn_82554F20(int, void *, int, int);
extern void fn_82559368(int *, void *, void *, int);
extern void fn_82555238(int);
extern void fn_82555148(int);
extern unsigned int fn_82A1E650(int, int);
extern void fn_827DA660(void *, void *, int);
extern void fn_825594C0(void);
extern void fn_82554DA8(int);
extern void fn_82CE04E8(void);
extern void fn_82631920(Sys_82559588 *, int);
extern void fn_82648160(Sys_82559588 *, int, int);
extern void fn_82A1E810(int);

int fn_82559588(void)
{
    Sys_82559588 *sys = lbl_8320A898;
    union {
        unsigned int u;
        float f;
    } cv;
    int idx;
    Sys_82559588 *sys2;

    if (sys->f2a88 != 0)
        fn_82A1BB18();
    sys->f2a88 = fn_82A1BB18();
    fn_82CE0410();
    lbl_8327FBC0.dev = fn_82554D38();
    if (lbl_8327FBC0.bufA != 0) {
        if (fn_82554F20(lbl_8327FBC0.dev, lbl_8327FBC0.bufA, lbl_8327FBC0.sizeA, 0) != 0) {
            lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
            cv.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
            idx = (int)((cv.f - lbl_821CA45C[1]) * lbl_821954B0[0x240]);
            fn_82559368(lbl_831C1678[-idx], &lbl_8327FBC0.bufB, &lbl_8327FBC0.sizeB, lbl_8327FBC0.ev44);
            lbl_8320A898->f2efc = lbl_8320A898->f2efc & 0xc07fffff;
            lbl_8320A898->f35f0 = 2;
            fn_82555238(lbl_8327FBC0.dev);
            fn_82555148(lbl_8327FBC0.dev);
            fn_82A1E650(lbl_8327FBC0.ev44, -1);
        }
        fn_827DA660(lbl_8326B7C8, lbl_8327FBC0.bufA, 0);
        lbl_8327FBC0.bufA = 0;
    }
    fn_825594C0();
    if (lbl_8327FBC0.bufB != 0) {
        if (fn_82554F20(lbl_8327FBC0.dev, lbl_8327FBC0.bufB, lbl_8327FBC0.sizeB, 0) != 0) {
            fn_82555238(lbl_8327FBC0.dev);
            fn_82555148(lbl_8327FBC0.dev);
        }
        fn_827DA660(lbl_8326B7C8, lbl_8327FBC0.bufB, 0);
        lbl_8327FBC0.bufB = 0;
    }
    fn_82554DA8(lbl_8327FBC0.dev);
    lbl_8327FBC0.dev = 0;
    fn_82CE04E8();
    if (lbl_83276742 != 0) {
        for (;;) {
            fn_82631920(lbl_8320A898, 0);
            fn_82648160(lbl_8320A898, lbl_8326B370, 0);
        }
    }
    while (fn_82A1E650(lbl_8327FBC0.ev30, 0) != 0) {
        fn_82631920(lbl_8320A898, 0);
        fn_82648160(lbl_8320A898, lbl_8326B370, 0);
    }
    sys2 = lbl_8320A898;
    __eieio();
    sys2->f2a88 = 0;
    fn_82A1E810(lbl_8327FBC0.h28);
    return 0;
}
