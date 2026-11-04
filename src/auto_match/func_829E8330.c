extern unsigned int lbl_82057BCC[];

int fn_829E8330(int unused, unsigned int a, unsigned int b)
{
    unsigned int *p = &lbl_82057BCC[7];
    int r = 7;
    int i = 7;

    while (*p >= a || *p >= b) {
        p = p - 1;
        r = i;
        i = i - 1;
        if ((int)p < (int)lbl_82057BCC) {
            return 0;
        }
    }
    return r;
}
