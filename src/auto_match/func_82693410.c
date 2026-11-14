extern __int64 lbl_831F12A0;
extern unsigned char lbl_831F12A8;
extern int fn_82A1F160(__int64 *frequency);
extern int fn_82A1E968(__int64 *counter);

__int64 fn_82693410(void)
{
    __int64 counter;
    if (lbl_831F12A8 == 0) {
        fn_82A1F160(&lbl_831F12A0);
        lbl_831F12A8 = 1;
        lbl_831F12A0 = lbl_831F12A0 / 7812;
        if (lbl_831F12A0 == 0) {
            lbl_831F12A0 = 1;
        }
    }
    fn_82A1E968(&counter);
    return (counter * 128) / lbl_831F12A0;
}
