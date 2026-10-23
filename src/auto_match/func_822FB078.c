extern void fn_82230110(void *p, char *s);
extern void fn_8223B688(void *p, int v);
extern void fn_822C70F0();
extern char lbl_821AE80C[];
extern char lbl_82196582[];

int *fn_822FB078(int *param_1, int param_2, int param_3, int param_4, int param_5)
{
    fn_822C70F0();
    param_1[0x15] = param_4;
    param_1[0x16] = param_4 + 0x24;
    *param_1 = (int)lbl_821AE80C;
    fn_8223B688(param_1 + 0x17, param_5);
    fn_82230110(param_1 + 0x1e, lbl_82196582);
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x14] = 1;
    return param_1;
}
