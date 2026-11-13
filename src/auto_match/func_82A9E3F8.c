extern int fn_82A9A4B8();
extern int fn_82A9A548();


int fn_82A9E3F8(int param_1,unsigned int param_2,unsigned __int64 param_3)

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
    puVar2 = (unsigned int *)(param_2 * 0x18 + **(int **)(param_1 + 0x78));
    *puVar2 = param_2;
    if ((unsigned __int64)puVar2[4] <= (param_3 & 0xffffffff)) {
      if ((unsigned __int64)puVar2[5] < (param_3 & 0xffffffff)) {
        fn_82A9A4B8(puVar2 + 3,param_3,piVar3);
      }
      puVar2[4] = (unsigned int)param_3;
    }
    iVar1 = *piVar3;
  }
  return iVar1;
}

