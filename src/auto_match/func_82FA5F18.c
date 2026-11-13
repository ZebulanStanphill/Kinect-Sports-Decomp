extern int fn_82FA5CA0();


int fn_82FA5F18(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = (*(unsigned int *)(param_2 + 4) & 0xfffffffc) + param_2;
  iVar1 = iVar2 + 4;
  if ((*(unsigned int *)(iVar2 + 8) & 1) != 0) {
    fn_82FA5CA0();
    uVar3 = (*(unsigned int *)(iVar1 + 4) & 0xfffffffc) + *(int *)(param_2 + 4) + 4;
    *(unsigned int *)(param_2 + 4) = uVar3;
    *(int *)((uVar3 & 0xfffffffc) + param_2 + 4) = param_2;
  }
  return param_2;
}

