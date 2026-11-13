extern int fn_8251E530();
extern int fn_82CE4118();
extern int fn_82D88AE0();


void fn_825A80A8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x4c);
    for (piVar3 = *(int **)(iVar2 + 0x268); piVar3 < *(int **)(iVar2 + 0x26c); piVar3 = piVar3 + 1)
    {
      if (*piVar3 == iVar1) {
        fn_8251E530(iVar2 + 0x268,piVar3);
        goto LAB_825a8110;
      }
    }
    if (*(int *)(iVar1 + 8) != 0) {
      fn_82D88AE0(*(unsigned int *)(iVar2 + 0x1f8));
    }
LAB_825a8110:
    fn_82CE4118(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  return;
}

