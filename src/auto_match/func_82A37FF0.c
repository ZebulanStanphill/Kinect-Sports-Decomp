extern unsigned int *auStack_6c;
extern unsigned int uStack_70;


__int64 fn_82A37FF0(int param_1,int *param_2,unsigned int param_3,unsigned int param_4,
                      unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  unsigned int uStack_70;
  unsigned int auStack_6c [27];
  
  lVar3 = NtCreateEvent(&uStack_70,0,0,1);
  if (-1 < (int)lVar3) {
    lVar3 = NtCreateEvent(auStack_6c,0,1,0);
    if (lVar3 < 0) {
      NtClose(uStack_70);
    }
    else {
      RtlEnterCriticalSection(param_1 + 0x14);
      uVar1 = *(unsigned int *)(param_1 + 8);
      uVar5 = (unsigned __int64)uVar1;
      if (*(unsigned int *)(param_1 + 0xc) == uVar5) {
        NtClose(uStack_70);
        NtClose(auStack_6c[0]);
        iVar7 = 0;
        lVar3 = -0x3ffffee1;
      }
      else {
        iVar2 = *(int *)(param_1 + 4);
        iVar6 = 0;
        trapWord(6,uVar5,0);
        uVar4 = ((unsigned __int64)uStack_70 & 0x7ffffff) / 0xc;
        lVar3 = uVar4 - (__int64)(int)(uVar4 / uVar5) * (__int64)(int)uVar1;
        lVar8 = lVar3 * 0x58;
        iVar7 = *(int *)(iVar2 + (int)lVar8);
        while (iVar7 != -1) {
          iVar6 = iVar6 + 1;
          trapWord(6,uVar5,0);
          lVar3 = (lVar3 + 1U) -
                  (__int64)(int)((lVar3 + 1U & 0xffffffff) / (unsigned __int64)uVar1) *
                  (__int64)(int)uVar1;
          lVar8 = lVar3 * 0x58;
          iVar7 = *(int *)(iVar2 + (int)lVar8);
        }
        iVar7 = (int)lVar8;
        *(unsigned int *)(iVar2 + iVar7) = uStack_70;
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 4) = param_3;
        *(int *)(*(int *)(param_1 + 4) + iVar7 + 8) = iVar6;
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x10) = *(unsigned int *)(param_1 + 0x10);
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x14) = auStack_6c[0];
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x18) = param_4;
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x1c) = param_5;
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x20) = param_6;
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x24) = param_7;
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x28) = param_8;
        *(unsigned __int64 *)(*(int *)(param_1 + 4) + iVar7 + 0x30) = 0;
        *(unsigned int *)(*(int *)(param_1 + 4) + iVar7 + 0x54) = 1;
        RtlInitializeCriticalSection((unsigned __int64)*(unsigned int *)(param_1 + 4) + lVar8 + 0x38);
        lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = (int)lVar3;
        if (lVar3 == 0) {
          *(unsigned int *)(param_1 + 0x10) = 1;
        }
        lVar3 = 0;
        iVar7 = *(int *)(param_1 + 4) + iVar7;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      *param_2 = iVar7;
      RtlLeaveCriticalSection(param_1 + 0x14);
    }
  }
  return lVar3;
}

