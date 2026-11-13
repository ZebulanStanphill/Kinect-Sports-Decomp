typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_170;
extern int fn_82A9FA30();
extern int fn_82C45168();
extern int fn_82C483D0();
extern int fn_82C498F8();
extern int fn_82C49BB0();
extern int fn_82C4E1D0();
extern int fn_82C562F0();
extern int fn_82C563B0();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_190;


unsigned __int64 fn_82C49C68(int *param_1)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned char *pbVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  __int64 lVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  int iVar14;
  double dVar15;
  unsigned int uStack_190;
  unsigned char *pbStack_18c;
  int aiStack_188 [2];
  __int64 lStack_180;
  unsigned char auStack_170 [368];
  
  pbStack_18c = (unsigned char *)0x0;
  aiStack_188[0] = 1;
  if ((param_1 == (int *)0x0) || (*(__int64 *)*param_1 != 0x1996011419991223)) {
    return 0xfffffffffffffffd;
  }
  iVar2 = *(int *)((__int64 *)*param_1 + 0x5c);
  if (*(int *)(iVar2 + 0x10) != 0) {
    return 0xfffffffffffffffc;
  }
  uVar3 = *(unsigned int *)(iVar2 + 0xd30);
  lVar11 = (unsigned __int64)*(unsigned int *)(iVar2 + 0x6070) + 8;
  fn_82A9FA30(uVar3,0,&pbStack_18c,4,&uStack_190,aiStack_188);
  uVar13 = 0;
  if (aiStack_188[0] != 0) {
    do {
      if ((*(int *)(iVar2 + 0x3cb0) != 7) || (uVar12 = uStack_190 + uVar13, 0xff < uVar12)) break;
      fn_82F68CC0(auStack_170 + uVar13,pbStack_18c);
      fn_82A9FA30(*(unsigned int *)(iVar2 + 0xd30),0,&pbStack_18c,4,&uStack_190,aiStack_188);
      uVar13 = uVar12;
    } while (aiStack_188[0] != 0);
    if (uVar13 != 0) {
      iVar14 = uStack_190 + uVar13;
      if (*(int *)(iVar2 + 0x5da0) < iVar14) {
        if (*(int *)(iVar2 + 0x5da0) != 0) {
          fn_82C563B0(lVar11,*(unsigned int *)(iVar2 + 0x5da4));
        }
        iVar7 = fn_82C562F0(lVar11,iVar14,0xffffffff82196582);
        *(int *)(iVar2 + 0x5da4) = iVar7;
        if (iVar7 == 0) {
          *(unsigned int *)(iVar2 + 0x5da0) = 0;
          return 0xfffffffffffffff7;
        }
        *(int *)(iVar2 + 0x5da0) = iVar14;
      }
      fn_82F68CC0(*(unsigned int *)(iVar2 + 0x5da4),auStack_170,uVar13);
      fn_82F68CC0(*(int *)(iVar2 + 0x5da4) + uVar13,pbStack_18c,uStack_190);
      uStack_190 = uStack_190 + uVar13;
      pbStack_18c = *(unsigned char **)(iVar2 + 0x5da4);
    }
    if ((aiStack_188[0] != 0) && ((uStack_190 == 0 || (pbStack_18c == (unsigned char *)0x0)))) {
      return 7;
    }
  }
  *(unsigned int *)(iVar2 + 0x5650) = 0;
  *(unsigned int *)(iVar2 + 0x5660) = 0;
  *(unsigned int *)(iVar2 + 0x5654) = 0;
  *(unsigned int *)(iVar2 + 0x5658) = 0;
  if (*(int *)(iVar2 + 0x3cb0) == 7) {
    bVar1 = *pbStack_18c;
    if ((bVar1 & 2) == 0) {
      *(unsigned int *)(iVar2 + 0x5660) = 0;
      *(unsigned int *)(iVar2 + 0x39f4) = 1;
    }
    else {
      *(unsigned int *)(iVar2 + 0x5660) = 1;
      *(unsigned int *)(iVar2 + 0x39f4) = 0;
    }
    *(unsigned int *)(iVar2 + 0x5650) = bVar1 >> 2 & 1;
    if ((bVar1 & 0x20) == 0) {
      *(unsigned int *)(iVar2 + 0x565c) = 0;
    }
    else {
      *(unsigned int *)(iVar2 + 0x565c) = 1;
    }
    uVar9 = (unsigned __int64)uStack_190 - 1;
    uStack_190 = (unsigned int)uVar9;
    if (uVar9 != 0) {
      pbVar8 = pbStack_18c + 1;
      bVar10 = *(int *)(iVar2 + 0x3cb0) == 7;
      goto LAB_82c49f04;
    }
    fn_82A9FA30(*(unsigned int *)(iVar2 + 0xd30),0,&pbStack_18c,4,&uStack_190,aiStack_188);
    bVar10 = *(int *)(iVar2 + 0x3cb0) == 7;
  }
  else {
    bVar10 = false;
  }
  uVar9 = (unsigned __int64)uStack_190;
  pbVar8 = pbStack_18c;
