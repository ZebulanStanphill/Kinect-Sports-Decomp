typedef struct Audio_82558A18 {
    char pad0[0x24];
    int thread24;       /* 0x24 */
    int thread28;       /* 0x28 */
    int dev;            /* 0x2c */
    int ev30;           /* 0x30 */
    void *bufA;         /* 0x34 */
    int sizeA;          /* 0x38 */
    void *bufB;         /* 0x3c */
    int sizeB;          /* 0x40 */
    int ev44;           /* 0x44 */
    int stopped;        /* 0x48 */
    int idle;           /* 0x4c */
} Audio_82558A18;

extern Audio_82558A18 lbl_8327FBC0;
extern void *lbl_8326B7C8;

extern void fn_82A1E810(int ev);
extern unsigned int fn_82A1E650(int handle, unsigned int timeout);
extern int fn_82A1E658(int handle);
extern void fn_827DA660(void *heap, void *p, int flags);
extern void fn_825587E8(void);

void fn_82558A18(void)
{
    if (lbl_8327FBC0.stopped == 0) {
        fn_82A1E810(lbl_8327FBC0.ev30);
        fn_82A1E650(lbl_8327FBC0.thread28, 0xffffffff);
        fn_82A1E650(lbl_8327FBC0.thread24, 0xffffffff);
        fn_82A1E658(lbl_8327FBC0.thread28);
        lbl_8327FBC0.thread28 = 0;
        fn_82A1E658(lbl_8327FBC0.thread24);
        lbl_8327FBC0.thread24 = 0;
        if (lbl_8327FBC0.bufA != 0) {
            fn_827DA660(lbl_8326B7C8, lbl_8327FBC0.bufA, 0);
            lbl_8327FBC0.bufA = 0;
        }
        if (lbl_8327FBC0.bufB != 0) {
            fn_827DA660(lbl_8326B7C8, lbl_8327FBC0.bufB, 0);
            lbl_8327FBC0.bufB = 0;
        }
        fn_82A1E658(lbl_8327FBC0.ev44);
        lbl_8327FBC0.ev44 = 0;
        lbl_8327FBC0.idle = 1;
        lbl_8327FBC0.stopped = 1;
        fn_825587E8();
    }
}
