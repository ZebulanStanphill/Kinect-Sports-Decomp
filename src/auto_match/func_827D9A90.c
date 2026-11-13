typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern unsigned int lbl_8201BA10;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_827D9A90(unsigned int *param_1)

{
  int *piVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8201BA10;
  puStack00000014 = param_1;
  if (param_1[0xc] != 0) {
    fn_822315A0();
  }
  piVar1 = (int *)param_1[2];
  if (ZEXT48(piVar1) != 0) {
    lVar3 = ZEXT48(piVar1) + 8;
    do {
      puVar4 = (unsigned int *)lVar3;
      lVar5 = (unsigned __int64)*puVar4 - 1;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(lVar5,0,lVar3);
        *puVar4 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar5 == 0) {
      (**(int (***)())(*piVar1 + 4))();
    }
  }
  return;
}

