typedef unsigned char bool;
#define true 1
extern int fn_828A0108();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_828A0198(int param_1,unsigned int *param_2)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int *puVar4;
  __int64 lVar3;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  uVar2 = *(unsigned int *)(param_1 + 0x50);
  uStack_20 = *(unsigned int *)(param_1 + 0x58);
  if (uStack_20 == uVar2) {
    uStack_20 = uStack_20 + 1;
    if (uVar2 < uStack_20) {
      uStack_1c = uVar2 << 2;
      puVar5 = &uStack_20;
      if (uStack_20 <= uVar2 << 2) {
        puVar5 = &uStack_1c;
      }
      fn_828A0108(param_1,*puVar5);
    }
    puVar4 = (unsigned int *)(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 8);
    bVar1 = puVar4 == (unsigned int *)0x0;
    if (!bVar1) {
      *puVar4 = *param_2;
      uVar2 = param_2[1];
      puVar4[1] = uVar2;
      if ((unsigned __int64)uVar2 != 0) {
        lVar3 = (unsigned __int64)uVar2 + 4;
        do {
          puVar5 = (unsigned int *)lVar3;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,lVar3);
            *puVar5 = uVar2;
            bVar1 = true;
          }
        } while (!bVar1);
      }
    }
  }
  else {
    puVar4 = (unsigned int *)(uStack_20 * 8 + *(int *)(param_1 + 0x54));
    bVar1 = puVar4 == (unsigned int *)0x0;
    if (!bVar1) {
      *puVar4 = *param_2;
      uVar2 = param_2[1];
      puVar4[1] = uVar2;
      if ((unsigned __int64)uVar2 != 0) {
        lVar3 = (unsigned __int64)uVar2 + 4;
        do {
          puVar5 = (unsigned int *)lVar3;
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar5 + 1,0,lVar3);
            *puVar5 = uVar2;
            bVar1 = true;
          }
        } while (!bVar1);
      }
    }
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return;
}

