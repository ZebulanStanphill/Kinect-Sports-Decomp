extern int fn_825B47E8();
extern int fn_8280A620();
extern int fn_828114A8();


unsigned __int64 fn_825B49E8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  param_1[6] = param_1[6] + 1;
  uVar4 = fn_8280A620(param_2);
  if (uVar4 < 0x1000) {
    uVar4 = 0x1000;
  }
  uVar7 = 0x1f - LZCOUNT(uVar4 >> 0xc);
  uVar5 = uVar7;
  if ((uVar7 & 0xffffffff) < (unsigned __int64)*param_1) {
    lVar6 = uVar7 * 0xc;
    do {
      if (*(int *)((int)lVar6 + param_1[7] + 4) != 0) break;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0xc;
    } while ((uVar5 & 0xffffffff) < (unsigned __int64)*param_1);
  }
  if ((uVar5 & 0xffffffff) < (unsigned __int64)*param_1) {
    lVar6 = uVar5 * 0xc;
    piVar2 = (int *)((int)lVar6 + param_1[7]);
    uVar3 = (unsigned __int64)(unsigned int)piVar2[1];
    puVar1 = *(unsigned int **)(piVar2[1] + 4);
    piVar2[1] = (int)puVar1;
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
    }
    *piVar2 = *piVar2 + -1;
    uVar10 = (unsigned __int64)(unsigned int)(0x1000 << ((unsigned int)uVar5 & 0x3f));
    uVar9 = (uVar3 - param_1[3] & 0xffffffff) / uVar10;
    if ((uVar7 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      lVar8 = uVar5 - uVar7;
      do {
        fn_828114A8(*(unsigned int *)((int)lVar6 + param_1[7] + 8),uVar9);
        uVar10 = uVar10 >> 1;
        uVar9 = (uVar9 & 0x7fffffff) << 1;
        fn_825B47E8(lVar6 + (unsigned __int64)param_1[7] + -0xc,uVar3 + uVar10);
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + -0xc;
      } while (lVar8 != 0);
    }
    fn_828114A8(*(unsigned int *)((int)uVar7 * 0xc + param_1[7] + 8),uVar9);
    param_1[4] = param_1[4] + uVar4;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

