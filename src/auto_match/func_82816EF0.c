extern int fn_8281FEB0(int p);

void fn_82816EF0(int param_1, unsigned int param_2, int *param_3)
{
    unsigned int n;
    unsigned int i;
    char *e;

    if (*(unsigned int *)(param_1 + 0x74) != 0 && !(param_2 < *(unsigned int *)(param_1 + 0x74))) {
        param_2++;
    }
    if (fn_8281FEB0(param_1) != 0) {
        n = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x28);
        for (i = 0; i < n; i++) {
            e = (char *)(i * 14 + *(int *)(param_1 + 0x44));
            if (*(unsigned int *)e == param_2 && *(char *)(e + 0xc) == *(char *)(param_1 + 0x78)) {
                *param_3 = (int)e;
                return;
            }
        }
    }
    *param_3 = 0;
}
