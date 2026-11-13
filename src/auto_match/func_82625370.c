extern int fn_82531C80();
extern int fn_8262D218();


void fn_82625370(int param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar2 = fn_82531C80(iVar1 + 0x40,iVar1 + 0x50);
  if (iVar2 != 0) {
    *(unsigned int *)(iVar1 + 0x154) = 0;
    fn_8262D218(*(unsigned int *)(param_1 + 0x50),*(unsigned int *)*param_2,param_2[3]);
  }
  return;
}

