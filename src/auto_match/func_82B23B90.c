#define true 1
extern int fn_82ABDD90();
extern int fn_82AD2020();
extern int fn_82B18A70();
extern int fn_82B1F1B0();
extern int fn_82B22850();
extern int fn_82B8F1B0();
extern int fn_82B8F328();


void fn_82B23B90(int param_1,int param_2,char param_3,char param_4,int param_5,unsigned int *param_6
                  ,unsigned int *param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  
  uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = (int)uVar10;
  fn_82B18A70(param_1,uVar10);
  if (param_4 == '\0') {
    for (uVar1 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) +
                          0x1c); ((uVar1 & 1) == 0 && (uVar1 != 0));
        uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
      if ((*(unsigned int *)(uVar1 + 8) >> 0x1a & 1) != 0) {
        *(unsigned int *)(uVar1 + 8) = *(unsigned int *)(uVar1 + 8) & 0xfbffffff;
      }
    }
  }
  uVar1 = *(unsigned int *)(param_1 + 0x5c);
  if (param_3 != '\0') {
    if (*(int *)(param_1 + 0x24) == 0) {
      *(unsigned int *)(param_1 + 0x24) = 1;
    }
    iVar7 = *(int *)(param_1 + 0x24);
    *(int *)(param_1 + 0x24) = iVar7 + 1;
    *(int *)(param_1 + 0x20) = iVar7;
  }
  fn_82B1F1B0(param_1,param_5,uVar10);
  if (param_3 != '\0') {
    *(unsigned int *)(param_1 + 0x20) = 0;
  }
  fn_82B22850(param_1,param_5,uVar10,1);
  uVar2 = *(unsigned int *)(param_5 + 4);
  do {
    if (((uVar2 & 1) != 0) || (uVar2 == 0)) {
      if (param_7 != (unsigned int *)0x0) {
        for (iVar7 = *(int *)(param_2 + 0x34); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x34)) {
          if ((unsigned __int64)*(unsigned int *)(iVar7 + 0x2c) == (uVar10 & 0xffffffff)) {
            param_2 = iVar7;
          }
        }
        *param_7 = *(unsigned int *)(param_2 + 0x50);
      }
      *param_6 = (int)uVar10;
      return;
    }
    if ((*(int *)(uVar2 + 8) == 0) &&
       ((uVar3 = *(unsigned int *)(uVar2 + 0x50),
        uVar3 != (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) &&
        (iVar7 = *(int *)(uVar3 + 0x34), iVar7 != 0)))) {
      do {
        if ((unsigned __int64)*(unsigned int *)(iVar7 + 0x2c) == (uVar10 & 0xffffffff)) break;
        iVar7 = *(int *)(iVar7 + 0x34);
      } while (iVar7 != 0);
      if (iVar7 != 0) {
        iVar4 = *(int *)(iVar7 + 0x50);
        for (puVar9 = *(unsigned int **)(iVar4 + 0xc); puVar9 != (unsigned int *)0x0; puVar9 = (unsigned int *)puVar9[2]) {
          uVar5 = *puVar9;
          if (((((unsigned __int64)*(unsigned int *)(uVar5 + 0x2c) != (uVar10 & 0xffffffff)) &&
               (uVar6 = (unsigned __int64)*(unsigned int *)(uVar5 + 0x30) & 0x7ffff, uVar6 < uVar1)) &&
              ((*(unsigned int *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(iVar7 + 0x28)) &
               1 << ((unsigned int)uVar6 & 0x1f)) == 0)) &&
             ((*(unsigned int *)(((int)(uVar6 >> 5) + 1) * 4 + *(int *)(uVar3 + 0x28)) &
              1 << ((unsigned int)uVar6 & 0x1f)) != 0)) {
            fn_82B8F1B0(iVar4,uVar5,param_1);
            iVar7 = fn_82AD2020(param_1,iVar4);
            if (iVar7 != 0) {
              uVar3 = *(unsigned int *)(iVar7 + 8);
              iVar8 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,uVar3 >> 0xe & 7);
              puVar9 = (unsigned int *)(iVar8 + iVar7 + -0x10);
              if (*puVar9 == uVar5) {
                *puVar9 = uVar2;
              }
            }
            break;
          }
        }
        fn_82B8F328(iVar4,uVar2,param_1);
      }
    }
    uVar2 = *(unsigned int *)((uVar2 & 0xfffffffe) + 4);
  } while( true );
}

