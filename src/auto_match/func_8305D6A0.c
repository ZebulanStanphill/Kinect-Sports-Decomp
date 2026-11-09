extern int fn_8305F7A0(int *, int);
int fn_8305D6A0(int p, int i)
{
    return fn_8305F7A0(*(int **)(p+0x28), (*(int **)(p+0x2c))[i]);
}
