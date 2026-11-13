typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82812380(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  do {
    puVar2 = (unsigned int *)param_1;
    uVar3 = (unsigned __int64)*puVar2;
    if (param_2 <= (int)*puVar2) {
      if (in_RESERVE == '\0') {
        return uVar3;
      }
      uVar1 = storeWordConditionalIndexed(uVar3,0,param_1);
      *puVar2 = uVar1;
      return uVar3;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar3 + 1,0,param_1);
      *puVar2 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return uVar3 + 1;
}

