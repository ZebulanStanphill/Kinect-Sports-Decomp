extern unsigned int *auStack_34;
extern int fn_82A26920();
extern int fn_82A26C08();
extern int fn_82A27010();
extern int RtlpInitializeHeapSegment();
extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


unsigned __int64 fn_82A279F0(int param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uStack_40;
  int iStack_3c;
  unsigned int uStack_38;
  unsigned int auStack_34;
  
  uVar6 = param_2 + 0xffffU >> 0x10;
  uVar4 = 0x40;
  uStack_38 = uVar6 << 0x10;
  uVar5 = 0;
  do {
    iStack_3c = *(int *)((uVar5 + 0x18) * 4 + param_1);
    if (iStack_3c == 0) {
      if (uVar4 == 0x40) {
        uVar4 = uVar5;
      }
    }
    else if (((uVar6 <= *(unsigned int *)(iStack_3c + 0x30)) && (uStack_38 <= *(unsigned int *)(iStack_3c + 0x1c)))
            && (lVar1 = fn_82A26920(param_1,iStack_3c,&uStack_38,0), lVar1 != 0)) {
      uStack_38 = uStack_38 >> 4;
      uVar2 = fn_82A26C08(param_1,lVar1,&uStack_38,0);
      fn_82A27010(param_1,uVar2,uStack_38);
      return uVar2;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x40);
  if ((uVar4 != 0x40) && ((*(unsigned int *)(param_1 + 0x14) & 2) != 0)) {
    uVar6 = param_2 + 0x10000;
    iStack_3c = 0;
    uStack_40 = uVar6;
    if (uVar6 <= *(unsigned int *)(param_1 + 0x20)) {
      uStack_40 = *(unsigned int *)(param_1 + 0x20);
    }
    iVar3 = NtAllocateVirtualMemory
                      (&iStack_3c,&uStack_40,0x60002000,4,*(unsigned int *)(param_1 + 0x590));
    if (iVar3 < 0) {
      do {
        if (uStack_40 == uVar6) break;
        uStack_40 = uStack_40 >> 1;
        if (uStack_40 < uVar6) {
          uStack_40 = uVar6;
        }
        iVar3 = NtAllocateVirtualMemory
                          (&iStack_3c,&uStack_40,0x60002000,4,*(unsigned int *)(param_1 + 0x590));
      } while (iVar3 < 0);
      if (iVar3 < 0) {
        return 0;
      }
    }
    *(unsigned int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uStack_40;
    auStack_34 = uVar6;
    if (uVar6 <= *(unsigned int *)(param_1 + 0x24)) {
      auStack_34 = *(unsigned int *)(param_1 + 0x24);
    }
    lVar1 = NtAllocateVirtualMemory
                      (&iStack_3c,&auStack_34,0x60001000,4,*(unsigned int *)(param_1 + 0x590));
    if (-1 < lVar1) {
      iVar3 = RtlpInitializeHeapSegment(param_1,iStack_3c,uVar4,0,iStack_3c,auStack_34 + iStack_3c,
                            uStack_40 + iStack_3c);
      if (iVar3 == 0) {
        lVar1 = -0x3fffffe9;
      }
      if (-1 < (int)lVar1) {
        return (unsigned __int64)*(unsigned int *)(iStack_3c + 0x28);
      }
    }
    NtFreeVirtualMemory(&iStack_3c,&uStack_40,0x8000,*(unsigned int *)(param_1 + 0x590));
  }
  return 0;
}

