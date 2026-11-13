#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_80;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA0F8();
extern int fn_82CEA610();
extern int fn_82CEA650();
extern int fn_82CEA6F8();
extern int fn_82CEA7A8();
extern int fn_82CEA8E8();
extern unsigned int iStack_68;
extern unsigned int uStack_78;


void fn_83088640(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  unsigned int *puVar11;
  int *piVar12;
  unsigned int uVar13;
  int iVar14;
  __int64 lVar15;
  unsigned int auStack_80;
  unsigned __int64 uStack_78;
  int aiStack_70 [2];
  int iStack_68;
  
  iVar5 = param_2[1];
  iVar14 = param_1[1];
  if (iVar5 <= param_1[1]) {
    iVar14 = iVar5;
  }
  if (iVar14 < 0x20) {
    lVar15 = 0;
    iVar14 = 0;
    if (0 < iVar5) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        iVar7 = param_1[1];
        iVar8 = 0;
        if (0 < iVar7) {
          piVar12 = (int *)*param_1;
          iVar9 = iVar6 + *param_2;
          iVar1 = *(int *)(iVar6 + *param_2);
          do {
            if (((*piVar12 == iVar1) && (piVar12[1] == *(int *)(iVar9 + 4))) ||
               ((piVar12[1] == iVar1 && (*piVar12 == *(int *)(iVar9 + 4))))) break;
            iVar8 = iVar8 + 1;
            piVar12 = piVar12 + 2;
          } while (iVar8 < param_1[1]);
        }
        if (iVar8 == iVar7) {
          if ((int)lVar15 != iVar14) {
            iVar7 = *param_2;
            *(unsigned int *)(iVar7 + iVar5) = *(unsigned int *)(iVar7 + iVar6);
            *(unsigned int *)(iVar7 + iVar5 + 4) = *(unsigned int *)(iVar7 + iVar6 + 4);
          }
          lVar15 = lVar15 + 1;
          iVar5 = iVar5 + 8;
        }
        else {
          param_1[1] = iVar7 + -1;
          puVar11 = (unsigned int *)(iVar8 * 8 + *param_1);
          iVar7 = ((iVar7 + -1) - iVar8) * 8;
          if (0 < iVar7) {
            lVar10 = (unsigned __int64)(iVar7 - 1U >> 2) + 1;
            do {
              *puVar11 = puVar11[2];
              puVar11 = puVar11 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
        }
        iVar14 = iVar14 + 1;
        iVar6 = iVar6 + 8;
      } while (iVar14 < param_2[1]);
    }
    iVar5 = fn_82CE5410();
    iVar14 = (int)lVar15;
    if ((int)(param_2[2] & 0x3fffffffU) < iVar14) {
      lVar10 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
      if ((int)lVar10 <= iVar14) {
        lVar10 = lVar15;
      }
      fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_2,lVar10,8);
    }
    param_2[1] = iVar14;
    return;
  }
  uVar3 = fn_82CEA0F8();
  auStack_80 = (unsigned int)uVar3;
  if (auStack_80 == 0) {
    uVar4 = 0;
  }
  else {
    iVar5 = fn_82CE5410();
    uVar4 = (**(int (***)())(**(int **)(iVar5 + 0xc) + 0xc))(*(int **)(iVar5 + 0xc),&auStack_80,1);
    uVar13 = auStack_80;
    if (auStack_80 != 0) goto LAB_83088824;
  }
  uVar13 = 0x80000000;
