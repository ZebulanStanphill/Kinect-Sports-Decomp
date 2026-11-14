extern int lbl_83283E3C[2];
extern int fn_825200A8(int *entry);

int fn_825087D8(void)
{
    int i;
    int result;

    for (i = 0; i < 2; i++) {
        result = fn_825200A8(&lbl_83283E3C[i]);
        if (result != 0)
            return 1;
    }
    return result;
}
