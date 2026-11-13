extern int fn_82B47660();


__int64 fn_82B4C110(int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  iVar1 = *param_1;
  uVar2 = *(unsigned int *)(iVar1 + 4);
  uVar3 = *(unsigned int *)(iVar1 + 8);
  fn_82B47660(iVar1,(int)param_1[2] * (int)param_2 + param_3);
  uVar4 = *(unsigned int *)(iVar1 + 8);
  uVar5 = *(unsigned int *)(iVar1 + 4);
  *(unsigned int *)(iVar1 + 4) = uVar2;
  *(unsigned int *)(iVar1 + 8) = uVar3;
  return ((unsigned __int64)uVar4 + 2 & 0x1fffffff) * 8 + (unsigned __int64)uVar5;
}

