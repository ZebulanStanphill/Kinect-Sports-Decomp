extern float lbl_821CA45C[];

int fn_822BCA40(char *param_1)
{
    int *obj;
    int state;

    if (*(int *)(param_1 + 0x1a0) != 0 || *(int *)(param_1 + 0x1e0) != 0) {
        obj = *(int **)(param_1 + 0x238);
        if (obj != 0) {
            state = (*(int *)(*obj + 0xc4c) != 0) ? 3 : 0;
            if (state < 4 || *(float *)(param_1 + 0x3e4) > lbl_821CA45C[1]) {
                return 1;
            }
        }
    }
    return 0;
}
