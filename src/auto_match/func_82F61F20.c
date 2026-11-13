typedef unsigned char bool;
extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F61F20(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar7 = 0;
  uVar3 = fn_82A1BB18();
  do {
    puVar4 = (unsigned int *)param_1;
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar3,0,param_1);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  sync(1);
  if (uVar1 == 0) {
    lVar5 = param_1 + 4;
    do {
      puVar6 = (unsigned int *)lVar5;
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar5);
          *puVar6 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar3,0,lVar5);
        *puVar6 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar1 == 0) {
      puVar4[2] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      sync(1);
      do {
        if (*puVar6 != (unsigned int)uVar3) {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6,0,lVar5);
            *puVar6 = uVar1;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar5);
          *puVar6 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      uVar7 = 0xffffffff82240401;
    }
    sync(1);
    do {
      if (*puVar4 != (unsigned int)uVar3) {
        if (in_RESERVE == '\0') {
          return uVar7;
        }
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar4,0,param_1);
        *puVar4 = uVar1;
        return uVar7;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,param_1);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar7 = 0xffffffff82240400;
  }
  return uVar7;
}

