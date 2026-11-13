typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned __int64 storeWordConditionalIndexed();


__int64 fn_82A20040(int *param_1,unsigned int *param_2)

{
  bool bVar1;
  __int64 lVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (param_1[0xd] != 0) {
    RtlEnterCriticalSection(param_1 + 6);
  }
  puVar5 = (unsigned int *)param_2[1];
  if ((puVar5 == (unsigned int *)0x0) || (uVar4 = *puVar5, uVar4 == 0)) {
    bVar1 = puVar5 == (unsigned int *)0x0;
    while( true ) {
      if ((!bVar1) && (uVar4 = *param_2, *param_2 = uVar4 + 1, (unsigned int)param_1[1] <= uVar4 + 1)) {
        uVar4 = 0;
        goto code_r0x82a200e0;
      }
      uVar4 = *(unsigned int *)(*param_2 * 4 + *param_1);
      param_2[1] = uVar4;
      if (uVar4 != 0) break;
      bVar1 = false;
    }
  }
  else {
code_r0x82a200e0:
    param_2[1] = uVar4;
  }
  if (param_1[0xd] != 0) {
    RtlLeaveCriticalSection(param_1 + 6);
  }
  uVar3 = (unsigned __int64)param_2[1];
  if (uVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = uVar3 + 0xc;
    if (param_1[0xe] == 0) {
      lVar2 = uVar3 + 8;
    }
    else {
      do {
        puVar5 = (unsigned int *)(uVar3 + 8);
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,uVar3 + 8);
          *puVar5 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
    }
  }
  return lVar2;
}

