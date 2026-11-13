typedef unsigned char bool;
extern int fn_8265C940();
extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F61BE8(__int64 param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) {
    uVar5 = 0xffffffff82240403;
  }
  else {
    uVar5 = 0;
    uVar2 = fn_82A1BB18();
    do {
      puVar3 = (unsigned int *)param_1;
      uVar4 = *puVar3;
      if (uVar4 != 0) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)uVar4,0,param_1);
          *puVar3 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar2,0,param_1);
        *puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar4 == 0) {
      lVar6 = param_1 + 4;
      do {
        puVar7 = (unsigned int *)lVar6;
        uVar4 = *puVar7;
        if (uVar4 != 0) {
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((unsigned __int64)uVar4,0,lVar6);
            *puVar7 = uVar1;
            in_cr0 = 2;
          }
          break;
        }
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar2,0,lVar6);
          *puVar7 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      sync(1);
      if (uVar4 == 0) {
        if (puVar3[0x14] == 0) {
          puVar3[0xb] = 0x64004000;
          uVar4 = fn_8265C940((__int64)(int)(param_3 + param_4) * (__int64)(int)param_2);
          puVar3[0x14] = uVar4;
          in_cr0 = (uVar4 == 0) << 1;
          if (uVar4 == 0) {
            puVar3[8] = 0;
            puVar3[9] = 0;
            uVar5 = 0xffffffff82240402;
            puVar3[10] = 0;
          }
          else {
            puVar3[8] = param_3;
            puVar3[9] = param_3 + param_4;
            puVar3[10] = param_2;
            RtlInitializeCriticalSectionAndSpinCount(param_1 + 0x30,0x1000);
          }
          puVar3[2] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[3] = 0;
        }
        else {
          uVar5 = 0xffffffff82240404;
        }
        sync(1);
        do {
          if (*puVar7 != (unsigned int)uVar2) {
            if (in_RESERVE != '\0') {
              uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar7,0,lVar6);
              *puVar7 = uVar4;
              in_cr0 = 2;
            }
            break;
          }
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed(0,0,lVar6);
            *puVar7 = uVar4;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
      else {
        uVar5 = 0xffffffff82240401;
      }
      sync(1);
      do {
        if (*puVar3 != (unsigned int)uVar2) {
          if (in_RESERVE == '\0') {
            return uVar5;
          }
          uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar3,0,param_1);
          *puVar3 = uVar4;
          return uVar5;
        }
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed(0,0,param_1);
          *puVar3 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
    else {
      uVar5 = 0xffffffff82240400;
    }
  }
  return uVar5;
}

