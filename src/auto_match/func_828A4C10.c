extern int fn_828A4240();


void fn_828A4C10(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x240);
  fn_828A4240(piVar7,4);
  piVar3 = (int *)0x0;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*piVar7, puVar1 != (unsigned int *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar6 = *(unsigned int *)(param_1 + 0x24c) >> 2;
  if (*(unsigned int *)(iVar4 + 8) <= uVar6) {
    uVar6 = uVar6 - *(unsigned int *)(iVar4 + 8);
  }
  piVar3 = (int *)0x0;
  *(unsigned int *)(*(int *)(uVar6 * 4 + *(int *)(iVar4 + 4)) + (*(unsigned int *)(param_1 + 0x24c) & 3) * 4)
       = 0;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*piVar7, puVar1 != (unsigned int *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24c) + 1;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar5 = (uVar2 & 0xffffffff) >> 2;
  if (*(unsigned int *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(unsigned int *)(iVar4 + 8);
  }
  piVar3 = (int *)0x0;
  *(unsigned int *)
   (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) + (int)((uVar2 & 3) << 2)) = 1;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*piVar7, puVar1 != (unsigned int *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24c) + 2;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar5 = (uVar2 & 0xffffffff) >> 2;
  if (*(unsigned int *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(unsigned int *)(iVar4 + 8);
  }
  piVar3 = (int *)0x0;
  *(unsigned int *)
   (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) + (int)((uVar2 & 3) << 2)) = 2;
  if (((int *)*piVar7 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*piVar7, puVar1 != (unsigned int *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24c) + 3;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  uVar5 = (uVar2 & 0xffffffff) >> 2;
  if (*(unsigned int *)(iVar4 + 8) <= uVar5) {
    uVar5 = uVar5 - *(unsigned int *)(iVar4 + 8);
  }
  *(unsigned int *)
   (*(int *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(iVar4 + 4)) + (int)((uVar2 & 3) << 2)) = 3;
  return;
}

