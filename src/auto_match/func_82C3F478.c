void fn_82C3F478(int param_1, int *param_2, int param_3)
{
    short *p;
    short i;

    p = (short *)param_2[10];
    if (*(int *)(param_1 + 0x78) == 1) {
        p = p + param_2[8];
    }
    if (param_3 == 1) {
        *(short *)(param_2 + 7) = 2;
        *(short *)((char *)param_2 + 0x1e) = 0x10;
        for (i = 0; i < *param_2; i++) {
            p[i] = p[i] << 1;
        }
    } else {
        *(short *)(param_2 + 7) = 1;
        *(short *)((char *)param_2 + 0x1e) = 8;
        for (i = 0; i < *param_2; i++) {
            p[i] = p[i] >> 1;
        }
    }
}
