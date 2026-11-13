typedef unsigned char bool;
extern int fn_82959138();
extern int fn_82975BB8();
extern unsigned int lbl_82005758;


unsigned __int64 fn_82959E40(int param_1,unsigned int *param_2)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  double dVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  int *piVar11;
  unsigned int uVar12;
  int *piVar13;
  
  bVar1 = param_2 == (unsigned int *)0x0;
  if (bVar1) {
    param_2 = *(unsigned int **)(param_1 + 0x104);
  }
  bVar1 = !bVar1;
  uVar2 = *param_2;
  if ((uVar2 & 0xfff00000) == 0x20400000) {
    piVar9 = (int *)param_2[2];
    iVar3 = *(int *)(param_1 + 0x14);
    piVar11 = piVar9 + (uVar2 & 0xfffff);
    piVar13 = piVar11;
    if (((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*piVar11 * 4 + iVar3) + 4) * 4 +
                            *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0) ||
       (iVar6 = *piVar9, piVar13 = piVar9, piVar9 = piVar11,
       (*(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar6 * 4 + iVar3) + 4) * 4 + *(int *)(param_1 + 0x10))
                 + 4) & 0x100) != 0)) {
      puVar4 = *(unsigned int **)(param_1 + 0x104);
      piVar11 = piVar9;
      if (puVar4 != param_2) {
        piVar11 = (int *)puVar4[2];
      }
      uVar12 = 0;
      *(unsigned int *)(param_1 + 0x160) = 0;
      dVar7 = lbl_82005758;
      if ((uVar2 & 0xfffff) != 0) {
        iVar6 = (int)piVar13 - (int)piVar11;
        do {
          if (*(double *)(*(int *)(*(int *)(iVar6 + (int)piVar11) * 4 + iVar3) + 0x20) != dVar7) {
            return 1;
          }
          if ((!bVar1) && ((*(unsigned int *)(*(int *)(*piVar11 * 4 + iVar3) + 0x3c) & 0x1f0000) != 0x80000)
             ) {
            return 1;
          }
          puVar5 = *(unsigned int **)(*piVar11 * 4 + iVar3);
          if (((puVar5[0xf] & 0x200) == 0) && (((-(unsigned int)bVar1 & 0xfffffffc) + 0x18 & *puVar5) == 0))
          {
            *(unsigned int *)(param_1 + 0x160) = 1;
          }
          uVar12 = uVar12 + 1;
          piVar11 = piVar11 + 1;
        } while (uVar12 < (uVar2 & 0xfffff));
      }
      if (bVar1) {
        piVar9 = (int *)puVar4[2];
        uVar10 = 0x10000;
        uVar8 = 0;
      }
      else {
        param_2 = (unsigned int *)0x0;
        uVar10 = 0x90000;
        uVar8 = 0x80000;
      }
      uVar8 = fn_82959138(param_1,0x10000,uVar8,piVar9,uVar10,param_2,0);
      if (*(int *)(param_1 + 0x160) == 2) {
        fn_82975BB8(param_1,*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c),0x125e,
                          0xffffffff820380a8);
        return uVar8;
      }
      return uVar8;
    }
  }
  return 1;
}

