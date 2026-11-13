extern int fn_82A9CF38();


int fn_82A9E1B8(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if (iVar2 >= 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (*(unsigned int *)(iVar1 + 4) <= param_2) {
      if (param_2 > *(unsigned int *)(iVar1 + 8)) {
        fn_82A9CF38(iVar1,param_2,(int *)(param_1 + 0x90));
      }
      *(unsigned int *)(iVar1 + 4) = param_2;
      iVar2 = *(int *)(param_1 + 0x90);
    }
  }
  return iVar2;
}

