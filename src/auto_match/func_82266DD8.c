typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82266230();
extern int fn_82267218();
extern int fn_82267308();
extern int fn_82267460();
extern int fn_82267628();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82522D98();
extern int fn_8265C9E0();
extern int fn_82A1DD38();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_821A8C90;
extern unsigned int uStack00000034;


int fn_82266DD8(int param_1,unsigned int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int *piVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  int *piVar7;
  int *piVar8;
  unsigned __int64 uVar5;
  __int64 lVar9;
  unsigned int *puVar10;
  int *piVar11;
  float *pfVar12;
  int iVar13;
  __int64 lVar14;
  unsigned int *puVar16;
  __int64 lVar15;
  unsigned int uStack00000034;
  
  *(int *)(param_1 + 0x460) = (int)param_3;
  uStack00000034 = (unsigned int)param_5;
  fn_82F68CC0(param_1 + 0x470,param_2,0x150);
  *(unsigned char ***)(param_1 + 0x5c4) = &lbl_821A8C90;
  *(unsigned int *)(param_1 + 0x5d8) = 0;
  *(int *)(param_1 + 0x5c8) = param_1;
  *(int (***)())(param_1 + 0x5cc) = fn_82267308;
  *(int (***)())(param_1 + 0x5d0) = fn_82BA02A8;
  piVar7 = (int *)0x0;
  *(int (***)())(param_1 + 0x5d4) = fn_82BA02A8;
  piVar8 = (int *)0x0;
  uVar4 = fn_8265C9E0(0x78);
  if ((uVar4 & 0xffffffff) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_82267460(uVar4,param_1 + 0x5c4,*(unsigned int *)(param_1 + 0x588),param_1 + 0x598
                              ,param_1 + 0x59c,param_3,param_4);
  }
  puVar10 = param_2 + 0x4c;
  *(unsigned int *)(param_1 + 0x5c0) = uVar6;
  if ((((puVar10 == (unsigned int *)0x0) || (*puVar10 == 0)) ||
      (puVar16 = param_2 + 0x4d, puVar16 == (unsigned int *)0x0)) ||
     (uVar4 = (unsigned __int64)*puVar16, uVar4 == (uVar4 - 1) + (unsigned __int64)(uVar4 == 0))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
    piVar7 = (int *)fn_8251F720(puVar10,0);
    piVar8 = (int *)fn_8251F720(puVar16,0);
    for (piVar11 = piVar7; (piVar2 = piVar8, piVar11 != (int *)0x0 && (*piVar11 != 0));
        piVar11 = (int *)(-(unsigned int)(piVar11[1] != 0) & (unsigned int)(piVar11 + 1))) {
    }
    for (; (piVar2 != (int *)0x0 && (*piVar2 != 0));
        piVar2 = (int *)(-(unsigned int)(piVar2[1] != 0) & (unsigned int)(piVar2 + 1))) {
    }
  }
  lVar15 = 0;
  if (0 < (int)param_2[2]) {
    lVar14 = 0;
    pfVar12 = (float *)(param_2 + 0x3f);
    iVar13 = param_1;
    do {
      lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x47c) + lVar15;
      pfVar12 = pfVar12 + 1;
      fn_82266230((double)*pfVar12,(double)(float)param_2[0x45],iVar13,
                        lVar14 + (unsigned __int64)*param_2,lVar9,lVar9,param_2 + 0x47,param_2 + 0x48);
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x48;
      iVar13 = iVar13 + 0xe0;
    } while ((int)lVar15 < (int)param_2[2]);
    param_5 = (unsigned __int64)uStack00000034;
  }
  if (bVar3) {
    fn_8251FA58(piVar7);
    fn_8251FA58(piVar8);
  }
  if ((param_5 & 0xffffffff) == 0) {
    *(unsigned int *)(param_1 + 0x5dc) = 0;
  }
  else {
    uVar5 = fn_82522D98((unsigned __int64)param_2[1] * 0x24);
    *(int *)(param_1 + 0x5dc) = (int)uVar5;
    fn_82A1DD38(uVar5,param_5,(unsigned __int64)param_2[1] * 0x24);
  }
  fn_82267218(param_1);
  if ((int)param_2[2] < (int)param_2[1]) {
    fn_82266230((double)(float)param_2[0x44],(double)(float)param_2[0x45],param_1 + 0x380,
                      0xffffffff821a7cd0,4,4,param_2 + 0x47,param_2 + 0x48);
    uVar1 = param_2[0x49];
    *(unsigned int *)(param_1 + 0x454) = 0;
    *(unsigned int *)(param_1 + 0x450) = uVar1;
    fn_82267628(*(unsigned int *)(param_1 + 0x5c0),param_1 + 0x380);
  }
  return param_1;
}

