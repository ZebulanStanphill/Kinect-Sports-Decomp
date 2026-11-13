extern int (*lbl_83276774[])(void);

int fn_825597C0(void)
{
    if (((unsigned char *)lbl_83276774)[-0x32] != 0) {
        return 1;
    }
    return lbl_83276774[8] ? lbl_83276774[8]() : 0;
}
