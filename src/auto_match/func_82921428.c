#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82B64580();
extern int fn_82B64278();
extern int fn_82920BD8();
extern int fn_82B64380();
extern int fn_82B64380();
extern int fn_82B64480();
extern int fn_82B64580();
extern unsigned int lbl_82002C28;
extern unsigned int lbl_8315AA30;
extern unsigned int lbl_8315AA34;


unsigned __int64 fn_82921428(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int (**pcVar15)();
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  unsigned int uVar22;
  unsigned int uVar24;
  unsigned __int64 uVar23;
  float *pfVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  __int64 lVar29;
  int iVar30;
  double dVar31;

  if (*(char *)((int)param_1 + 0xb) != '\x05') {
    return 0xffffffff80004005;
  }
  iVar20 = *param_1;
  iVar30 = param_1[1];
  uVar22 = *(unsigned int *)(iVar20 + 0x68);
  if (*(unsigned int *)(iVar30 + 0x68) != uVar22 >> 1) {
    if (*(unsigned int *)(iVar30 + 0x68) != 1) {
      return 0xffffffff80004005;
    }
    if (uVar22 != 1) {
      return 0xffffffff80004005;
    }
  }
  if (*(unsigned int *)(iVar30 + 0x6c) != *(unsigned int *)(iVar20 + 0x6c) >> 1) {
    if (*(unsigned int *)(iVar30 + 0x6c) != 1) {
      return 0xffffffff80004005;
    }
    if (*(unsigned int *)(iVar20 + 0x6c) != 1) {
      return 0xffffffff80004005;
    }
  }
  if (*(int *)(iVar30 + 0x70) != 1) {
    return 0xffffffff80004005;
  }
  if (*(int *)(iVar20 + 0x70) != 1) {
    return 0xffffffff80004005;
  }
  if ((1 < uVar22) && ((uVar22 & 1) != 0)) {
    *(unsigned int *)(iVar20 + 0x68) = *(unsigned int *)(iVar20 + 0x68) & 0xfffffffe;
    iVar20 = *param_1;
    *(int *)(iVar20 + 0x74) = *(int *)(iVar20 + 0x74) - *(int *)(iVar20 + 0x78);
  }
  uVar22 = *(unsigned int *)(*param_1 + 0x6c);
  if (1 < uVar22) {
    *(unsigned int *)(*param_1 + 0x6c) = uVar22 & 0xfffffffe;
  }
  if ((param_1[2] & 0x80000U) != 0) goto LAB_82921688;
  iVar20 = *param_1;
  uVar22 = *(unsigned int *)(iVar20 + 4);
  uVar23 = CONCAT44(uVar22,uVar22) & 0xfffffffffffffe3f;
  uVar24 = (unsigned int)uVar23;
  if ((((uVar24 != (*(unsigned int *)(param_1[1] + 4) & 0xfffffe3f)) || (*(unsigned int *)(iVar20 + 0x68) < 2)) ||
      (*(unsigned int *)(iVar20 + 0x6c) < 2)) ||
     ((*(int *)(param_1[1] + 0x10) != 0 || (*(int *)(iVar20 + 0x10) != 0)))) goto LAB_82921688;
  if ((int)uVar24 < 0x28000003) {
    if ((uVar24 == 0x28000002) || ((uVar22 & 0xfffffe3f) == 0x4900002)) {
      iVar20 = fn_82B64278(param_1);
    }
    else if ((uVar22 & 0xfffffe3f) == 0x800000a) {
      iVar20 = fn_82B64580(param_1);
    }
    else {
      uVar23 = uVar23 - 0x18280003;
      if (uVar23 != 0) {
        if ((uVar23 & 0xffffffff) != 3) {
          if ((uVar23 & 0xffffffff) == 0xc) {
            iVar20 = fn_82B64380(param_1);
            goto LAB_82921678;
          }
          if ((uVar23 & 0xffffffff) != 0x1f80003) goto LAB_82921688;
        }
        uVar13 = *(unsigned int *)(iVar20 + 0x20);
        uVar14 = *(unsigned int *)(iVar20 + 0x60);
        pcVar15 = (int (**)())lbl_8315AA30;
        goto LAB_829215c8;
      }
      iVar20 = fn_82B64380(param_1);
    }
  }
  else {
    uVar23 = uVar23 - 0x28280003;
    if (uVar23 == 0) {
      iVar20 = fn_82B64580(param_1);
    }
    else if ((uVar23 & 0xffffffff) == 1) {
      iVar20 = fn_82920BD8(param_1);
    }
    else {
      if ((uVar23 & 0xffffffff) != 3) {
        if ((uVar23 & 0xffffffff) == 0xc) {
          iVar20 = fn_82B64480(param_1);
          goto LAB_82921678;
        }
        if ((uVar23 & 0xffffffff) != 0x1f80003) goto LAB_82921688;
      }
      uVar13 = *(unsigned int *)(iVar20 + 0x20);
      uVar14 = *(unsigned int *)(iVar20 + 0x60);
      pcVar15 = (int (**)())lbl_8315AA34;
LAB_829215c8:
      iVar20 = (*pcVar15)(*(unsigned int *)(param_1[1] + 0x20),uVar13,*(unsigned int *)(iVar20 + 0x68),
                          *(unsigned int *)(iVar20 + 0x6c),uVar14,*(unsigned int *)(param_1[1] + 0x60));
    }
  }
LAB_82921678:
  if (-1 < iVar20) {
    return 0;
  }
LAB_82921688:
  iVar20 = fn_8265C940(*(int *)(param_1[1] + 0x68) << 4,0x24810000);
  if (iVar20 != 0) {
    iVar30 = *(int *)(*param_1 + 0x68);
    if (*(int *)(*param_1 + 0x6c) == 1) {
      iVar21 = fn_8265C940(iVar30 << 4,0x24810000);
      iVar30 = iVar21;
    }
    else {
      iVar21 = fn_8265C940(iVar30 << 5,0x24810000);
      iVar30 = *(int *)(*param_1 + 0x68) * 0x10 + iVar21;
    }
    if (iVar21 != 0) {
      iVar28 = iVar21;
      iVar27 = iVar30;
      if (*(int *)(*param_1 + 0x68) != 1) {
        iVar28 = iVar21 + 0x10;
        iVar27 = iVar30 + 0x10;
      }
      uVar23 = 0;
      if (*(int *)(param_1[1] + 0x6c) != 0) {
        dVar31 = (double)lbl_82002C28;
        do {
          lVar29 = (uVar23 & 0x7fffffff) * 2;
          (**(int (***)())(*(int *)*param_1 + 4))((int *)*param_1,lVar29,0,iVar21);
          if (iVar30 != iVar21) {
            (**(int (***)())(*(int *)*param_1 + 4))((int *)*param_1,lVar29 + 1,0,iVar30);
          }
          uVar22 = 0;
          if (*(int *)(param_1[1] + 0x68) != 0) {
            pfVar25 = (float *)(iVar20 + -4);
            do {
              iVar26 = uVar22 * 0x20;
              uVar22 = uVar22 + 1;
              iVar16 = iVar26 + iVar28;
              iVar17 = iVar26 + iVar21;
              iVar18 = iVar26 + iVar30;
              iVar19 = iVar26 + iVar27;
              fVar1 = *(float *)(iVar16 + 4);
              fVar2 = *(float *)(iVar17 + 4);
              fVar3 = *(float *)(iVar16 + 8);
              fVar4 = *(float *)(iVar17 + 8);
              fVar5 = *(float *)(iVar16 + 0xc);
              fVar6 = *(float *)(iVar17 + 0xc);
              fVar7 = *(float *)(iVar18 + 4);
              fVar8 = *(float *)(iVar18 + 8);
              fVar9 = *(float *)(iVar18 + 0xc);
              fVar10 = *(float *)(iVar19 + 4);
              fVar11 = *(float *)(iVar19 + 8);
              fVar12 = *(float *)(iVar19 + 0xc);
              pfVar25[1] = (float)((double)(*(float *)(iVar26 + iVar30) +
                                            *(float *)(iVar26 + iVar21) +
                                            *(float *)(iVar26 + iVar28) +
                                           *(float *)(iVar26 + iVar27)) * dVar31);
              pfVar25[2] = (float)((double)(fVar10 + fVar7 + fVar1 + fVar2) * dVar31);
              pfVar25[3] = (float)((double)(fVar11 + fVar8 + fVar3 + fVar4) * dVar31);
              pfVar25 = pfVar25 + 4;
              *pfVar25 = (float)((double)(fVar12 + fVar9 + fVar5 + fVar6) * dVar31);
            } while (uVar22 < *(unsigned int *)(param_1[1] + 0x68));
          }
          (**(int (***)())(*(int *)param_1[1] + 8))((int *)param_1[1],uVar23,0,iVar20);
          uVar23 = uVar23 + 1;
        } while ((uVar23 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1[1] + 0x6c));
      }
      fn_8265C990(iVar21,0x24810000);
      fn_8265C990(iVar20,0x24810000);
      return 0;
    }
    fn_8265C990(iVar20,0x24810000);
  }
  return 0xffffffff8007000e;
}
