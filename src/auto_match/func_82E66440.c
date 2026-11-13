#define true 1
extern int fn_82A1E108();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82E66440(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  
  do {
    while( true ) {
      puVar4 = (unsigned int *)param_1;
      if (puVar4[1] != 0) {
        return 0;
      }
      uVar2 = *puVar4;
      if ((uVar2 & 0xc0000000) == 0) break;
      fn_82A1E108(10);
    }
    uVar1 = *puVar4;
    if (uVar1 == uVar2) {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar2 + 1,0,param_1);
        *puVar4 = uVar3;
      }
    }
    else if (in_RESERVE != '\0') {
      uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
      *puVar4 = uVar3;
    }
  } while (uVar1 != uVar2);
  sync(1);
  return 1;
}