LAB_82c49f04:
  fn_82C4E1D0(*(unsigned int *)(iVar2 + 0x50),pbVar8,uVar9,aiStack_188[0],bVar10);
  *(int *)(*(int *)(iVar2 + 0x50) + 0x18) = aiStack_188[0];
  uVar6 = fn_82C45168(iVar2,pbStack_18c,uStack_190);
  if ((int)uVar6 == 0) {
    if ((*(int *)(iVar2 + 0x3c04) == 0) && (*(int *)(iVar2 + 0x3c48) == 0)) {
      fn_82C483D0(iVar2);
    }
    else {
      uVar4 = *(unsigned int *)(iVar2 + 0x58);
      uVar5 = *(unsigned int *)(iVar2 + 0x5c);
      if ((*param_1 == 0) ||
         ((iVar14 = *(int *)(*param_1 + 0x2e0), *(int *)(iVar14 + 0x10) != 0 ||
          (iVar14 = *(int *)(iVar14 + 0xe80), iVar14 < 1)))) {
        iVar14 = 0x1e;
      }
      if (*(int *)(iVar2 + 0x3c48) == 0) {
        fn_82C49BB0();
        lStack_180 = (__int64)iVar14;
        dVar15 = (double)lbl_821AAD20;
        *param_1 = 0;
        uVar6 = fn_82C498F8((double)lStack_180,dVar15,param_1,uVar3,0x574d5633);
      }
      else {
        fn_82C49BB0();
        lStack_180 = (__int64)iVar14;
        dVar15 = (double)lbl_821AAD20;
        *param_1 = 0;
        uVar6 = fn_82C498F8((double)lStack_180,dVar15,param_1,uVar3,0x57565032);
      }
      iVar2 = *(int *)(*param_1 + 0x2e0);
      if ((int)uVar6 == 0) {
        *(unsigned int *)(iVar2 + 0x3c0c) = uVar4;
        *(unsigned int *)(iVar2 + 0x3c10) = uVar5;
        if (*(int *)(iVar2 + 0x3cb0) == 7) {
          uVar9 = (unsigned __int64)uStack_190 - 1;
          uStack_190 = (unsigned int)uVar9;
          bVar10 = *(int *)(iVar2 + 0x3cb0) == 7;
          pbVar8 = pbStack_18c + 1;
        }
        else {
          uVar9 = (unsigned __int64)uStack_190;
          bVar10 = false;
          pbVar8 = pbStack_18c;
        }
        fn_82C4E1D0(*(unsigned int *)(iVar2 + 0x50),pbVar8,uVar9,aiStack_188[0],bVar10);
        uVar6 = fn_82C45168(iVar2,pbStack_18c,uStack_190);
      }
    }
  }
  return uVar6;
}

