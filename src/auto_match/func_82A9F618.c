extern unsigned int *auStack_70;
extern int fn_82A9A4B8();
extern int fn_82A9E7D8();


void fn_82A9F618(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned __int64 param_5,unsigned int param_6
                  ,unsigned int param_7,unsigned int param_8)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int auStack_70;
  
  piVar4 = (int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar1 = *(int *)(param_1 + 0x70);
    if (*(unsigned int *)(iVar1 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (*(unsigned int *)(iVar1 + 8) < uVar3) {
        fn_82A9A4B8(iVar1,uVar3,piVar4);
      }
      *(unsigned int *)(iVar1 + 4) = uVar3;
      if (*piVar4 < 0) {
        return;
      }
    }
    auStack_70 = 0xffffffff;
    if ((param_5 & 0xffffffff) != 0) {
      iVar1 = fn_82A9E7D8(param_1,param_5,&auStack_70);
      *piVar4 = iVar1;
      if (iVar1 < 0) {
        return;
      }
    }
    puVar2 = (unsigned int *)(param_2 * 0x1c + **(int **)(param_1 + 0x70));
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    puVar2[3] = auStack_70;
    puVar2[4] = param_6;
    puVar2[5] = param_7;
    puVar2[6] = param_8;
  }
  return;
}

