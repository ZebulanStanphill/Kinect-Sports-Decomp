extern int fn_825A24C0();


void fn_82598C60(int param_1,int param_2)

{
  int iVar1;
  int iVar3;
  int *piVar4;
  __int64 lVar2;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x8cc);
  iVar3 = 0;
  if (*(int *)(param_1 + 0x8d0) != 0) {
    iVar3 = *(int *)(*(int *)((unsigned short *)*piVar5 + 4) - (unsigned int)*(unsigned short *)*piVar5);
  }
  iVar1 = *piVar5;
  for (piVar4 = *(int **)(iVar1 + 4); piVar4 < *(int **)(iVar1 + 8); piVar4 = piVar4 + 0xd) {
    if (*piVar4 == param_2) goto LAB_82598cd4;
  }
  piVar4 = (int *)0x0;
LAB_82598cd4:
  fn_825A24C0(iVar1,piVar4);
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8d0) - 1;
  *(int *)(param_1 + 0x8d0) = (int)lVar2;
  if ((lVar2 != 0) && ((unsigned int)LZCOUNT(iVar3 - param_2) >> 5 != 0)) {
    piVar5 = (int *)(*(int *)((unsigned short *)*piVar5 + 4) - (unsigned int)*(unsigned short *)*piVar5);
    iVar3 = *piVar5;
    piVar5[9] = 1;
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      (**(int (***)())(iVar3 + 0x180))(iVar3);
    }
    piVar5[10] = -1;
  }
  return;
}

