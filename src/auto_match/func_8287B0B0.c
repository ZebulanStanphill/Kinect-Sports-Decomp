typedef int (*code)();
extern int fn_82834EA0();
extern int fn_82868758();
extern int fn_82874AE0();
extern int fn_8287AE08();
extern unsigned int lbl_821CA1A0;

int fn_8287B0B0(int *param_1)
{
    int a[2];
    int b;
    int *p;

    (*(code *)(param_1[1] + 0x40))(param_1 + 1);
    fn_82874AE0(a, fn_82868758(), param_1 + 0x24);
    p = param_1 + 0x2a;
    fn_82834EA0(&b, p, param_1[0x2a], param_1[0x2b]);
    (*(code *)(*param_1 + 0x8c))(param_1, a, p);
    fn_8287AE08(param_1, p, &lbl_821CA1A0);
    return 0x20130000;
}
