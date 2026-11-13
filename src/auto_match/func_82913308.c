typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_829020B8();
extern int fn_82904258();
extern int fn_82907868();
extern int fn_82907D40();
extern int fn_829080F8();
extern int fn_829088E0();
extern int fn_82913188();
extern int fn_82914750();
extern int fn_829304E0();
extern int fn_829639F0();
extern int fn_82964628();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_82005710;


unsigned __int64 fn_82913308(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  bool bVar7;
  bool bVar8;
  unsigned int uVar10;
  unsigned __int64 uVar9;
  unsigned char *puVar11;
  unsigned int uVar12;
  unsigned char *puVar13;
  int iVar14;
  unsigned int uVar15;
  int iVar16;
  int iVar17;
  unsigned int uVar19;
  __int64 lVar18;
  unsigned int auStack_a0 [4];
  unsigned char auStack_90 [144];
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    return 0;
  }
  iVar16 = *(int *)(param_2 + 4);
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar16 == 6) {
    if (*(int *)(param_2 + 0x10) == 1) {
      iVar16 = *(int *)(param_2 + 0x18);
      uVar15 = *(unsigned int *)(iVar16 + 0x10);
      uVar12 = *(unsigned int *)(iVar16 + 0x14);
      if ((*(int *)(iVar16 + 0x28) != 0) || (bVar8 = true, (*(unsigned int *)(iVar16 + 0x2c) & 0x40) == 0))
      {
        bVar8 = false;
      }
      if ((*(int *)(iVar16 + 0x28) == 0) || (bVar7 = true, (*(unsigned int *)(iVar16 + 0x2c) & 2) == 0)) {
        bVar7 = false;
      }
      uVar2 = *(unsigned int *)(iVar16 + 0x30);
      uVar3 = *(unsigned int *)(iVar16 + 0x40);
      uVar19 = *(unsigned int *)(iVar16 + 0x2c) & 0x80;
      *(unsigned int *)(iVar16 + 0x2c) = *(unsigned int *)(iVar16 + 0x2c) & 0xfffff3ff;
    }
    else {
      if (*(int *)(param_2 + 0x10) != 2) {
        return 0;
      }
      iVar16 = *(int *)(param_2 + 0x18);
      bVar8 = false;
      bVar7 = false;
      uVar19 = 0;
      uVar15 = *(unsigned int *)(iVar16 + 0x10);
      uVar12 = *(unsigned int *)(iVar16 + 0x14);
      uVar2 = *(unsigned int *)(iVar16 + 0x28);
      uVar3 = *(unsigned int *)(iVar16 + 0x3c);
      *(unsigned int *)(iVar16 + 0x20) = *(unsigned int *)(iVar16 + 0x20) & 0xfffff3ff;
    }
    if (uVar19 != 0) {
      fn_82914750(param_1,*(unsigned int *)(*(int *)(param_2 + 0x18) + 0x38),
                        ((unsigned __int64)uVar15 & 0x3fffffff) * 4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x18),
                        0);
      goto LAB_82913774;
    }
    uVar19 = 0;
    if (uVar12 != 0) {
      iVar16 = uVar15 << 2;
      uVar9 = lbl_82005710;
      do {
        if ((!bVar7) || (*(int *)(*(int *)(param_1 + 0x18) + iVar16) == -1)) {
          iVar17 = *(int *)(param_1 + 8);
          if (bVar8) {
            uVar4 = *(unsigned int *)(iVar17 + 0x7c);
          }
          else {
            uVar4 = *(unsigned int *)(iVar17 + 0x74);
          }
          uVar10 = fn_82964628(uVar9,iVar17,uVar4,0,0);
          if (uVar10 < *(unsigned int *)(*(int *)(param_1 + 8) + 8)) {
            iVar17 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x14) + uVar10 * 4);
          }
          else {
            iVar17 = 0;
          }
          if (iVar17 != 0) {
            *(int *)(iVar17 + 0x60) = param_2;
            *(unsigned int *)(iVar17 + 100) = uVar19;
            *(unsigned int *)(iVar17 + 0x30) = uVar19 + uVar15;
          }
          *(unsigned int *)(*(int *)(param_1 + 0x18) + iVar16) = uVar10;
        }
        uVar19 = uVar19 + 1;
        iVar16 = iVar16 + 4;
      } while (uVar19 < uVar12);
    }
    if (!bVar8) goto LAB_82913774;
    lVar18 = ((unsigned __int64)uVar15 & 0x3fffffff) * 4;
    uVar9 = fn_82907D40(param_1,uVar2,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar18,uVar12);
    if ((int)uVar9 < 0) {
      return uVar9;
    }
    uVar9 = fn_829080F8(param_1,uVar2,(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + lVar18,
                          *(unsigned int *)(*(int *)(param_1 + 8) + 0x7c),1,0,0,uVar3);
    if ((int)uVar9 < 0) {
      return uVar9;
    }
    uVar9 = fn_829020B8(param_1,*(unsigned int *)(param_2 + 0x18));
  }
  else {
    if (iVar16 != 0xc) {
      if (iVar16 != 1) {
        fn_82904258(param_1,0,0,0xffffffff8202df04);
        return 0xffffffff80004005;
      }
      do {
        if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0x54) != 0)) break;
        uVar9 = fn_82913308(param_1,*(unsigned int *)(param_2 + 8),0);
        if ((int)uVar9 < 0) {
          return uVar9;
        }
        param_2 = *(int *)(param_2 + 0xc);
      } while (param_2 != 0);
      goto LAB_82913774;
    }
    uVar15 = *(unsigned int *)(param_2 + 0x10);
    if (uVar15 < 2) {
      uVar9 = fn_82914750(param_1,*(unsigned int *)(param_2 + 0x14),0,0);
      if ((int)uVar9 < 0) {
        return uVar9;
      }
      iVar16 = *(int *)(param_1 + 8);
      iVar17 = 0;
      uVar15 = 0;
      if (uVar1 < *(unsigned int *)(iVar16 + 0xc)) {
        iVar14 = uVar1 << 2;
        uVar12 = uVar1;
        iVar17 = 0;
        do {
          iVar5 = *(int *)(*(int *)(iVar16 + 0x18) + iVar14);
          if ((((*(int *)(iVar5 + 0x38) == *(int *)(param_1 + 0x38)) &&
               (iVar5 = *(int *)(iVar5 + 0x3c), iVar5 != 0)) && (*(int *)(iVar5 + 4) == 0xe)) &&
             (uVar15 <= *(unsigned int *)(iVar5 + 0x44))) {
            uVar15 = *(unsigned int *)(iVar5 + 0x44);
            iVar17 = iVar5;
          }
          uVar12 = uVar12 + 1;
          iVar14 = iVar14 + 4;
        } while (uVar12 < *(unsigned int *)(iVar16 + 0xc));
      }
      if (uVar1 < *(unsigned int *)(iVar16 + 0xc)) {
        iVar16 = uVar1 << 2;
        uVar15 = uVar1;
        do {
          iVar14 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar16);
          if (*(int *)(iVar14 + 0x38) == *(int *)(param_1 + 0x38)) {
            *(int *)(iVar14 + 0x3c) = iVar17;
          }
          uVar15 = uVar15 + 1;
          iVar16 = iVar16 + 4;
        } while (uVar15 < *(unsigned int *)(*(int *)(param_1 + 8) + 0xc));
      }
      *(unsigned int *)(param_1 + 0x50) = (unsigned int)LZCOUNT(*(int *)(param_2 + 0x10) + -1) >> 5;
      goto LAB_82913774;
    }
    if (uVar15 == 2) {
      auStack_a0[0] = 0xffffffff;
      uVar9 = fn_82914750(param_1,*(unsigned int *)(param_2 + 0x18),auStack_a0,0);
      if ((int)uVar9 < 0) {
        return uVar9;
      }
      uVar9 = fn_829088E0(param_1,*(unsigned int *)(param_2 + 0x18),auStack_a0[0],
                            *(unsigned int *)(param_2 + 0x1c),*(unsigned int *)(param_2 + 0x20),0);
    }
    else {
      if (uVar15 < 4) {
        fn_829304E0(auStack_90,*(unsigned int *)(param_2 + 0x1c),*(unsigned int *)(param_2 + 0x28),
                     0xffffffff8202df2c);
        puVar11 = *(unsigned char **)(param_2 + 0x14);
        puVar13 = auStack_90;
      }
      else if (uVar15 == 4) {
        puVar13 = *(unsigned char **)(param_2 + 0x1c);
        puVar11 = (unsigned char *)0x0;
      }
      else {
        if (5 < uVar15) {
          if (uVar15 == 6) {
            uVar9 = fn_82907868(param_1,*(unsigned int *)(param_2 + 0x18),param_1 + 0x28,1);
            if ((int)uVar9 < 0) {
              return uVar9;
            }
            *(unsigned int *)(param_1 + 0x54) = 1;
          }
          goto LAB_82913774;
        }
        puVar13 = *(unsigned char **)(param_2 + 0x1c);
        puVar11 = puVar13;
      }
      uVar9 = fn_82913188(param_1,param_2,puVar11,*(unsigned int *)(param_2 + 0x18),puVar13);
    }
  }
  if ((int)uVar9 < 0) {
    return uVar9;
  }
LAB_82913774:
  if ((*(int *)(param_1 + 0x54) != 0) && ((param_3 & 0xffffffff) != 0)) {
    uVar15 = 0;
    if (uVar1 < *(unsigned int *)(*(int *)(param_1 + 8) + 0xc)) {
      iVar16 = uVar1 << 2;
      uVar12 = uVar1;
      do {
        puVar6 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar16);
        if ((*puVar6 & 0xfff00000) == 0x11000000) {
          uVar15 = puVar6[0xf];
        }
        fn_82BA02A8(puVar6);
        fn_829639F0(puVar6);
        uVar12 = uVar12 + 1;
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + iVar16) = 0;
        iVar16 = iVar16 + 4;
      } while (uVar12 < *(unsigned int *)(*(int *)(param_1 + 8) + 0xc));
    }
    *(unsigned int *)(*(int *)(param_1 + 8) + 0xc) = uVar1;
    fn_82F68CC0(*(unsigned int *)(param_1 + 0x18),param_3,*(int *)(*(int *)(param_1 + 4) + 0x1c) << 2
                );
    uVar9 = fn_82907868(param_1,uVar15,param_1 + 0x28,1);
    if ((int)uVar9 < 0) {
      return uVar9;
    }
  }
  return 0;
}

