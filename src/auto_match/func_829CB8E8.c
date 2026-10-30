extern int lbl_83215000[];
extern int fn_829C5A18(void);
extern void fn_829CB870(void);

void fn_829CB8E8(unsigned int *flags)
{
    int hi = lbl_83215000[0x27b0 / 4] & (int)0x80000000;
    if ((*flags & 0x20) == 0x20 || fn_829C5A18() != 0 || hi != 0) {
        fn_829CB870();
    }
}
