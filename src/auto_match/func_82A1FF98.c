typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82A1FF98(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar3 = (unsigned int *)((int)param_2 + -0xc);
    if (*(int *)((int)param_2 + -4) == 1) {
      if (*(int *)(param_1 + 0x34) != 0) {
        RtlEnterCriticalSection(param_1 + 0x18);
      }
      *puVar3 = *(unsigned int *)(param_1 + 8);
      *(unsigned int **)(param_1 + 8) = puVar3;
      if (*(int *)(param_1 + 0x34) != 0) {
        RtlLeaveCriticalSection(param_1 + 0x18);
      }
    }
    else {
      do {
        puVar2 = (unsigned int *)(param_2 + -4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar2 - 1,0,param_2 + -4);
          *puVar2 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
  }
  return;
}

