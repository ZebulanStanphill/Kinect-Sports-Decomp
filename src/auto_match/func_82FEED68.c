extern void fn_82FEC940(void);
extern void fn_82FED980(void);
extern void fn_82FEE718(void);
extern void fn_82FEEC60(void);
extern void fn_8300D4C0(void *obj);
extern unsigned char fn_8300D8E8(void *obj);
extern void *lbl_832643F0;

void fn_82FEED68(void)
{
    unsigned char ok;

    fn_82FEE718();
    fn_82FEC940();
    fn_82FEEC60();
    ok = lbl_832643F0 != 0 && fn_8300D8E8(lbl_832643F0) != 0;
    if (ok) {
        fn_8300D4C0(lbl_832643F0);
    }
    fn_82FED980();
}
