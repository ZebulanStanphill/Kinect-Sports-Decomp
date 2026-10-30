extern void fn_824155A0(int h, int n);

void fn_82424DA0(char *self, char *o)
{
    int n = 10 - *(int *)(**(int **)(self + 4) + 0xc5c);
    fn_824155A0(*(int *)(o + 8), n);
    *(int *)(o + 0x30) = 0;
    *(int *)(o + 0x40) = n + 1;
}
