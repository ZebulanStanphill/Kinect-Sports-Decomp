typedef unsigned char bool;
#define true 1
#define false 0


void fn_827920C8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  int *piVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 == 0) || (bVar3 = false, *(unsigned int *)(iVar1 + 4) <= *(unsigned int *)(param_1 + 0x1c))) {
    bVar3 = true;
  }
  if (bVar3) {
    *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(iVar1 + 4);
    return;
  }
  piVar5 = (int *)(param_1 + 0x10);
  uVar4 = *(int *)(param_1 + 0x1c) + 1;
  *(unsigned int *)(param_1 + 0x1c) = uVar4;
  uVar2 = *(unsigned int *)(param_1 + 0x14);
  if (((int)uVar2 < 0) || (bVar3 = false, *(unsigned int *)(*piVar5 + 4) <= uVar2)) {
    bVar3 = true;
  }
  if (bVar3) {
    return;
  }
  piVar6 = (int *)(uVar2 * 0xc + *(int *)*piVar5);
  if (uVar4 < (unsigned int)(piVar6[1] + *piVar6)) {
    return;
  }
  if (*(int *)(*piVar5 + 4) <= *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

