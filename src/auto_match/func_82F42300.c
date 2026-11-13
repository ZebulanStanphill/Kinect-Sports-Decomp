void fn_82F42300(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  
  uVar15 = 0;
  lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x3fffffff) * 4;
  uVar11 = (param_3 - param_2 & 0xfffffff) * 0x10;
  uVar16 = 0;
  uVar18 = 0;
  uVar13 = lVar8 + 0x10;
  uVar17 = 0;
  iVar7 = (int)param_2;
  uVar12 = uVar11;
  if (iVar7 == 0) {
    uVar12 = uVar11 + 0x10;
  }
  if ((param_3 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x2d4)) {
    uVar12 = uVar12 + 0x10;
    uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 800) + (param_3 & 0xfffffff) * -0x10 + uVar11 &
             0xfffffffe;
  }
  if (*(int *)(param_1 + 0x5268) != 0) {
    iVar3 = *(int *)(param_1 + 0x31c);
    iVar9 = (int)lVar8;
    if (*(int *)(param_1 + 0x6de4) == 0) {
      lVar8 = ((__int64)iVar3 * (__int64)iVar7 & 0x7ffffffU) * 0x20 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x1abc);
      lVar4 = ((__int64)iVar9 * (__int64)iVar7 & 0x1fffffffU) * 8 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x1a90);
    }
    else {
      lVar8 = (__int64)((int)((param_2 & 0xffffffff) << 5) + 1) * (__int64)iVar3 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x1abc);
      lVar4 = (__int64)((int)((param_2 & 0xffffffff) << 3) + 1) * (__int64)iVar9 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x1a90);
    }
    (**(int (***)())(param_1 + 0x1bac))
              (lVar8,iVar3,iVar3 << 1,lVar4,
               ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x1fffffff) << 3,uVar11);
  }
  iVar3 = *(int *)(param_1 + 0x6de8);
  iVar14 = (int)uVar13;
  iVar9 = (int)uVar12 >> 1;
  if ((iVar3 == 0) && (*(int *)(param_1 + 0x4f30) != 1)) {
    if (iVar7 == 0) {
      uVar19 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98);
      if (*(int *)(param_1 + 0x6d8c) != 0) {
        uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
        uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
        uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4);
        uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8);
      }
    }
    else {
      iVar7 = iVar7 + 1;
      lVar8 = ((__int64)iVar7 * (__int64)iVar14 & 0x1fffffffU) * 8;
      uVar19 = ((__int64)*(int *)(param_1 + 0x564) * (__int64)iVar7 & 0xfffffffU) * 0x10 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar8;
      if (*(int *)(param_1 + 0x6d8c) != 0) {
        lVar4 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)iVar7 & 0x1fffffffU) * 8;
        uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4) + lVar8;
        uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar4;
        uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar4;
        uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8) + lVar8;
      }
    }
    lVar4 = (uVar13 & 0x7fffffff) << 1;
    (**(int (***)())(param_1 + 0x1bac))
              (uVar19,*(int *)(param_1 + 0x564) >> 1,*(int *)(param_1 + 0x564),uVar11,lVar4,uVar12);
    lVar8 = (__int64)(*(int *)(param_1 + 0x564) >> 1);
    (**(int (***)())(param_1 + 0x1bac))
              (lVar8 + uVar19,lVar8,*(int *)(param_1 + 0x564),uVar11 + uVar13,lVar4,uVar12);
    if (*(int *)(param_1 + 0x6d8c) == 0) {
      return;
    }
    (**(int (***)())(param_1 + 0x1bb0))
              (uVar16,*(int *)(param_1 + 0x568) >> 1,*(int *)(param_1 + 0x568),uVar18,lVar4,iVar9);
    lVar8 = (__int64)(*(int *)(param_1 + 0x568) >> 1);
    (**(int (***)())(param_1 + 0x1bb0))
              (lVar8 + uVar16,lVar8,*(int *)(param_1 + 0x568),uVar18 + uVar13,lVar4,iVar9);
    (**(int (***)())(param_1 + 0x1bb0))
              (uVar15,*(int *)(param_1 + 0x568) >> 1,*(int *)(param_1 + 0x568),uVar17,lVar4,iVar9);
    iVar7 = *(int *)(param_1 + 0x568);
    uVar17 = uVar17 + uVar13;
    lVar8 = (__int64)(iVar7 >> 1);
    uVar15 = lVar8 + uVar15;
    goto LAB_82f42978;
  }
  if (*(int *)(param_1 + 0xaf0) == 2) {
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x1ae8) == 0) {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x564);
      iVar10 = *(int *)(param_1 + 0x6d8c);
      *(unsigned int *)(param_1 + 0x1ae8) = 0;
      if (*(int *)(param_1 + 0x6de4) == 0) {
        lVar4 = (__int64)((int)((param_2 & 0xffffffff) << 3) + 1) * (__int64)iVar14;
        lVar8 = ((__int64)iVar3 * (__int64)iVar7 & 0xfffffffU) * 0x10 + (__int64)(iVar3 >> 1) +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x1e7c);
        uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar4;
        if (iVar10 != 0) {
          uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4) + lVar4;
          lVar5 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)iVar7 & 0x1fffffffU) * 8 +
                  (__int64)(*(int *)(param_1 + 0x568) >> 1);
          uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8) + lVar4;
          uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e80) + lVar5;
          uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e84) + lVar5;
        }
      }
      else {
        lVar4 = ((__int64)iVar14 * (__int64)iVar7 & 0x1fffffffU) * 8;
        lVar8 = ((__int64)iVar3 * (__int64)iVar7 & 0xfffffffU) * 0x10 +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x1e7c);
        uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar4;
        if (iVar10 != 0) {
          lVar5 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)iVar7 & 0x1fffffffU) * 8;
          uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4) + lVar4;
          uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e80) + lVar5;
          uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1e84) + lVar5;
          uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8) + lVar4;
        }
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x564);
      iVar6 = (int)((param_2 & 0x7ffffff) << 5);
      if (*(int *)(param_1 + 0x6de4) == 0) {
        iVar10 = *(int *)(param_1 + 0x6d8c);
        lVar4 = (__int64)((int)((param_2 & 0xffffffff) << 3) + 1) * (__int64)iVar14;
        lVar8 = (__int64)(iVar6 + -0x1f) * (__int64)(iVar3 >> 1) +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + -0x20;
        uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a9c) + lVar4;
        if (iVar10 != 0) {
          uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1aac);
          iVar14 = *(int *)(param_1 + 0x568) >> 1;
          uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab0);
          iVar6 = (int)((param_2 & 0xffffffff) << 4) + -0xf;
