extern int fn_8267BE38();
extern int fn_82681F28();
extern int fn_82681F88();
extern int fn_826820F0();


unsigned __int64 fn_82682298(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned __int64 uVar14;
  
  if (((param_1[6] & 0x1000000) == 0) && (uVar11 = (unsigned __int64)*param_1, uVar11 != 0)) {
    uVar10 = 0;
    uVar9 = 0;
    do {
      uVar12 = 0;
      uVar10 = uVar11 + uVar10;
      uVar14 = 0;
      if (uVar11 != 0) {
        do {
          uVar8 = (unsigned int)(uVar14 >> 8) & 0xfffffc;
          uVar5 = (unsigned int)((uVar14 & 0xffffffff) << 2) & 0xffc;
          puVar3 = *(unsigned int **)(*(int *)(param_1[3] + uVar8) + uVar5);
          if (((unsigned int)puVar3 & 1) == 0) {
            uVar1 = puVar3[2];
            if ((uVar1 & 0x70000000) == 0x30000000) {
              puVar3[2] = uVar1 & 0x8fffffff | 0x10000000;
              (**(int (***)())*puVar3)(puVar3,1);
            }
            else {
              puVar3[3] = 0xffffffff;
              puVar3[2] = uVar1 & 0x7fffffff;
            }
            uVar1 = (unsigned int)uVar12;
            uVar4 = uVar12 & 0xffffffff;
            uVar12 = uVar12 + 1;
            *(unsigned int *)
             (*(int *)((uVar1 >> 8 & 0xfffffc) + param_1[3]) + ((unsigned int)(uVar4 << 2) & 0xffc)) =
                 *(unsigned int *)(*(int *)(param_1[3] + uVar8) + uVar5);
          }
          uVar14 = uVar14 + 1;
        } while ((uVar14 & 0xffffffff) < uVar11);
      }
      fn_82681F28(param_1,uVar12);
      uVar11 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        do {
          if (*(int *)(*(int *)(((unsigned int)(uVar11 >> 8) & 0xfffffc) + param_1[3]) +
                      ((unsigned int)((uVar11 & 0xffffffff) << 2) & 0xffc)) != 0) {
            fn_82681F88();
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) < (uVar12 & 0xffffffff));
      }
      uVar11 = 0;
      if ((uVar12 & 0xffffffff) != 0) {
        do {
          iVar13 = *(int *)(*(int *)(((unsigned int)(uVar11 >> 8) & 0xfffffc) + param_1[3]) +
                           ((unsigned int)((uVar11 & 0xffffffff) << 2) & 0xffc));
          if (iVar13 != 0) {
            *(unsigned int *)(iVar13 + 0xc) = 0xffffffff;
            *(unsigned int *)(iVar13 + 8) = *(unsigned int *)(iVar13 + 8) & 0x7fffffff;
            fn_826820F0();
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) < (uVar12 & 0xffffffff));
      }
      fn_82681F28(param_1,0);
      iVar13 = 0;
      param_1[4] = 0xffffffff;
      piVar6 = (int *)param_1[5];
      while (piVar6 != (int *)0x0) {
        piVar2 = (int *)piVar6[1];
        (**(int (***)())(*piVar6 + 4))(piVar6);
        fn_8267BE38(piVar6);
        iVar13 = iVar13 + 1;
        piVar6 = piVar2;
      }
      uVar11 = (unsigned __int64)*param_1;
      uVar9 = iVar13 + uVar9;
      param_1[5] = 0;
    } while (uVar11 != 0);
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = (unsigned int)uVar10;
      uVar8 = (unsigned int)uVar10;
      if ((unsigned __int64)uVar9 <= (uVar10 & 0xffffffff)) {
        uVar8 = uVar9;
      }
      param_2[1] = uVar8;
    }
    uVar7 = 1;
  }
  else {
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    uVar7 = 0;
  }
  return uVar7;
}

