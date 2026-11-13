typedef unsigned char bool;
extern int fn_82A1E658();
extern int fn_82A1E6A0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8259C7E8(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar1 = *(unsigned int *)((int)param_1 + 8);
  param_1 = param_1 + 8;
  uVar3 = (unsigned __int64)uVar1;
  if (uVar1 == 0) {
    uVar3 = fn_82A1E6A0(0,0,0,0);
    do {
      puVar4 = (unsigned int *)param_1;
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
          *puVar4 = uVar2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar3,0,param_1);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 != 0) {
      fn_82A1E658();
      uVar3 = (unsigned __int64)uVar1;
    }
  }
  return uVar3;
}

