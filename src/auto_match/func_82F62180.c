typedef unsigned char bool;
extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F62180(__int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (param_2 == 0) {
    uVar5 = 0xffffffff82240403;
  }
  else {
    uVar5 = 0;
    uVar6 = fn_82A1BB18();
    lVar7 = param_1 + 4;
    do {
      puVar8 = (unsigned int *)lVar7;
      uVar1 = *puVar8;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar7);
          *puVar8 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,lVar7);
        *puVar8 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == uVar6) {
      iVar4 = (int)param_1;
      if (param_2 == *(int *)(iVar4 + 0x4c)) {
        sync(1);
        uVar1 = *(unsigned int *)(iVar4 + 0x10);
        uVar9 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x14);
        if ((unsigned __int64)*(unsigned int *)(iVar4 + 0x20) < (unsigned __int64)*(unsigned int *)(iVar4 + 0x14)) {
          uVar9 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x20);
        }
        do {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1 + 8);
            *(unsigned int *)(param_1 + 8) = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        do {
          if (in_RESERVE != '\0') {
            uVar3 = storeWordConditionalIndexed(uVar9,0,param_1 + 0xc);
            *(unsigned int *)(param_1 + 0xc) = uVar3;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        *(unsigned int *)(iVar4 + 0x4c) = 0;
      }
      else {
        uVar5 = 0xffffffff82240403;
      }
      sync(1);
      do {
        if (*puVar8 != uVar6) {
          if (in_RESERVE == '\0') {
            return uVar5;
          }
          uVar6 = storeWordConditionalIndexed((unsigned __int64)*puVar8,0,lVar7);
          *puVar8 = uVar6;
          return uVar5;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar7);
          *puVar8 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      uVar5 = 0xffffffff82240401;
    }
  }
  return uVar5;
}

