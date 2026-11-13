extern int fn_82A9A4B8();
extern int fn_82A9A548();
extern int fn_82A9CFC8();


void fn_82A9E6B0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar3 = *(int *)(param_1 + 0x78);
    if (*(unsigned int *)(iVar3 + 4) <= param_2) {
      uVar2 = param_2 + 1;
      if (*(unsigned int *)(iVar3 + 8) < uVar2) {
        fn_82A9A548(iVar3,uVar2,piVar1);
      }
      *(unsigned int *)(iVar3 + 4) = uVar2;
      if (*piVar1 < 0) {
        return;
      }
    }
    iVar3 = param_2 * 0x18 + **(int **)(param_1 + 0x78);
    *(unsigned int *)(param_2 * 0x18 + **(int **)(param_1 + 0x78)) = param_2;
    if (*(unsigned int *)(iVar3 + 0x10) <= param_3) {
      uVar2 = param_3 + 1;
      if (*(unsigned int *)(iVar3 + 0x14) < uVar2) {
        fn_82A9A4B8(iVar3 + 0xc,uVar2,piVar1);
      }
      *(unsigned int *)(iVar3 + 0x10) = uVar2;
      if (*piVar1 < 0) {
        return;
      }
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    *(unsigned int *)(param_3 * 0x1c + iVar3) = param_3;
    iVar3 = param_3 * 0x1c + iVar3;
    if (*(unsigned int *)(iVar3 + 0x14) <= param_4) {
      uVar2 = param_4 + 1;
      if (*(unsigned int *)(iVar3 + 0x18) < uVar2) {
        fn_82A9CFC8(iVar3 + 0x10,uVar2,piVar1);
      }
      *(unsigned int *)(iVar3 + 0x14) = uVar2;
      if (*piVar1 < 0) {
        return;
      }
    }
    *(unsigned int *)(param_4 * 4 + *(int *)(iVar3 + 0x10)) = param_5;
  }
  return;
}

