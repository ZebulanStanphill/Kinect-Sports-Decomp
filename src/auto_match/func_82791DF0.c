typedef unsigned char bool;
#define true 1
#define false 0


void fn_82791DF0(int param_1)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  piVar4 = (int *)(param_1 + 0x14);
  if (((int)uVar1 < 0) || (bVar2 = false, *(unsigned int *)(*piVar4 + 4) <= uVar1)) {
    bVar2 = true;
  }
  if (bVar2) {
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 4);
    return;
  }
  puVar3 = (unsigned int *)(uVar1 * 0xc + *(int *)*piVar4);
  uVar1 = *puVar3;
  if (*(unsigned int *)(param_1 + 0x20) < uVar1) {
    *(unsigned int *)(param_1 + 0x20) = uVar1;
    return;
  }
  *(unsigned int *)(param_1 + 0x20) = puVar3[1] + *(unsigned int *)(param_1 + 0x20);
  if (*(int *)(*piVar4 + 4) <= *(int *)(param_1 + 0x18)) {
    return;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

