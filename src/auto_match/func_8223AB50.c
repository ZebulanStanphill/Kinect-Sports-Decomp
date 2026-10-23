extern int lbl_82197058;
extern int lbl_82197144;
extern int lbl_821971A0;
void fn_82897D88(int *);
void fn_8288B338(int *);

void fn_8223AB50(int *param_1)
{
    int *b = param_1 + 0x23;
    *param_1 = (int)&lbl_82197058;
    *b = (int)&lbl_821971A0;
    fn_82897D88(b);
    param_1[0x0D] = (int)&lbl_82197144;
    fn_82897D88(param_1 + 0x0D);
    fn_8288B338(param_1);
}
