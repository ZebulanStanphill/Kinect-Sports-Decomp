extern int lbl_8322B4E8;
extern void *fn_82BFA778(void);

int fn_82BF3948(void)
{
    if (lbl_8322B4E8 != 0) {
        return 1;
    }
    if (fn_82BFA778() == 0) {
        lbl_8322B4E8 = 1;
        return 1;
    }
    return 0;
}
