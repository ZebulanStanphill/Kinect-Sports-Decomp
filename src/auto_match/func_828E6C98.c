typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_828E6C98(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = *param_1;
      uVar1 = param_1[1];
      param_3[1] = uVar1;
      if ((unsigned __int64)uVar1 != 0) {
        lVar2 = (unsigned __int64)uVar1 + 8;
        do {
          puVar3 = (unsigned int *)lVar2;
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,lVar2);
            *puVar3 = uVar1;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}

