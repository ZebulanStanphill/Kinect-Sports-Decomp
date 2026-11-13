typedef struct Clock_82FEC940 { char pad[0x90]; unsigned int now; } Clock_82FEC940;

extern unsigned char fn_83023550(void *obj);
extern void fn_83023558(void *obj);
extern void fn_8300D748(void *obj);
extern unsigned char fn_8300D8E8(void *obj);
extern void *lbl_832643B0;
extern Clock_82FEC940 *lbl_832642E4;
extern unsigned int lbl_832643E4;
extern void *lbl_832643F0;

void fn_82FEC940(void)
{
    unsigned char ok;

    if (fn_83023550(lbl_832643B0) == 1) {
        unsigned int now;
        fn_83023558(lbl_832643B0);
        now = lbl_832642E4->now;
        if (lbl_832643E4 == 0 || now - lbl_832643E4 > 8) {
            lbl_832643E4 = now;
        }
    }
    ok = lbl_832643F0 != 0 && fn_8300D8E8(lbl_832643F0) != 0;
    if (ok) {
        fn_8300D748(lbl_832643F0);
    }
}
