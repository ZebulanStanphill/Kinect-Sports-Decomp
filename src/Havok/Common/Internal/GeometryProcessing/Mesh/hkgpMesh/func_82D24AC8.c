extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82D2D320();
extern unsigned int iStack_68;
extern unsigned int uStack_6c;


__int64 fn_82D24AC8(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  unsigned int *puVar7;
  int *piVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  int iVar12;
  __int64 lVar13;
  int iVar14;
  unsigned int *puVar15;
  int iVar16;
  __int64 lVar17;
  int *piStack_70;
  unsigned int uStack_6c;
  int iStack_68;
  
  uVar9 = 0xffffffffffffffff;
  for (puVar1 = *(unsigned int **)(param_1 + 0x2c); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    if ((int)uVar9 < (int)puVar1[0xc]) {
      uVar9 = (unsigned __int64)(unsigned int)puVar1[0xc];
    }
  }
  piStack_70 = (int *)0x0;
  lVar17 = uVar9 + 1;
  uStack_6c = 0;
  lVar11 = 0;
  iStack_68 = -1;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(&piStack_70,*(unsigned int *)(iVar4 + 0x10),0);
  for (puVar1 = *(unsigned int **)(param_1 + 0x2c); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    puVar15 = puVar1 + 1;
    lVar13 = 3;
    do {
      piVar5 = (int *)fn_82CEA280(&piStack_70,puVar15[1],0);
      if (piVar5 == (int *)0x0) {
        iVar4 = fn_82CE5410();
        piVar5 = (int *)(**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0xc);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = -0x80000000;
        }
        iVar4 = fn_82CE5410();
        iVar6 = (int)lVar17;
        if ((int)(piVar5[2] & 0x3fffffffU) < iVar6) {
          lVar10 = ((unsigned __int64)(unsigned int)piVar5[2] & 0x3fffffff) << 1;
          if ((int)lVar10 <= iVar6) {
            lVar10 = lVar17;
          }
          fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),piVar5,lVar10,4);
        }
        uVar9 = lVar17 - (unsigned __int64)(unsigned int)piVar5[1];
        if (0 < (__int64)uVar9) {
          puVar7 = (unsigned int *)(piVar5[1] * 4 + *piVar5 + -4);
          uVar3 = uVar9 & 0xffffffff;
          while (uVar3 != 0) {
            puVar7 = puVar7 + 1;
            *puVar7 = 0;
            uVar9 = uVar9 - 1;
            uVar3 = uVar9;
          }
        }
        piVar5[1] = iVar6;
        uVar2 = puVar15[1];
        iVar4 = fn_82CE5410();
        fn_82CEA160(&piStack_70,*(unsigned int *)(iVar4 + 0x10),uVar2,piVar5);
      }
      lVar13 = lVar13 + -1;
      puVar15 = puVar15 + 1;
      *(unsigned int *)(puVar1[0xc] * 4 + *piVar5) = *puVar15;
    } while (lVar13 != 0);
  }
  iVar4 = 0;
  piVar5 = piStack_70;
  if (-1 < iStack_68) {
    do {
      if (*piVar5 != -1) break;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar4 <= iStack_68);
  }
  iVar6 = iStack_68;
  piVar5 = piStack_70;
  if (iVar4 <= iStack_68) {
    do {
      iVar14 = 0;
      iVar12 = 0;
      piVar8 = (int *)piVar5[iVar4 * 2 + 1];
      if (0 < piVar8[1]) {
        iVar16 = 0;
        do {
          piVar5 = (int *)(iVar16 + *piVar8);
          if (*(int *)(iVar16 + *piVar8) != 0) {
            if (iVar14 == 0) {
              iVar14 = *piVar5;
            }
            else {
              iVar6 = fn_82D2D320(param_1 + 8,iVar14);
              *piVar5 = iVar6;
              lVar11 = lVar11 + 1;
            }
          }
          iVar12 = iVar12 + 1;
          iVar16 = iVar16 + 4;
          iVar6 = iStack_68;
          piVar5 = piStack_70;
        } while (iVar12 < piVar8[1]);
      }
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar6) {
        piVar8 = piVar5 + iVar4 * 2;
        do {
          if (*piVar8 != -1) break;
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar4 <= iVar6);
      }
    } while (iVar4 <= iVar6);
  }
  for (puVar1 = *(unsigned int **)(param_1 + 0x2c); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)*puVar1) {
    puVar15 = puVar1 + 1;
    lVar17 = 3;
    do {
      piVar5 = (int *)fn_82CEA280(&piStack_70,puVar15[1],0);
      lVar17 = lVar17 + -1;
      puVar15 = puVar15 + 1;
      *puVar15 = *(unsigned int *)(puVar1[0xc] * 4 + *piVar5);
    } while (lVar17 != 0);
    iVar6 = iStack_68;
    piVar5 = piStack_70;
  }
  iVar4 = 0;
  piVar8 = piVar5;
  if (-1 < iVar6) {
    do {
      if (*piVar8 != -1) break;
      iVar4 = iVar4 + 1;
      piVar8 = piVar8 + 2;
    } while (iVar4 <= iVar6);
  }
  if (iVar4 <= iVar6) {
    do {
      puVar1 = (unsigned int *)piVar5[iVar4 * 2 + 1];
      if (puVar1 != (unsigned int *)0x0) {
        iVar6 = fn_82CE5410();
        piVar5 = *(int **)(iVar6 + 0x10);
        puVar1[1] = 0;
        if ((puVar1[2] & 0x80000000) == 0) {
          (**(int (***)())(*piVar5 + 0x10))(piVar5,*puVar1,puVar1[2] & 0x3fffffff,4);
        }
        *puVar1 = 0;
        puVar1[2] = 0x80000000;
        iVar6 = fn_82CE5410();
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),puVar1,0xc);
        iVar6 = iStack_68;
        piVar5 = piStack_70;
      }
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar6) {
        piVar8 = piVar5 + iVar4 * 2;
        do {
          if (*piVar8 != -1) break;
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar4 <= iVar6);
      }
    } while (iVar4 <= iVar6);
  }
  iVar4 = fn_82CE5410();
  fn_82CEA4B8(&piStack_70,*(unsigned int *)(iVar4 + 0x10));
  fn_82BA02A8(&piStack_70);
  return lVar11;
}

