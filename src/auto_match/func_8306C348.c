extern int NtSetTimerEx(void *h, void *due, void *apc, int mode, void *ctx, unsigned char resume, int period, void *prev);
extern void fn_82A2B760(int st);   /* set last error from NTSTATUS */
extern void fn_82A2A370(int err);  /* SetLastError */

int fn_8306C348(void *h, void *due, int period, void *apc, void *ctx, int resume)
{
    int st = NtSetTimerEx(h, due, apc, 1, ctx, resume, period, 0);
    if (st < 0) {
        fn_82A2B760(st);
        return 0;
    }
    if (st == 0x40000025)
        fn_82A2A370(0x32);
    else
        fn_82A2A370(0);
    return 1;
}
