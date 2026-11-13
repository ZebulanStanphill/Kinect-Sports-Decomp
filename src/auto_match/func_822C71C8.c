typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7718();
extern int fn_82558B08();
extern int fn_8265CA20();
extern unsigned int lbl_821ACFB8;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_822C71C8(unsigned int *param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int iVar7;
  char in_RESERVE;
  unsigned char in_cr0;
  
  *param_1 = &lbl_821ACFB8;
  fn_82558B08();
  fn_822C7718(param_1 + 0x10);
  iVar7 = param_1[0xc];
  if (iVar7 != 0) {
    iVar1 = param_1[0xd];
    for (; iVar7 != iVar1; iVar7 = iVar7 + 8) {
      if (*(int *)(iVar7 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(param_1[0xc]);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  piVar2 = (int *)param_1[0xb];
  if (ZEXT48(piVar2) != 0) {
    lVar4 = ZEXT48(piVar2) + 8;
    do {
      puVar5 = (unsigned int *)lVar4;
      lVar6 = (unsigned __int64)*puVar5 - 1;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(lVar6,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar6 == 0) {
      (**(int (***)())(*piVar2 + 4))();
    }
  }
  fn_82230300(param_1 + 1,1,0);
  return;
}