LAB_82f428a4:
          uVar17 = uVar17 + lVar4;
          uVar18 = uVar18 + lVar4;
          uVar15 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + (__int64)iVar14 * (__int64)iVar6) -
                   0x10;
          uVar16 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + (__int64)iVar14 * (__int64)iVar6) -
                   0x10;
        }
      }
      else {
        iVar10 = *(int *)(param_1 + 0x6d8c);
        lVar4 = ((__int64)iVar14 * (__int64)iVar7 & 0x1fffffffU) * 8;
        lVar8 = (__int64)(iVar6 + -0x20) * (__int64)(iVar3 >> 1) +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + -0x20;
        uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a9c) + lVar4;
        if (iVar10 != 0) {
          iVar14 = *(int *)(param_1 + 0x568);
          uVar1 = *(unsigned int *)(param_1 + 0x1aac);
          uVar2 = *(unsigned int *)(param_1 + 0x1ab0);
LAB_82f4289c:
          iVar14 = iVar14 >> 1;
          uVar17 = (unsigned __int64)uVar2;
          uVar18 = (unsigned __int64)uVar1;
          iVar6 = (int)((param_2 & 0xffffffff) << 4) + -0x10;
          goto LAB_82f428a4;
        }
      }
    }
  }
  else if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x1ae8) == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x564);
    iVar10 = *(int *)(param_1 + 0x6d8c);
    if (*(int *)(param_1 + 0x6de4) == 0) {
      lVar4 = (__int64)((int)((param_2 & 0xffffffff) << 3) + 1) * (__int64)iVar14;
      lVar8 = ((__int64)iVar3 * (__int64)iVar7 & 0xfffffffU) * 0x10 + (__int64)(iVar3 >> 1) +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4) + lVar4;
        lVar5 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)iVar7 & 0x1fffffffU) * 8 +
                (__int64)(*(int *)(param_1 + 0x568) >> 1);
        uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8) + lVar4;
        uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar5;
        uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar5;
      }
    }
    else {
      lVar4 = ((__int64)iVar14 * (__int64)iVar7 & 0x1fffffffU) * 8;
      lVar8 = ((__int64)iVar3 * (__int64)iVar7 & 0xfffffffU) * 0x10 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        lVar5 = ((__int64)*(int *)(param_1 + 0x568) * (__int64)iVar7 & 0x1fffffffU) * 8;
        uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4) + lVar4;
        uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar5;
        uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar5;
        uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8) + lVar4;
      }
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x564);
    iVar6 = (int)((param_2 & 0x7ffffff) << 5);
    if (*(int *)(param_1 + 0x6de4) == 0) {
      iVar10 = *(int *)(param_1 + 0x6d8c);
      lVar4 = (__int64)((int)((param_2 & 0xffffffff) << 3) + 1) * (__int64)iVar14;
      lVar8 = (__int64)(iVar6 + -0x1f) * (__int64)(iVar3 >> 1) +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + -0x20;
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        uVar18 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab4);
        iVar14 = *(int *)(param_1 + 0x568) >> 1;
        uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1ab8);
        iVar6 = (int)((param_2 & 0xffffffff) << 4) + -0xf;
        goto LAB_82f428a4;
      }
    }
    else {
      iVar10 = *(int *)(param_1 + 0x6d8c);
      lVar4 = ((__int64)iVar14 * (__int64)iVar7 & 0x1fffffffU) * 8;
      lVar8 = (__int64)(iVar6 + -0x20) * (__int64)(iVar3 >> 1) +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) + -0x20;
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1a98) + lVar4;
      if (iVar10 != 0) {
        iVar14 = *(int *)(param_1 + 0x568);
        uVar1 = *(unsigned int *)(param_1 + 0x1ab4);
        uVar2 = *(unsigned int *)(param_1 + 0x1ab8);
        goto LAB_82f4289c;
      }
    }
  }
  if ((uVar11 & 0xffffffff) == 0) {
    return;
  }
  if (iVar7 != 0) {
    lVar4 = (uVar13 & 0x1fffffff) * 8;
    uVar11 = lVar4 + uVar11;
    lVar8 = ((unsigned __int64)(unsigned int)(iVar3 >> 1) & 0x7ffffff) * 0x20 + lVar8;
    if (iVar10 != 0) {
      uVar18 = lVar4 + uVar18;
      uVar17 = lVar4 + uVar17;
      lVar4 = ((unsigned __int64)(unsigned int)(*(int *)(param_1 + 0x568) >> 1) & 0xfffffff) * 0x10;
      uVar16 = lVar4 + uVar16;
      uVar15 = lVar4 + uVar15;
    }
  }
  lVar4 = (uVar13 & 0x7fffffff) << 1;
  (**(int (***)())(param_1 + 0x1bac))(lVar8,iVar3 >> 1,iVar3,uVar11,lVar4,uVar12);
  if (*(int *)(param_1 + 0x6d8c) == 0) {
    return;
  }
  (**(int (***)())(param_1 + 0x1bb0))
            (uVar16,*(int *)(param_1 + 0x568) >> 1,*(int *)(param_1 + 0x568),uVar18,lVar4,iVar9);
  iVar7 = *(int *)(param_1 + 0x568);
  lVar8 = (__int64)(iVar7 >> 1);
LAB_82f42978:
  (**(int (***)())(param_1 + 0x1bb0))(uVar15,lVar8,iVar7,uVar17,lVar4,iVar9);
  return;
}

