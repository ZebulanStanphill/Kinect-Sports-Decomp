extern int fn_8306D610();
extern int fn_8306DB60();
extern int fn_8306E0E0();


unsigned __int64 fn_8306C878(int param_1,__int64 *param_2,int param_3)

{
  __int64 lVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 *plVar5;
  
  uVar4 = 0;
  if (param_2 == (__int64 *)0x0) {
    uVar4 = 0xffffffff80070057;
  }
  else if (*(int *)(param_2 + 1) != *(int *)(param_1 + 0x1b38)) {
    *(int *)(param_1 + 0x1b38) = *(int *)(param_2 + 1);
    lVar1 = *param_2;
    RtlEnterCriticalSection(param_1 + 0x1b1c);
    plVar5 = (__int64 *)0x0;
    iVar3 = 0;
    piVar2 = (int *)((int)param_2 + 0x34);
    do {
      if (*piVar2 == param_3) {
        plVar5 = param_2 + iVar3 * 0x38 + 6;
        *(unsigned int *)(param_1 + 0x1b40) = *(unsigned int *)(param_2 + iVar3 * 0x38 + 6);
        *(unsigned int *)(param_1 + 0x1b44) = *(unsigned int *)((int)param_2 + iVar3 * 0x1c0 + 0x34);
        *(unsigned int *)(param_1 + 0x1b48) = *(unsigned int *)(param_2 + iVar3 * 0x38 + 7);
        *(unsigned int *)(param_1 + 0x1b4c) = *(unsigned int *)((int)param_2 + iVar3 * 0x1c0 + 0x3c);
        *(unsigned int *)(param_1 + 0x1b50) = *(unsigned int *)(param_2 + iVar3 * 0x38 + 0x3c);
        break;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x70;
    } while (iVar3 < 6);
    if (param_3 != *(int *)(param_1 + 0x1b3c)) {
      fn_8306D610(param_1 + 0x78);
      fn_8306E0E0(*(unsigned int *)(param_1 + 0x1b18));
    }
    *(int *)(param_1 + 0x1b3c) = param_3;
    fn_8306DB60(param_1 + 0x78,plVar5,lVar1 * 100000,param_1 + 4,param_1 + 0x34);
    RtlLeaveCriticalSection(param_1 + 0x1b1c);
  }
  return uVar4;
}

