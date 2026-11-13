typedef unsigned char bool;
#define true 1
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8267D5B0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  do {
    puVar4 = (unsigned int *)param_1;
    uVar2 = *puVar4;
    sync(1);
    do {
      uVar1 = *puVar4;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1);
          *puVar4 = uVar3;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar2 | param_2,0,param_1);
        *puVar4 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    sync(1);
    if (uVar1 == uVar2) {
      return;
    }
  } while( true );
}

