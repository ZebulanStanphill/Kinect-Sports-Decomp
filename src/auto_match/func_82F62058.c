typedef unsigned char bool;
extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F62058(__int64 param_1,int *param_2,int *param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0xffffffff82240403;
  }
  else {
    uVar3 = 0;
    uVar4 = fn_82A1BB18();
    lVar5 = param_1 + 4;
    do {
      puVar6 = (unsigned int *)lVar5;
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar8 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar5);
          *puVar6 = uVar8;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar8 = storeWordConditionalIndexed(uVar4,0,lVar5);
        *puVar6 = uVar8;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar1 == 0) {
      iVar2 = (int)param_1;
      uVar1 = *(unsigned int *)(iVar2 + 0x24);
      if ((unsigned __int64)*(unsigned int *)(iVar2 + 0x14) < ((unsigned __int64)uVar1 - 1 & 0xffffffff)) {
        iVar7 = *(unsigned int *)(iVar2 + 0x14) + 1;
      }
      else {
        iVar7 = *(int *)(iVar2 + 0x20);
      }
      trapWord(6,(unsigned __int64)uVar1,0);
      *(int *)(iVar2 + 0x14) = iVar7;
      uVar8 = *(int *)(iVar2 + 0x10) + 1;
      *(unsigned int *)(iVar2 + 0x10) = uVar8;
      iVar7 = (uVar8 - (uVar8 / uVar1) * uVar1) * *(int *)(iVar2 + 0x28) + *(int *)(iVar2 + 0x50);
      *(int *)(iVar2 + 0x4c) = iVar7;
      *param_2 = iVar7;
      if (param_3 != (int *)0x0) {
        *param_3 = 0;
        if (1 < *(unsigned int *)(iVar2 + 0x10)) {
          uVar1 = *(unsigned int *)(iVar2 + 0x24);
          uVar8 = *(unsigned int *)(iVar2 + 0x10) - 1;
          trapWord(6,(unsigned __int64)uVar1,0);
          *param_3 = (uVar8 - (uVar8 / uVar1) * uVar1) * *(int *)(iVar2 + 0x28) +
                     *(int *)(iVar2 + 0x50);
        }
      }
    }
    else {
      uVar3 = 0xffffffff82240401;
    }
  }
  return uVar3;
}

