extern int fn_82C026A8();
extern int fn_82C12850();
extern int fn_82F68CC0();


unsigned __int64 fn_82C12A58(int param_1,unsigned int *param_2)

{
  __int64 *plVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  int aiStack_40 [16];
  
  plVar1 = *(__int64 **)(param_1 + 0x14);
  uVar3 = 0;
  aiStack_40[0] = 0;
  piVar5 = (int *)0x0;
  if ((*(int *)((int)plVar1 + 0x44) != 0) || (uVar3 = fn_82C12850(plVar1), -1 < (int)uVar3)) {
    piVar5 = *(int **)((int)plVar1 + 0x44);
    *(unsigned int *)((int)plVar1 + 0x44) = *(unsigned int *)(piVar5[5] + 4);
  }
  if (-1 < (int)uVar3) {
    aiStack_40[0] = *piVar5;
    uVar4 = fn_82C026A8(*(unsigned int *)(plVar1 + 7),*plVar1,*(unsigned int *)((int)plVar1 + 0x34),
                            aiStack_40,*(unsigned int *)((int)plVar1 + 0x3c));
    if ((uVar4 & 0xffffffff) == 0x80500000) {
      uVar3 = 0xffffffff80500000;
    }
    else {
      if (((uVar4 & 0xffffffff) != 0) && (aiStack_40[0] != 0)) {
        if (aiStack_40[0] != *piVar5) {
          fn_82F68CC0(*piVar5,aiStack_40[0],uVar4);
        }
        piVar5[1] = (int)uVar4;
        *(__int64 *)(piVar5 + 2) = *plVar1;
        *param_2 = piVar5;
        *plVar1 = (uVar4 & 0xffffffff) + *plVar1;
        return uVar3;
      }
      uVar3 = 0xffffffff80500001;
    }
  }
  if (piVar5 != (int *)0x0) {
    iVar2 = *(int *)(param_1 + 0x14);
    *(unsigned int *)(piVar5[5] + 4) = *(unsigned int *)(iVar2 + 0x44);
    *(int **)(iVar2 + 0x44) = piVar5;
  }
  return uVar3;
}

