extern int fn_8251F720(int, int);

void fn_8260F600(int param_1, int param_2, int param_3)
{
  int iVar1;
  int iVar2;

  iVar1 = *(int *)(param_1 + 0x60);
  iVar2 = fn_8251F720(param_3 + 0x10, 0);
  *(int *)(iVar1 + 0x360) = iVar2;
  *(float *)(iVar1 + 0x35c) = *(float *)(iVar2 + 0xc);
}
