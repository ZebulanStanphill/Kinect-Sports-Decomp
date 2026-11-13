extern int fn_82E50330();
extern int fn_82F68CC0();


unsigned __int64 fn_82E47580(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int iVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned int uVar6;
  
  RtlEnterCriticalSection(param_1 + 4);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar3 = 0;
    do {
      pbVar4 = (unsigned char *)(iVar3 + *(int *)(param_1 + 0x20));
      pbVar5 = param_2;
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != param_2 + 0x10);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        fn_82E50330(uVar6 * 0x20 + *(int *)(param_1 + 0x20) + 0x10);
        iVar3 = *(int *)(param_1 + 0x20) + uVar6 * 0x20;
        fn_82F68CC0(iVar3,iVar3 + 0x20,(*(int *)(param_1 + 0x28) - uVar6) - 1 & 0x7ffffff);
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        break;
      }
      uVar6 = uVar6 + 1;
      iVar3 = iVar3 + 0x20;
    } while (uVar6 < *(unsigned int *)(param_1 + 0x28));
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return 0;
}

