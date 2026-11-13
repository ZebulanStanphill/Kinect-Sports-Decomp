typedef unsigned char bool;
extern int fn_82BE5230();
extern unsigned int lbl_820E9334;
extern unsigned int lbl_831751CC;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BE5998(__int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  puVar3 = (unsigned int *)param_1;
  *puVar3 = &lbl_820E9334;
  lVar4 = param_1 + 0x44;
  do {
    puVar5 = (unsigned int *)lVar4;
    uVar1 = *puVar5;
    if (uVar1 != 1) {
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,lVar4);
        *puVar5 = uVar2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(0,0,lVar4);
      *puVar5 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((uVar1 != 0) && (puVar3[7] != 0)) {
    (*(int (**)())lbl_831751CC)();
    puVar3[7] = 0;
  }
  if (puVar3[0xc] != 0) {
    (*(int (**)())lbl_831751CC)();
    puVar3[0xc] = 0;
  }
  fn_82BE5230(param_1);
  return;
}

