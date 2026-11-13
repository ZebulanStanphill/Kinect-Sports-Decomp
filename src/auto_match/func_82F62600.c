typedef struct Lock_82F62600 { char cs[0x1c]; } Lock_82F62600;
extern long _InterlockedDecrement(long *);
extern long lbl_831BB124;
extern Lock_82F62600 lbl_83263258[];
extern void fn_82BA02A8(Lock_82F62600 *lock);

void fn_82F62600(void *self)
{
    int i;

    if (_InterlockedDecrement(&lbl_831BB124) < 0) {
        for (i = 0; i < 4; i++)
            fn_82BA02A8(&lbl_83263258[i]);
    }
}
