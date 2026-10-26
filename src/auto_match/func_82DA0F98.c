void fn_82DA0F98(int param_1, unsigned int *param_2)
{
  int iVar1;
  int iVar2;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = param_1 + 0xc;
  *param_2 = 0;
  param_2[5] = 0xc;
  param_2[1] = 0x10;
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = iVar1 * 6;
  param_2[2] = iVar2;
  param_2[1] = (iVar1 * 0x534 + 0x53U & 0xfffffff0) + 0x10;
  param_2[3] = iVar2;
}
