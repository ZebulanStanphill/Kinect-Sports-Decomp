extern unsigned char lbl_83223458;
extern unsigned lbl_83223460[];
extern unsigned lbl_832234A0;
extern void fn_8262FEC8(unsigned);
int fn_82A828B8(void)
{
    int i;
    if (lbl_83223458 == 0)
        return 0x8000ffff;
    for (i = 13; i >= 1; i -= 4) {
        if (lbl_83223460[i - 1] != 0) { fn_8262FEC8(lbl_83223460[i - 1]); lbl_83223460[i - 1] = 0; }
        if (lbl_83223460[i] != 0) { fn_8262FEC8(lbl_83223460[i]); lbl_83223460[i] = 0; }
        if (lbl_83223460[i + 1] != 0) { fn_8262FEC8(lbl_83223460[i + 1]); lbl_83223460[i + 1] = 0; }
        if (lbl_83223460[i + 2] != 0) { fn_8262FEC8(lbl_83223460[i + 2]); lbl_83223460[i + 2] = 0; }
    }
    if (lbl_832234A0 != 0) { fn_8262FEC8(lbl_832234A0); lbl_832234A0 = 0; }
    lbl_83223458 = 0;
    return 0;
}
