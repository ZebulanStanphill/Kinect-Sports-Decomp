extern int fn_8265CA20();
extern int fn_82E1D7A0();


void fn_82E1D838(int param_1)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    fn_82E1D7A0(iVar2);
    fn_8265CA20(iVar2);
    iVar2 = iVar1;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  return;
}

