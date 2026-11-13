typedef unsigned char bool;
#define true 1
extern int fn_82A1BB18();
extern int fn_82A1E108();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82E66318(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar4 = 1;
  do {
    uVar3 = fn_82A1BB18();
    puVar2 = (unsigned int *)param_1;
    if (puVar2[2] == uVar3) {
      puVar2[1] = puVar2[1] + 1;
      return;
    }
    if (*puVar2 != 0) {
      fn_82A1E108(uVar4);
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      if (100 < uVar4) {
        uVar4 = 100;
      }
    }
    do {
      uVar3 = *puVar2;
      if (uVar3 != 0) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)uVar3,0,param_1);
          *puVar2 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(1,0,param_1);
        *puVar2 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar3 == 0) {
      sync(1);
      puVar2[1] = 1;
      uVar3 = fn_82A1BB18();
      puVar2[2] = uVar3;
      return;
    }
  } while( true );
}

