extern int lbl_831BCD00;
extern int lbl_831BCD10[];

void fn_83139CD8(void)
{
    lbl_831BCD10[0x50 / 4] = lbl_831BCD00;
    lbl_831BCD10[0x68 / 4] = lbl_831BCD00;
}
