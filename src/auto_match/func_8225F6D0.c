extern int lbl_83265A58[];
extern unsigned char lbl_832760AA;
extern unsigned char lbl_832760AB;
extern int lbl_832760B8;
extern int lbl_832760BC;

void fn_8225F6D0(void)
{
    if (lbl_832760AB != 0) {
        return;
    }
    if (lbl_832760AA != 0) {
        lbl_832760B8 = lbl_83265A58[0x1a8] - lbl_832760B8;
        lbl_832760BC = lbl_83265A58[0x1a9] - lbl_832760BC;
        lbl_832760AB = 1;
        return;
    }
    lbl_832760B8 = 0;
    lbl_832760BC = 0;
}
