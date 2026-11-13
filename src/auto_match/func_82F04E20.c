typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F04030();
extern int fn_82F0D688();
extern int fn_82F0F9A0();


void fn_82F04E20(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  
  bVar1 = false;
  if (param_2 == 0) {
    if ((*(unsigned int *)(param_1 + 0x526c) & 1) == 0) {
      if (((*(unsigned int *)(param_1 + 0x526c) & 4) != 0) && (*(int *)(param_1 + 0x6f50) == 0)) {
        uVar3 = *(unsigned int *)(param_1 + 0x550);
        iVar2 = *(int *)(param_1 + 0x564);
        uVar4 = *(unsigned int *)(param_1 + 0x528c);
        uVar5 = *(unsigned int *)(param_1 + 0x5288);
        uVar6 = *(unsigned int *)(param_1 + 0x5284);
        goto LAB_82f05114;
      }
    }
    else {
      uVar3 = *(unsigned int *)(param_1 + 0x550);
      iVar2 = *(int *)(param_1 + 0x564);
      uVar4 = *(unsigned int *)(param_1 + 0x5280);
      uVar5 = *(unsigned int *)(param_1 + 0x527c);
      uVar6 = *(unsigned int *)(param_1 + 0x5278);
LAB_82f05114:
      bVar1 = true;
      fn_82F04030(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),
                        *(unsigned int *)(param_1 + 0x1c),uVar6,uVar5,uVar4,iVar2 >> 1,
                        ((unsigned __int64)uVar3 + 0x28 & 0x7fffffff) << 1);
    }
    if ((*(unsigned int *)(param_1 + 0x526c) & 2) != 0) {
      lVar11 = (__int64)(*(int *)(param_1 + 0x564) >> 1);
      lVar12 = (__int64)(*(int *)(param_1 + 0x568) >> 1);
      fn_82F04030((unsigned __int64)*(unsigned int *)(param_1 + 0x14) + lVar11,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar12,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar12,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x5278) + lVar11,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x527c) + lVar12,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x5280) + lVar12,lVar11,
                        ((unsigned __int64)*(unsigned int *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
      goto LAB_82f05048;
    }
    if (((*(unsigned int *)(param_1 + 0x526c) & 8) != 0) && (*(int *)(param_1 + 0x6f50) != 0)) {
      lVar11 = (__int64)(*(int *)(param_1 + 0x564) >> 1);
      lVar12 = (__int64)(*(int *)(param_1 + 0x568) >> 1);
      fn_82F04030((unsigned __int64)*(unsigned int *)(param_1 + 0x14) + lVar11,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar12,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar12,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x5284) + lVar11,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x5288) + lVar12,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x528c) + lVar12,lVar11,
                        ((unsigned __int64)*(unsigned int *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
      goto LAB_82f05048;
    }
  }
  else {
    if (*(int *)(param_1 + 0x6de8) == 0) {
      if ((*(unsigned int *)(param_1 + 0x526c) & 1) != 0) {
        fn_82F04030(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0x18),
                          *(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x5278),
                          *(unsigned int *)(param_1 + 0x527c),*(unsigned int *)(param_1 + 0x5280),
                          *(int *)(param_1 + 0x564) >> 1,
                          ((unsigned __int64)*(unsigned int *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
        *(unsigned int *)(param_1 + 0x526c) = *(unsigned int *)(param_1 + 0x526c) ^ 1;
      }
      if ((*(unsigned int *)(param_1 + 0x526c) & 2) != 0) {
        lVar11 = (__int64)(*(int *)(param_1 + 0x564) >> 1);
        lVar12 = (__int64)(*(int *)(param_1 + 0x568) >> 1);
        fn_82F04030((unsigned __int64)*(unsigned int *)(param_1 + 0x14) + lVar11,
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar12,
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar12,
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x5278) + lVar11,
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x527c) + lVar12,
                          (unsigned __int64)*(unsigned int *)(param_1 + 0x5280) + lVar12,lVar11,
                          ((unsigned __int64)*(unsigned int *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1);
        *(unsigned int *)(param_1 + 0x526c) = *(unsigned int *)(param_1 + 0x526c) ^ 2;
      }
      goto LAB_82f05048;
    }
    bVar1 = false;
    if ((*(unsigned int *)(param_1 + 0x526c) & 4) != 0) {
      bVar1 = *(int *)(param_1 + 0x6f50) == 0;
      if (bVar1) {
        iVar2 = *(int *)(param_1 + 0x564);
        uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
        uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
        uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x564);
        uVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x578);
        uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) - (unsigned __int64)*(unsigned int *)(param_1 + 0x578);
        uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) - (unsigned __int64)*(unsigned int *)(param_1 + 0x574);
      }
      fn_82F04030(uVar7,uVar8,uVar9,*(unsigned int *)(param_1 + 0x5284),
                        *(unsigned int *)(param_1 + 0x5288),*(unsigned int *)(param_1 + 0x528c),
                        iVar2 >> 1,((unsigned __int64)*(unsigned int *)(param_1 + 0x550) + 0x28 & 0x7fffffff) << 1)
      ;
      *(unsigned int *)(param_1 + 0x526c) = *(unsigned int *)(param_1 + 0x526c) ^ 4;
    }
    if ((*(unsigned int *)(param_1 + 0x526c) & 8) != 0) {
      lVar11 = (__int64)(*(int *)(param_1 + 0x564) >> 1);
      if (*(int *)(param_1 + 0x6f50) == 0) {
        lVar13 = (__int64)(*(int *)(param_1 + 0x568) >> 1);
        uVar3 = *(unsigned int *)(param_1 + 0x550);
        lVar12 = lVar13 - (unsigned __int64)*(unsigned int *)(param_1 + 0x578);
        lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a9c) + lVar12;
        uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a94) - (unsigned __int64)*(unsigned int *)(param_1 + 0x574);
        lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x4a98) + lVar12;
      }
      else {
        uVar3 = *(unsigned int *)(param_1 + 0x550);
        bVar1 = true;
        lVar13 = (__int64)(*(int *)(param_1 + 0x568) >> 1);
        uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
        lVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + lVar13;
        lVar12 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar13;
      }
      fn_82F04030(uVar7 + lVar11,lVar12,lVar10,(unsigned __int64)*(unsigned int *)(param_1 + 0x5284) + lVar11
                        ,(unsigned __int64)*(unsigned int *)(param_1 + 0x5288) + lVar13,
                        (unsigned __int64)*(unsigned int *)(param_1 + 0x528c) + lVar13,lVar11,
                        ((unsigned __int64)uVar3 + 0x28 & 0x7fffffff) << 1);
      *(unsigned int *)(param_1 + 0x526c) = *(unsigned int *)(param_1 + 0x526c) ^ 8;
    }
  }
  if (!bVar1) {
    return;
  }
LAB_82f05048:
  if (*(int *)(param_1 + 0x4f30) == 0) {
    uVar4 = *(unsigned int *)(param_1 + 0x6d54);
    fn_82F0D688(param_1,0);
    *(unsigned int *)(param_1 + 0x6d54) = 0;
    *(unsigned int *)(param_1 + 0x4ed8) = *(unsigned int *)(param_1 + 0x14);
    *(unsigned int *)(param_1 + 0x4edc) = *(unsigned int *)(param_1 + 0x18);
    *(unsigned int *)(param_1 + 0x4ee0) = *(unsigned int *)(param_1 + 0x1c);
    fn_82F0F9A0(param_1,0x17);
    *(unsigned int *)(param_1 + 0x6d54) = uVar4;
    fn_82F0D688(param_1,1);
  }
  return;
}

