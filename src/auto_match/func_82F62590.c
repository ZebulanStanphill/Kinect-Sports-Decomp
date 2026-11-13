typedef struct Lock_82F62590 { char cs[0x1c]; } Lock_82F62590;
extern long _InterlockedIncrement(long *);
extern long lbl_831BB124;
extern Lock_82F62590 lbl_83263258[];
extern void fn_82F63AC0(Lock_82F62590 *lock);

void *fn_82F62590(void *self)
{
    int i;

    if (_InterlockedIncrement(&lbl_831BB124) == 0) {
        for (i = 0; i < 4; i++)
            fn_82F63AC0(&lbl_83263258[i]);
    }
    return self;
}
