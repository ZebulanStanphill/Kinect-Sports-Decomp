extern int fn_828DF6E0();
extern int fn_828E0268();

unsigned int fn_828DF8D0(int param_1)
{
    int *piVar1;
    int a;
    int b;

    fn_828E0268(&a);
    piVar1 = (int *)fn_828DF6E0(&b, param_1, &a);
    return *(unsigned int *)(*piVar1 + 0x10);
}
