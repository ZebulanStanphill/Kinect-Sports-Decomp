extern int fn_82A1F2F8(void *p, int a, int c);
extern int fn_82E23978(void *p, int a, int c, int b, int d);

int fn_82E22F48(char *p, int a, int b, int c, int d)
{
    if (*(int *)(p + 0x178) == 0 || *(int *)(p + 0x17c) != 0) {
        return 0x15;
    }
    if (c == -1) {
        c = fn_82A1F2F8(p, a, c) - *(int *)(p + 0x164) - *(int *)(p + 0x154);
    }
    return fn_82E23978(p + 0x30, a, c, b, d);
}
