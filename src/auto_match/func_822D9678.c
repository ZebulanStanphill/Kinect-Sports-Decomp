typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8265CA20();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_822D9678(int *param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int iVar7;
  int iVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  piVar1 = (int *)param_1[7];
  if (ZEXT48(piVar1) != 0) {
    lVar4 = ZEXT48(piVar1) + 8;
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
      (**(int (***)())(*piVar1 + 4))();
    }
  }
  iVar8 = *param_1;
  if (iVar8 != 0) {
    iVar2 = param_1[1];
    for (; iVar8 != iVar2; iVar8 = iVar8 + 0x20) {
      iVar7 = *(int *)(iVar8 + 0x10);
      if (iVar7 != 0) {
        for (; iVar7 != *(int *)(iVar8 + 0x14); iVar7 = iVar7 + 0x20) {
        }
        fn_8265CA20(*(unsigned int *)(iVar8 + 0x10));
      }
      *(unsigned int *)(iVar8 + 0x10) = 0;
      *(unsigned int *)(iVar8 + 0x14) = 0;
      *(unsigned int *)(iVar8 + 0x18) = 0;
    }
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

