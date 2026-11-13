typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82C0BE40(__int64 param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  iVar1 = (int)param_1;
  uVar3 = *(int *)(iVar1 + 0x38) + 1;
  *(unsigned int *)(iVar1 + 0x38) = uVar3;
  if (*(unsigned int *)(iVar1 + 0x34) <= uVar3) {
    *(unsigned int *)(iVar1 + 0x38) = 0;
    do {
      puVar2 = (unsigned int *)(param_1 + 0x44);
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 - 1,0,param_1 + 0x44);
        *puVar2 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    return;
  }
  do {
    puVar2 = (unsigned int *)(param_1 + 0x44);
    if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 - 1,0,param_1 + 0x44);
      *puVar2 = uVar3;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

