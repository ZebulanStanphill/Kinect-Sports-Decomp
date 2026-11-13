#define true 1
extern int fn_8265CA20();
extern int fn_82E1D7A0();


void fn_82E1D900(int param_1,int param_2)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = 0;
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == 0) {
      return;
    }
    if (iVar1 == param_2) break;
    iVar2 = *(int *)(iVar1 + 8);
    iVar3 = iVar1;
  }
  if (iVar3 == 0) {
    *(unsigned int *)(param_1 + 4) = *(unsigned int *)(iVar1 + 8);
  }
  else {
    *(unsigned int *)(iVar3 + 8) = *(unsigned int *)(iVar1 + 8);
  }
  fn_82E1D7A0(iVar1);
  fn_8265CA20(iVar1);
  return;
}

