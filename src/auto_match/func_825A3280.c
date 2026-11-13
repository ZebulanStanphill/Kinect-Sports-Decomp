extern int fn_82CE5410();


unsigned __int64 fn_825A3280(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  param_4[7] = iVar1;
  piVar3 = (int *)fn_82CE5410();
  iVar2 = *piVar3;
  *piVar3 = (iVar1 + 0x7fU & 0xffffff80) + iVar2;
  param_4[6] = iVar2;
  param_4[4] = 3;
  param_4[5] = 4;
  param_4[2] = 1000;
  param_4[3] = 1000;
  param_4[1] = 1000;
  *param_4 = 3;
  return 0;
}

