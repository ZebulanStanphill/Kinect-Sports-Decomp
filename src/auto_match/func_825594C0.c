extern unsigned char lbl_8329774C;
extern long lbl_83281120[1];
extern int fn_82A25E38(unsigned int, int, int, int, int);
extern int fn_82A1C120(const char *, void *, int, void *, void *, void *, void *, int);
extern void *fn_8225F670(void);
extern void fn_8225F748(void *);
#define __lwsync() __emit(0x7C2004AC)

extern long _InterlockedIncrement(long *);

void fn_825594C0(void)
{
    struct {
        int first;
        int second;
        int third[2];
    } result;

    char target[64];
    char source[64];

    if (!lbl_8329774C) {
        fn_82A25E38(0xc0000020, 0, 3, 0, 0);
        if (fn_82A1C120("cache:\\", source, 64, &result.first, result.third, &result.second, target, 64) !=
            0) {
            lbl_83281120[-1] = 1;
        }
        __lwsync();
        _InterlockedIncrement(lbl_83281120);
        lbl_8329774C = 1;
        fn_8225F748(fn_8225F670());
    }
}
