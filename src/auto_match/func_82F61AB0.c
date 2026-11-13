typedef unsigned char bool;
extern int fn_82A1BB18();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F61AB0(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar6 = 0;
  uVar3 = fn_82A1BB18();
  do {
    puVar4 = (unsigned int *)param_1;
    uVar1 = *puVar4;
    uVar5 = (unsigned int)uVar3;
    if (uVar1 != uVar5) {
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
  if (uVar1 == uVar5) {
    puVar4[7] = 0;
    puVar4[6] = 0;
    sync(1);
    do {
      if (*puVar4 != uVar5) {
        if (in_RESERVE == '\0') {
          return 0;
        }
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar4,0,param_1);
        *puVar4 = uVar1;
        return 0;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,param_1);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    uVar6 = 0xffffffff82240400;
  }
  return uVar6;
}

