extern int fn_82239108();


void fn_82239060(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_82239108(param_1,param_2,param_4);
  iVar1 = *(int *)(param_4 + 8);
  if (iVar1 != param_2) {
    uVar2 = *(unsigned int *)(iVar1 + 0xc);
    *(unsigned int *)(iVar1 + 0xc) = *(unsigned int *)(param_2 + 0xc);
    *(unsigned int *)(param_2 + 0xc) = uVar2;
  }
  return;
}

