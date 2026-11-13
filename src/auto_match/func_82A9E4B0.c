extern int fn_82A9A4B8();
extern int fn_82A9A548();


void fn_82A9E4B0(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,unsigned int param_6)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar4 = *(int *)(param_1 + 0x78);
    if (*(unsigned int *)(iVar4 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (*(unsigned int *)(iVar4 + 8) < uVar3) {
        fn_82A9A548(iVar4,uVar3,piVar2);
      }
      *(unsigned int *)(iVar4 + 4) = uVar3;
      if (*piVar2 < 0) {
        return;
      }
    }
    iVar4 = param_2 * 0x18 + **(int **)(param_1 + 0x78);
    *(unsigned int *)(param_2 * 0x18 + **(int **)(param_1 + 0x78)) = param_2;
    if (*(unsigned int *)(iVar4 + 0x10) <= param_3) {
      uVar3 = param_3 + 1;
      if (*(unsigned int *)(iVar4 + 0x14) < uVar3) {
        fn_82A9A4B8(iVar4 + 0xc,uVar3,piVar2);
      }
      *(unsigned int *)(iVar4 + 0x10) = uVar3;
      if (*piVar2 < 0) {
        return;
      }
    }
    puVar1 = (unsigned int *)(param_3 * 0x1c + *(int *)(iVar4 + 0xc));
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
  }
  return;
}

