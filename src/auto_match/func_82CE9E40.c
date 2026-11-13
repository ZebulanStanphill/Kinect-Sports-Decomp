extern unsigned int *auStack_70;
extern int fn_82CE5410();
extern int fn_82CE6310();


unsigned int * fn_82CE9E40(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  __int64 lVar15;
  unsigned int *puVar17;
  __int64 lVar16;
  unsigned int auStack_70;
  
  puVar11 = param_1 + 2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  iVar3 = fn_82CE5410();
  uVar5 = param_1[3];
  uVar1 = param_2[3];
  uVar12 = (unsigned __int64)uVar1;
  uVar10 = (unsigned __int64)uVar5;
  if ((int)uVar1 <= (int)uVar5) {
    uVar10 = uVar12;
  }
  if ((int)(param_1[4] & 0x3fffffff) < (int)uVar1) {
    uVar13 = ((unsigned __int64)(unsigned int)param_1[4] & 0x3fffffff) << 1;
    if ((int)uVar13 <= (int)uVar1) {
      uVar13 = uVar12;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),puVar11,uVar13,0xc);
  }
  lVar8 = uVar5 - uVar12;
  if (0 < lVar8) {
    lVar15 = (uVar12 + ((unsigned __int64)uVar1 & 0x7fffffff) * 2 & 0x3fffffff) * 4 + (unsigned __int64)*puVar11 +
             -4;
    do {
      iVar4 = fn_82CE5410();
      iVar3 = (int)lVar15;
      piVar2 = *(int **)(iVar4 + 0x10);
      *(unsigned int *)(iVar3 + 8) = 0;
      if ((*(unsigned int *)(iVar3 + 0xc) & 0x80000000) == 0) {
        (**(int (***)())(*piVar2 + 0x10))
                  (piVar2,*(unsigned int *)(iVar3 + 4),*(unsigned int *)(iVar3 + 0xc) & 0x3fffffff,4);
      }
      *(unsigned int *)(iVar3 + 4) = 0;
      lVar8 = lVar8 + -1;
      lVar15 = lVar15 + 0xc;
      *(unsigned int *)lVar15 = 0x80000000;
    } while (lVar8 != 0);
  }
  if (0 < (int)uVar10) {
    puVar14 = (unsigned int *)(param_2[2] + 4);
    puVar17 = (unsigned int *)(*puVar11 + 8);
    uVar13 = uVar10;
    do {
      iVar3 = fn_82CE5410();
      uVar5 = *puVar17 & 0x3fffffff;
      piVar2 = *(int **)(iVar3 + 0x10);
      if ((int)uVar5 < (int)*puVar14) {
        if ((*puVar17 & 0x80000000) == 0) {
          (**(int (***)())(*piVar2 + 0x10))(piVar2,puVar17[-2],uVar5,4);
        }
        auStack_70 = *puVar14;
        uVar5 = (**(int (***)())(*piVar2 + 0xc))(piVar2,&auStack_70,4);
        puVar17[-2] = uVar5;
        *puVar17 = auStack_70;
      }
      uVar5 = *puVar14;
      uVar7 = (unsigned __int64)uVar5;
      puVar6 = (unsigned int *)puVar17[-2];
      puVar17[-1] = uVar5;
      if (0 < (int)uVar5) {
        iVar3 = puVar14[-1] - (int)puVar6;
        do {
          *puVar6 = *(unsigned int *)(iVar3 + (int)puVar6);
          puVar6 = puVar6 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 3;
      puVar17 = puVar17 + 3;
    } while (uVar13 != 0);
  }
  lVar15 = uVar12 - uVar10;
  lVar9 = (uVar10 + (uVar10 & 0x7fffffff) * 2 & 0x3fffffff) * 4;
  lVar8 = lVar9 + (unsigned __int64)(unsigned int)param_2[2];
  lVar9 = lVar9 + (unsigned __int64)*puVar11;
  if (0 < lVar15) {
    lVar16 = lVar9 + 4;
    iVar3 = (int)lVar8;
    do {
      if (lVar16 != 4) {
        piVar2 = (int *)lVar16;
        piVar2[-1] = 0;
        *piVar2 = 0;
        piVar2[1] = -0x80000000;
        auStack_70 = *(unsigned int *)((iVar3 - (int)lVar9) + (int)piVar2);
        if (auStack_70 == 0) {
          puVar6 = (unsigned int *)0x0;
          uVar10 = 0;
LAB_82cea088:
          auStack_70 = 0x80000000;
        }
        else {
          iVar4 = fn_82CE5410();
          puVar6 = (unsigned int *)
                   (**(int (***)())(**(int **)(iVar4 + 0x10) + 0xc))
                             (*(int **)(iVar4 + 0x10),&auStack_70,4);
          uVar10 = (unsigned __int64)auStack_70;
          if (auStack_70 == 0) goto LAB_82cea088;
        }
        piVar2[1] = auStack_70;
        piVar2[-1] = (int)puVar6;
        *piVar2 = (int)uVar10;
        if (0 < (int)uVar10) {
          iVar4 = *(int *)lVar8 - (int)puVar6;
          do {
            *puVar6 = *(unsigned int *)(iVar4 + (int)puVar6);
            puVar6 = puVar6 + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      lVar15 = lVar15 + -1;
      lVar16 = lVar16 + 0xc;
      lVar8 = lVar8 + 0xc;
    } while (lVar15 != 0);
  }
  param_1[3] = uVar1;
  return param_1;
}

