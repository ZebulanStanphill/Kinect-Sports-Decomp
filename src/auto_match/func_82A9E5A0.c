extern int fn_82A9A4B8();
extern int fn_82A9A548();
extern int fn_82A9CFC8();


int fn_82A9E5A0(int param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int uVar4;
  
  piVar3 = (int *)(param_1 + 0x90);
  iVar1 = *(int *)(param_1 + 0x90);
  if (-1 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (*(unsigned int *)(iVar1 + 4) <= param_2) {
      uVar4 = param_2 + 1;
      if (*(unsigned int *)(iVar1 + 8) < uVar4) {
        fn_82A9A548(iVar1,uVar4,piVar3);
      }
      *(unsigned int *)(iVar1 + 4) = uVar4;
      if (*piVar3 < 0) {
        return *piVar3;
      }
    }
    iVar1 = param_2 * 0x18 + **(int **)(param_1 + 0x78);
    *(unsigned int *)(param_2 * 0x18 + **(int **)(param_1 + 0x78)) = param_2;
    if (*(unsigned int *)(iVar1 + 0x10) <= param_3) {
      uVar4 = param_3 + 1;
      if (*(unsigned int *)(iVar1 + 0x14) < uVar4) {
        fn_82A9A4B8(iVar1 + 0xc,uVar4,piVar3);
      }
      *(unsigned int *)(iVar1 + 0x10) = uVar4;
      if (*piVar3 < 0) {
        return *piVar3;
      }
    }
    puVar2 = (unsigned int *)(param_3 * 0x1c + *(int *)(iVar1 + 0xc));
    *puVar2 = param_3;
    if ((unsigned __int64)puVar2[5] <= (param_4 & 0xffffffff)) {
      if ((unsigned __int64)puVar2[6] < (param_4 & 0xffffffff)) {
        fn_82A9CFC8(puVar2 + 4,param_4,piVar3);
      }
      puVar2[5] = (unsigned int)param_4;
    }
    iVar1 = *piVar3;
  }
  return iVar1;
}

