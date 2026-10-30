void fn_82D9AF88(char *o, char flag, int *out)
{
    int n;

    if (flag) {
        n = *(int *)(o + 0x1c) * 3;
        out[1] = n;
        out[0] = n * 8;
        return;
    }
    out[0] = 0;
    out[1] = 0;
}
