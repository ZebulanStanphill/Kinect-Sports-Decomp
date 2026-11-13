extern int fn_82A21458();
extern int fn_82A21DC0();


int fn_82A23408(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  
  RtlEnterCriticalSection(param_1);
  uVar4 = 0;
  if (*(unsigned int *)(param_1 + 0x20) > 0) {
    iVar5 = 0;
    do {
      iVar2 = 0;
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x1c));
      while (iVar2 = fn_82A21DC0(iVar1,iVar2,param_3,param_4,param_5), iVar2 != -1) {
        iVar3 = (unsigned int)*(unsigned char *)((iVar2 - (unsigned int)*(unsigned short *)(iVar1 + 0xc)) * 4 +
                                (unsigned int)*(unsigned short *)(iVar1 + 4) + iVar1) *
                (*(unsigned int *)(iVar1 + 4) & 0xffff) + iVar1;
        iVar6 = iVar3 + 0x14;
        if (((*(unsigned int *)(iVar6 + 0x1c) & 0x10) != 0) || (*(unsigned char *)(iVar6 + 0x19) == param_2)) {
          fn_82A21458(param_1,iVar6); RtlLeaveCriticalSection(param_1); return iVar6;
        }
        iVar2 = iVar2 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(unsigned int *)(param_1 + 0x20));
  }
  iVar6 = 0;

  RtlLeaveCriticalSection(param_1);
  return iVar6;
}

