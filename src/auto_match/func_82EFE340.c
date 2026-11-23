extern int lbl_8324EBB8;
extern unsigned char *lbl_8324E3B0;
extern unsigned char lbl_8324E3B8[0x800];
extern short lbl_8324DBB0[0x400];
extern double lbl_8324D9B0[64];

void fn_82EFE340(void)
{
    int i;
    int row;
    int col;
    double scale[8];

    if (++lbl_8324EBB8 != 1) {
        return;
    }
    lbl_8324E3B0 = lbl_8324E3B8 + 0x400;
    for (i = -0x400; i < 0x400; i++) {
        lbl_8324E3B0[i] = (unsigned char)(i < 0 ? 0 : (i > 255 ? 255 : i));
    }
    for (i = 0; i < 0x400; i++) {
        lbl_8324DBB0[i] = (short)(i > 127 ? 127 : i);
    }
    scale[0] = 0.3535533905933;
    scale[1] = 0.2548977895521;
    scale[2] = 0.2705980500731;
    scale[3] = 0.3006724434675;
    scale[4] = 0.3535533905933;
    scale[5] = 0.4499881115682;
    scale[6] = 0.6532814824382;
    scale[7] = 1.281457723871;
    for (row = 0; row < 8; row++) {
        for (col = 0; col < 8; col++) {
            lbl_8324D9B0[row * 8 + col] = scale[row] * scale[col];
        }
    }
}
