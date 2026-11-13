typedef unsigned char bool;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82A59B60(__int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  lVar2 = param_1 + 0xc;
  do {
    puVar3 = (unsigned int *)lVar2;
    if (*puVar3 != 0) {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3,0,lVar2);
        *puVar3 = uVar1;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(0,0,lVar2);
      *puVar3 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  RtlEnterCriticalSection(0xffffffff83219da4);
  if (param_2 == -1) {
    uVar4 = *(unsigned int *)((int)param_1 + 0x10);
  }
  else {
    uVar4 = *(unsigned int *)((param_2 + 5) * 4 + (int)param_1);
  }
  *param_3 = uVar4;
  RtlLeaveCriticalSection(0xffffffff83219da4);
  return 0;
}

