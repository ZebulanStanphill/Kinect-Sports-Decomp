void fn_82C5E098(char *p)
{
    int area = *(int *)(p + 0xbc) * *(int *)(p + 0xb4);
    if (*(int *)(p + 0xe84) <= 300 && area <= 0x12c00) {
        if (area > 0xa500) {
            *(int *)(p + 0x3cec) = 4;
        } else {
            *(int *)(p + 0x3cec) = 1;
        }
        return;
    }
    *(int *)(p + 0x3ce0) = 0;
}
