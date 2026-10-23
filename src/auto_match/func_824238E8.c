extern int fn_823598B0(int p, int a);
extern int fn_82359928(int p, int a);
extern float lbl_8218E8E8;

void fn_824238E8(int param_1)
{
    int iVar1;

    iVar1 = *(int *)(param_1 + 8);
    fn_823598B0(iVar1, 0);
    fn_82359928(iVar1, 0);
    *(int *)(iVar1 + 0xf0) = 0;
    *(float *)(param_1 + 0x5c) = lbl_8218E8E8;
}
