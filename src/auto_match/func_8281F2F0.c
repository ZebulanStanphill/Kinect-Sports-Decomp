typedef unsigned char bool;
extern int fn_82A1E658();
extern int fn_82A1E810();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8281F2F0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar2 = *(unsigned int *)((int)param_1 + 8);
  uVar6 = (unsigned __int64)uVar2;
  lVar4 = param_1 + 8;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      puVar5 = (unsigned int *)lVar4;
      uVar1 = *puVar5;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar4);
          *puVar5 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar7 = -(unsigned __int64)(uVar6 == uVar1) & uVar6;
  }
  sync(1);
  param_1 = param_1 + 4;
  do {
    puVar5 = (unsigned int *)param_1;
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)uVar2,0,param_1);
        *puVar5 = uVar1;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(1,0,param_1);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar2 == 0) {
    if (uVar7 == 0) {
      return;
    }
    fn_82A1E810(uVar7);
  }
  if (uVar7 != 0) {
    fn_82A1E658(uVar7);
  }
  return;
}

