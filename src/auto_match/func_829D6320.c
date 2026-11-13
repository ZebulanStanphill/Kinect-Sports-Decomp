extern int fn_82A2AFE8();
extern unsigned int lbl_832179FC;


void fn_829D6320(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x100) != 0) {
    iVar3 = lbl_832179FC + 0x24980;
    RtlEnterCriticalSection(iVar3);
    piVar2 = (int *)(*(int *)(param_1 + 0x18) * 0x18 + lbl_832179FC);
    if ((*piVar2 != 2) && (*piVar2 != 1)) {
      piVar2[5] = 0;
    }
    iVar1 = piVar2[5];
    RtlLeaveCriticalSection(iVar3);
    if (iVar1 != 0) {
      fn_82A2AFE8(*(unsigned int *)(param_1 + 0x18),*(unsigned __int64 *)(param_1 + 0x28));
      iVar3 = lbl_832179FC + 0x24980;
      RtlEnterCriticalSection(iVar3);
      *(unsigned int *)(*(int *)(param_1 + 0x18) * 0x18 + lbl_832179FC + 0x14) = 0;
      *(unsigned int *)(param_1 + 0x100) = 0;
      RtlLeaveCriticalSection(iVar3);
    }
  }
  return;
}

