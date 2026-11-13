typedef unsigned char bool;
extern int fn_8265C990();
extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F61DC0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar5 = 0;
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
    lVar6 = param_1 + 4;
    do {
      puVar7 = (unsigned int *)lVar6;
      uVar1 = *puVar7;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar6);
          *puVar7 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar3,0,lVar6);
        *puVar7 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar1 == 0) {
      if (puVar4[0x14] != 0) {
        fn_8265C990(puVar4[0x14],puVar4[0xb]);
        puVar4[0x14] = 0;
      }
      puVar4[2] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[3] = 0;
      sync(1);
      do {
        if (*puVar7 != (unsigned int)uVar3) {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar7,0,lVar6);
            *puVar7 = uVar1;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(0,0,lVar6);
          *puVar7 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      uVar5 = 0xffffffff82240401;
    }
    sync(1);
    do {
      if (*puVar4 != (unsigned int)uVar3) {
        if (in_RESERVE == '\0') {
          return uVar5;
        }
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar4,0,param_1);
        *puVar4 = uVar1;
        return uVar5;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,param_1);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar5 = 0xffffffff82240400;
  }
  return uVar5;
}

