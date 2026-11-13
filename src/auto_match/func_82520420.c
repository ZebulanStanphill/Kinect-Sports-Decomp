typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_8251F468();
extern int fn_8251FA58();
extern int fn_8258AE88();
extern int fn_827D50B8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82520420(unsigned int *param_1,__int64 param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  char in_RESERVE;
  unsigned char bVar10;
  
  iVar3 = fn_827D50B8(*param_1);
  bVar10 = (iVar3 == 0) << 1;
  if (iVar3 == 0) {
    uVar5 = (unsigned __int64)*(unsigned int *)((int)param_2 + 0xc);
    lVar8 = param_2 + 0xc;
    uVar7 = 0;
    if (uVar5 != 0) {
      do {
        uVar7 = uVar7 + 1;
        uVar5 = fn_8258AE88(lVar8,uVar5);
        bVar10 = (uVar5 == 0) << 1;
      } while (uVar5 != 0);
    }
    uVar5 = 0;
    puVar9 = (unsigned int *)lVar8;
    if ((uVar7 & 0xffffffff) != 0) {
      do {
        uVar2 = (unsigned __int64)*puVar9;
        uVar4 = uVar5;
        if (0 < (int)uVar5) {
          do {
            uVar2 = fn_8258AE88(lVar8,uVar2);
            uVar4 = uVar4 - 1;
            bVar10 = (uVar4 == 0) << 1;
          } while (uVar4 != 0);
        }
        do {
          puVar6 = (unsigned int *)(param_2 + 4);
          if (in_RESERVE != '\0') {
            uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 + 1,0,param_2 + 4);
            *puVar6 = uVar1;
            bVar10 = 2;
          }
        } while (!(bool)(bVar10 >> 1 & 1));
        fn_8251F468(uVar2,0,2,0,0xffffffff82520360,param_2,0,0);
        uVar5 = uVar5 + 1;
      } while ((uVar5 & 0xffffffff) < (uVar7 & 0xffffffff));
    }
    if (*puVar9 != 0) {
      fn_8251FA58();
      *puVar9 = 0;
    }
  }
  do {
    puVar9 = (unsigned int *)(param_2 + 4);
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar9 - 1,0,param_2 + 4);
      *puVar9 = uVar1;
      bVar10 = 2;
    }
  } while (!(bool)(bVar10 >> 1 & 1));
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return;
}

