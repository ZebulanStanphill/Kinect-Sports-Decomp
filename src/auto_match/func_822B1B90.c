typedef unsigned char bool;
#define true 1
extern unsigned __int64 storeWordConditionalIndexed();


void fn_822B1B90(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  *param_1 = param_2;
  do {
    lVar3 = (unsigned __int64)*param_1 + 8;
    do {
      puVar4 = (unsigned int *)lVar3;
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar3);
          *puVar4 = uVar2;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(1,0,lVar3);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == 0) {
      sync(1);
      return;
    }
  } while( true );
}

