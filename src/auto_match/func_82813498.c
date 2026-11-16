extern unsigned char fn_828122C0(__int64 *lock);
extern void fn_8281FA58(void *object);
extern void fn_831400B8(void);
extern int atexit(void (*callback)(void));
extern __int64 _InterlockedExchange64(__int64 *target, __int64 value);
#define __lwsync() __emit(0x7C2004AC)
extern __int64 lbl_8320A4D8;
extern void *lbl_8320A4D4;
extern unsigned int lbl_8320A4D0;
extern char lbl_8320A430[];

void *fn_82813498(void)
{
    while (!fn_828122C0(&lbl_8320A4D8)) {
    }
    __lwsync();
    if (lbl_8320A4D4 == 0) {
        void *object = lbl_8320A430;
        if (!(lbl_8320A4D0 & 1)) {
            lbl_8320A4D0 |= 1;
            fn_8281FA58(object);
            atexit(fn_831400B8);
        }
        lbl_8320A4D4 = object;
        __lwsync();
    }
    _InterlockedExchange64(&lbl_8320A4D8, 0);
    return lbl_8320A4D4;
}
