typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8267D728(__int64 param_1,char param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  
  param_1 = param_1 + 0x18;
  puVar5 = (unsigned int *)param_1;
  if (param_2 == '\0') {
    do {
      uVar1 = *puVar5;
      sync(1);
      uVar2 = *puVar5;
      if (uVar2 == uVar1) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1 & 0xffffffffffffffef,0,param_1);
          *puVar5 = uVar3;
        }
      }
      else if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar2,0,param_1);
        *puVar5 = uVar3;
      }
      sync(1);
    } while (uVar2 != uVar1);
    return;
  }
  bVar4 = false;
  do {
    uVar2 = *puVar5;
    sync(1);
    do {
      uVar1 = *puVar5;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
          *puVar5 = uVar3;
          bVar4 = true;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar2 | 0x10,0,param_1);
        *puVar5 = uVar3;
        bVar4 = true;
      }
    } while (!bVar4);
    sync(1);
    if (uVar1 == uVar2) {
      return;
    }
  } while( true );
}

