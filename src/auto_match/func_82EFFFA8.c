extern int lbl_8325F874;
extern int lbl_8325F884;
extern int lbl_8325F88C;

void fn_82EFFFA8(char *p)
{
    int state = *(int *)(p + 0x350);
    unsigned int n;

    if (state != 3 && state != 4) {
        n = *(unsigned int *)(p + 0x358);
        if (n < 1 || n > 3) {
            lbl_8325F88C = lbl_8325F884;
            *(int *)(p + 0x1f30) = 0;
            return;
        }
    }
    lbl_8325F88C = lbl_8325F874;
    *(int *)(p + 0x1f30) = 1;
}
