typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8232E600(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar3 = ZEXT48(piVar1);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  if (uVar3 == 0) {
    return;
  }
  do {
    puVar5 = (unsigned int *)(uVar3 + 4);
    lVar4 = (unsigned __int64)*puVar5 - 1;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(lVar4,0,uVar3 + 4);
      *puVar5 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if ((int)lVar4 == 0) {
    (**(int (***)())*piVar1)(uVar3);
    do {
      puVar5 = (unsigned int *)(uVar3 + 8);
      lVar4 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar4,0,uVar3 + 8);
        *puVar5 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar4 == 0) {
      (**(int (***)())(*piVar1 + 4))(uVar3);
    }
  }
  return;
}

