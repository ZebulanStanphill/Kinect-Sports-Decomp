extern int fn_8265CA60();
extern int fn_8282D300();
extern int fn_82835BE0();
extern int fn_82835BF0();


void fn_828316A0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned __int64 param_4)

{
  int *piVar1;
  __int64 lVar2;
  unsigned int *puVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = (unsigned int)param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar5;
  if (uVar5 == 0) {
    param_1[3] = 0;
  }
  else {
    lVar2 = -1;
    uVar6 = (param_4 & 0x1fffffff) << 3;
    if (0x1fffffff < uVar5) {
      uVar6 = 0xffffffffffffffff;
    }
    if ((uVar6 & 0xffffffff) < 0xfffffffc) {
      lVar2 = uVar6 + 4;
    }
    puVar4 = (unsigned int *)fn_8265CA60(lVar2);
    if (puVar4 == (unsigned int *)0x0) {
      puVar7 = (unsigned int *)0x0;
    }
    else {
      puVar7 = puVar4 + 1;
      *puVar4 = uVar5;
      puVar4 = puVar7;
      while (param_4 = param_4 - 1, -1 < (__int64)param_4) {
        fn_82835BE0(puVar4);
        puVar4 = puVar4 + 2;
      }
    }
    iVar9 = 0;
    param_1[3] = puVar7;
    piVar1 = *(int **)(*(int *)*param_1 + 300);
    iVar8 = *(int *)(*(int *)*param_1 + 0xac) * 0x14 + *piVar1;
    iVar10 = piVar1[param_1[1] + -1];
    if (iVar10 != iVar8) {
      lVar2 = 0;
      do {
        uVar3 = fn_8282D300(*param_1,*(unsigned int *)(iVar10 + 4));
        fn_82835BF0((unsigned __int64)(unsigned int)param_1[3] + lVar2,iVar10,uVar3);
        iVar9 = iVar9 + 1;
        lVar2 = lVar2 + 8;
        if (iVar9 == param_1[2]) {
          return;
        }
        iVar10 = iVar10 + 0x14;
      } while (iVar10 != iVar8);
    }
  }
  return;
}

