typedef unsigned char bool;
extern int fn_8267E2B0();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int fn_82686C38(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  fn_8267E2B0(param_1 + 0x20,0xffffffffffffffff);
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10) + 4;
    do {
      puVar3 = (unsigned int *)lVar2;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,lVar2);
        *puVar3 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return *(unsigned int *)(param_1 + 0x10);
}

