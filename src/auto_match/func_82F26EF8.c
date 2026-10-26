extern int lbl_831B99C8[];

void fn_82F26EF8(int param_1, int *param_2, int *param_3)
{
    int v;

    *param_2 = (lbl_831B99C8[*param_2 & 3] + *param_2) >> 1;
    *param_3 = (lbl_831B99C8[*param_3 & 3] + *param_3) >> 1;
    if (*(int *)(param_1 + 0x314) == 0) {
        return;
    }
    v = *param_2;
    if (v & 1) {
        if (v > 0) {
            v = v - 1;
        } else {
            v = v + 1;
        }
        *param_2 = v;
    }
    v = *param_3;
    if (v & 1) {
        if (v > 0) {
            *param_3 = v - 1;
        } else {
            *param_3 = v + 1;
        }
    }
}
