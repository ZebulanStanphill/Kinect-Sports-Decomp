extern long _InterlockedExchange(long *, long);
extern void fn_8265C990(void *p, unsigned int flags);
extern long lbl_832178F0;

void fn_829D2710(void)
{
    void *p = (void *)_InterlockedExchange(&lbl_832178F0, 0);
    if (p != 0) {
        fn_8265C990(p, 0x209c0000);
    }
}
