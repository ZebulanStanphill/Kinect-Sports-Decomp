extern unsigned int *auStack_30;
extern int fn_829D3FE8();
extern int fn_829D4038();
extern unsigned int lbl_832179FC;


unsigned __int64 fn_829D5E60(unsigned __int64 param_1)

{
  char cVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int auStack_30 [12];
  
  iVar6 = lbl_832179FC + 0x24980;
  RtlEnterCriticalSection(iVar6);
  uVar3 = (unsigned __int64)lbl_832179FC;
  auStack_30[0] = 0;
  cVar2 = fn_829D3FE8(param_1,uVar3,auStack_30);
  if (cVar2 == '\0') {
    RtlLeaveCriticalSection(iVar6);
    uVar1 = 0xffffffff83010008;
  }
  else {
    uVar5 = 0;
    lVar4 = uVar3 + 0x8bc;
    do {
      if ((unsigned __int64)*(unsigned int *)lVar4 == (param_1 & 0xffffffff)) {
        uVar5 = uVar5 * 0x58 + uVar3 + 0x8a0;
        goto LAB_829d5ee8;
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0x58;
    } while ((uVar5 & 0xffffffff) < 2);
    uVar5 = 0;
LAB_829d5ee8:
    if (((uVar5 & 0xffffffff) == 0) || (-1 < *(int *)((int)uVar5 + 4))) {
      RtlLeaveCriticalSection(iVar6);
      uVar1 = 0xffffffff80070057;
    }
    else {
      uVar1 = fn_829D4038(uVar3,uVar5,3);
      KeSetEvent(*(unsigned int *)(lbl_832179FC + 0x8f4c8),0,0);
      RtlLeaveCriticalSection(iVar6);
    }
  }
  return uVar1;
}

