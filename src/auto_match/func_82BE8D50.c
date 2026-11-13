typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BE8D50(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  puVar3 = (unsigned int *)param_1;
  param_1 = param_1 + 4;
  do {
    puVar4 = (unsigned int *)param_1;
    uVar1 = *puVar4;
    if (uVar1 != 1) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(1,0,param_1);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar1 != 1) {
    do {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar4 - 1,0,param_1);
        *puVar4 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    return;
  }
  if (puVar3 != (unsigned int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82be8da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())*puVar3)(puVar3,1);
    return;
  }
  return;
}