LAB_83088824:
  fn_82CEA610(aiStack_70,uVar4,uVar3);
  iVar5 = 0;
  if (0 < param_1[1]) {
    iVar14 = 0;
    do {
      uVar3 = *(unsigned __int64 *)(*param_1 + iVar14);
      uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uVar3 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      if ((((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF) < (((unsigned __int64)(uStack_78) >> 0) & 0xFFFFFFFF)) {
        uVar3 = CONCAT44((((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF),(((unsigned __int64)(uStack_78) >> 0) & 0xFFFFFFFF));
      }
      uStack_78 = uVar3;
      uVar3 = uStack_78;
      iVar6 = fn_82CEA6F8(aiStack_70,uStack_78);
      if (iStack_68 < iVar6) {
        iVar6 = fn_82CE5410();
        fn_82CEA650(aiStack_70,*(unsigned int *)(iVar6 + 0x10),uVar3,iVar5 << 8 | 1);
      }
      else {
        iVar6 = iVar6 * 0x10 + aiStack_70[0];
        *(__int64 *)(iVar6 + 8) = *(__int64 *)(iVar6 + 8) + 1;
        *(unsigned int *)(*param_1 + iVar14) = 0;
      }
      iVar5 = iVar5 + 1;
      iVar14 = iVar14 + 8;
    } while (iVar5 < param_1[1]);
  }
  lVar15 = 0;
  iVar5 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    iVar14 = 0;
    do {
      uVar3 = *(unsigned __int64 *)(iVar6 + *param_2);
      uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      uStack_78 = ((((unsigned __int64)(uStack_78)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uVar3 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      if ((((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF) < (((unsigned __int64)(uStack_78) >> 0) & 0xFFFFFFFF)) {
        uVar3 = CONCAT44((((unsigned __int64)(uStack_78) >> 32) & 0xFFFFFFFF),(((unsigned __int64)(uStack_78) >> 0) & 0xFFFFFFFF));
      }
      uStack_78 = uVar3;
      iVar7 = fn_82CEA6F8(aiStack_70,uStack_78);
      if (iStack_68 < iVar7) {
        iVar7 = *param_2;
        lVar15 = lVar15 + 1;
        puVar11 = (unsigned int *)(iVar7 + iVar14);
        iVar14 = iVar14 + 8;
        *puVar11 = *(unsigned int *)(iVar7 + iVar6);
        puVar11[1] = *(unsigned int *)(iVar7 + iVar6 + 4);
      }
      else {
        iVar8 = iVar7 * 0x10 + aiStack_70[0];
        lVar10 = *(__int64 *)(iVar8 + 8);
        uVar2 = (unsigned int)lVar10;
        if ((uVar2 & 0xff) < 2) {
          fn_82CEA7A8(aiStack_70,iVar7);
          *(unsigned int *)((uVar2 >> 5 & 0x7fffff8) + *param_1) = 0;
        }
        else {
          *(__int64 *)(iVar8 + 8) = lVar10 + -1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (iVar5 < param_2[1]);
  }
  iVar5 = fn_82CE5410();
  iVar14 = (int)lVar15;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar14) {
    lVar10 = ((unsigned __int64)(unsigned int)param_2[2] & 0x3fffffff) << 1;
    if ((int)lVar10 <= iVar14) {
      lVar10 = lVar15;
    }
    fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_2,lVar10,8);
  }
  param_2[1] = iVar14;
  lVar15 = 0;
  iVar5 = 0;
  if (0 < param_1[1]) {
    iVar6 = 0;
    iVar14 = 0;
    do {
      iVar7 = *param_1;
      if (*(int *)(iVar7 + iVar6) != 0) {
        puVar11 = (unsigned int *)(iVar7 + iVar14);
        lVar15 = lVar15 + 1;
        iVar14 = iVar14 + 8;
        *puVar11 = *(unsigned int *)(iVar7 + iVar6);
        puVar11[1] = ((unsigned int *)(iVar7 + iVar6))[1];
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (iVar5 < param_1[1]);
  }
  iVar5 = fn_82CE5410();
  iVar14 = (int)lVar15;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar14) {
    lVar10 = ((unsigned __int64)(unsigned int)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar10 <= iVar14) {
      lVar10 = lVar15;
    }
    fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_1,lVar10,8);
  }
  param_1[1] = iVar14;
  iVar5 = fn_82CE5410();
  fn_82CEA8E8(aiStack_70,*(unsigned int *)(iVar5 + 0x10));
  fn_82BA02A8(aiStack_70);
  iVar5 = fn_82CE5410();
  if ((uVar13 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar5 + 0xc) + 0x10))
              (*(int **)(iVar5 + 0xc),uVar4,uVar13 & 0x3fffffff,1);
  }
  return;
}

