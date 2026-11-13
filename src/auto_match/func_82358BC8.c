extern int fn_82366AE8();
extern int fn_825604A0();


void fn_82358BC8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_2 == 0x52) {
    for (piVar2 = *(int **)(param_1 + 0x30); piVar2 != *(int **)(param_1 + 0x34);
        piVar2 = piVar2 + 2) {
      iVar1 = *piVar2;
      *(int *)(iVar1 + 0x230) = *(int *)(iVar1 + 0x22c);
      if (*(int *)(iVar1 + 0x22c) != 0) {
        fn_825604A0(iVar1 + 0x20);
        *(unsigned int *)(iVar1 + 0x22c) = 0;
      }
    }
  }
  else if (*param_2 == 0x53) {
    for (piVar2 = *(int **)(param_1 + 0x30); piVar2 != *(int **)(param_1 + 0x34);
        piVar2 = piVar2 + 2) {
      fn_82366AE8(*piVar2,*(unsigned int *)(*piVar2 + 0x230));
    }
  }
  return;
}

