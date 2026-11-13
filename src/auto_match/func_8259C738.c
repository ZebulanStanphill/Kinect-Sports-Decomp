typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8259C7E8();
extern int fn_82A1E810();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8259C738(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  do {
    puVar5 = (unsigned int *)(param_1 + 4);
    lVar6 = (unsigned __int64)*puVar5 - 1;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(lVar6,0,param_1 + 4);
      *puVar5 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (lVar6 == 0) {
    sync(1);
    bVar4 = false;
    do {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(0,0,param_1);
        *(unsigned int *)param_1 = uVar2;
        bVar4 = true;
      }
    } while (!bVar4);
    sync(1);
    do {
      puVar5 = (unsigned int *)(param_1 + 0xc);
      uVar1 = *puVar5;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1 + 0xc);
        *puVar5 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    if (0 < (int)uVar1) {
      fn_8259C7E8();
      fn_82A1E810();
    }
  }
  return;
}

