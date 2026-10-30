extern int lbl_831CE908[];

int fn_822A1968(char *p)
{
    char *a;
    char *b;
    if (lbl_831CE908[3] != 0 && *(int *)(*(char **)(p + 0x14) + 0x14) != 0)
        return 1;
    a = *(char **)(p + 0x34);
    if (*(int *)(a + 0x120c) == 1 || *(int *)(a + 0x1220) != 0)
        return 1;
    b = *(char **)(p + 0x38);
    if (*(int *)(b + 0x120c) == 1 || *(int *)(b + 0x1220) != 0)
        return 1;
    return 0;
}
