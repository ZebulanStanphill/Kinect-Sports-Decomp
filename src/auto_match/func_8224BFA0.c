typedef unsigned char bool;
#define true 1
extern unsigned int lbl_82197CE0;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8224BFA0(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  lVar3 = param_1 + 0xc;
  *(unsigned int *)param_1 = &lbl_82197CE0;
LAB_8224bfbc:
  do {
    puVar4 = (unsigned int *)lVar3;
    uVar1 = *puVar4;
    if (uVar1 == 0) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(1,0,lVar3);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
      if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_8224bfbc;
    }
    else if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar3);
      *puVar4 = uVar2;
      in_cr0 = 2;
    }
    if (uVar1 == 0) {
      sync(1);
      for (uVar1 = ((unsigned int *)param_1)[2]; (unsigned __int64)uVar1 != (param_1 + 4U & 0xffffffff);
          uVar1 = *(unsigned int *)(uVar1 + 4)) {
        *(unsigned int *)(uVar1 + 8) = 0;
      }
      sync(1);
      *puVar4 = 0;
      return;
    }
  } while( true );
}

