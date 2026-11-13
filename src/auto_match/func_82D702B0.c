typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define TBLr 0
extern unsigned int *auStack_8d0;
extern unsigned int fStack_8f0;
extern unsigned int fStack_8f8;
extern unsigned int fStack_900;
extern int fn_82DDDAB8();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82005718;
extern unsigned int lbl_820579A8;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821344F4;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D702B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  float *pfVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  bool bVar11;
  unsigned __int64 in_r0;
  unsigned __int64 uVar12;
  int *piVar13;
  short sVar16;
  int iVar14;
  int iVar15;
  int *piVar18;
  unsigned __int64 uVar17;
  unsigned __int64 uVar19;
  unsigned int *puVar20;
  unsigned __int64 uVar21;
  int iVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  short sVar25;
  unsigned int *puVar26;
  __int64 lVar27;
  unsigned int *puVar29;
  unsigned __int64 uVar28;
  int *piVar30;
  int *piVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar42;
  unsigned int uVar43;
  unsigned int uVar44;
  float fStack_900;
  float fStack_8f8;
  float fStack_8f0;
  unsigned short auStack_8d0 [88];
  short asStack_6d0 [872];
  
  uVar12 = ZEXT48(&stack0x00000000);
  piVar13 = (int *)fn_82F6A53C();
  puVar2 = *(unsigned int **)((int)param_3 + 0x3080);
  puVar29 = puVar2 + 0x102;
  piVar18 = (int *)param_2;
  uVar23 = 0;
  sVar25 = 0;
  iVar14 = *(int *)*piVar13;
  if (puVar2 + 0x102 < (unsigned int *)*puVar2) {
    lVar24 = uVar12 - 0x8d2;
    dVar36 = (double)lbl_821AAD20;
    dVar35 = (double)lbl_82005718;
    dVar37 = (double)lbl_82005340;
    dVar40 = (double)lbl_82186E6C;
    dVar38 = (double)lbl_820579A8;
    dVar39 = (double)lbl_821344F4;
    lVar27 = uVar12 - 0x6d0;
    dVar41 = (double)lbl_82002AE0;
    puVar26 = puVar29;
    do {
      puVar3 = (unsigned int *)puVar2[1];
      uVar4 = *puVar29;
      bVar11 = false;
      *(short *)lVar27 = -1;
      for (puVar20 = puVar2 + 2; puVar20 < puVar3; puVar20 = puVar20 + 1) {
        uVar5 = *puVar20;
        if (uVar4 != uVar5) {{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs44, &_vt0, 16); }
          dVar32 = (double)*(float *)(iVar14 + 0x10);
          pfVar6 = *(float **)(piVar13[3] + 0x60);
          uVar42 = storeVectorElementWordIndexed(in_vs42,0,uVar12 - 0x8f8);
          *(unsigned int *)(uVar12 - 0x8f8) = uVar42;
          uVar42 = storeVectorElementWordIndexed(in_vs40,0,uVar12 - 0x900);
          *(unsigned int *)(uVar12 - 0x900) = uVar42;
          uVar42 = storeVectorElementWordIndexed(in_vs39,0,uVar12 - 0x8f0);
          *(unsigned int *)(uVar12 - 0x8f0) = uVar42;
          dVar34 = (double)fStack_8f0;
          dVar33 = (double)(float)((double)(float)(dVar34 - dVar41) * dVar32 + -(double)fStack_900);
          if ((dVar33 <= dVar32) && ((dVar34 <= dVar39 || (*(int *)(uVar5 + 0x20) != 0xffff)))) {
            if ((*(int *)(uVar5 + 0x20) != 0xffff) ||
               (((dVar38 <= dVar34 ||
                 (dVar40 <= (double)(float)((double)(float)((double)(float)(dVar34 - dVar41) *
                                                            dVar32 + (double)fStack_8f8) + dVar33)))
                || ((float)(dVar32 * dVar37) <= *(float *)(uVar5 + 0x1c) + *(float *)(uVar4 + 0x1c))
                ))) {
              dVar32 = dVar36;
              if (*(int *)(uVar5 + 0x20) != 0xffff) {
                dVar32 = (double)(float)((double)*pfVar6 * dVar35);
              }
              if ((float)((double)*(float *)(uVar5 + 0x1c) - dVar32) < *(float *)(uVar4 + 0x1c))
              goto LAB_82d70518;
            }
            else {
              bVar11 = true;
            }
          }
        }
      }
      if (bVar11) {
        uVar23 = uVar23 + 1;
        lVar24 = lVar24 + 2;
        *(short *)lVar24 = sVar25;
      }
      (**(int (***)())(*piVar18 + 0x14))(param_2,*(unsigned int *)(puVar26[1] + 8),uVar12 - 0x4d0);
      sVar16 = (**(int (***)())(*(int *)piVar13[4] + 0xc))
                         ((int *)piVar13[4],*piVar13,uVar12 - 0x8e0,piVar13[3],param_3,0,*puVar26);
      *(short *)lVar27 = sVar16;
      if (sVar16 != -1) {
        (**(int (***)())(*(int *)piVar13[4] + 0x10))((int *)piVar13[4],0xffffffffffffffff);
      }
LAB_82d70518:
      puVar29 = puVar29 + 3;
      sVar25 = sVar25 + 1;
      puVar26 = puVar26 + 3;
      lVar27 = lVar27 + 2;
    } while (puVar29 < (unsigned int *)*puVar2);
  }
  piVar30 = piVar13 + 3;
  iVar14 = *(int *)piVar13[3];
  if (0 < (int)uVar23) {
    lVar24 = uVar12 - 0x8d2;
    uVar28 = uVar23;
    do {
      lVar24 = lVar24 + 2;
      iVar22 = *(unsigned short *)lVar24 + 0x56;
      (**(int (***)())((unsigned int)*(unsigned char *)(puVar2[iVar22 * 3 + 1] + 1) * 0x50 + iVar14 + 0x16c4))
                (puVar2[iVar22 * 3 + 1],puVar2[iVar22 * 3 + 2],0xffffffffffffffff);
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  if (1 < (int)uVar23) {
    lVar24 = (uVar23 & 0x7fffffff) * 2 + (uVar12 - 0x8d0);
    dVar35 = (double)lbl_82005344;
    do {
      iVar14 = KeTlsGetValue(lbl_8323B4A0);
      puVar7 = *(unsigned int **)(iVar14 + 4);
      if (puVar7 < *(unsigned int **)(iVar14 + 0xc)) {
        *puVar7 = "TtConflicts";
        uVar9 = TBLr;
        puVar7[1] = (int)uVar9;
        *(unsigned int **)(iVar14 + 4) = puVar7 + 3;
      }
      uVar17 = 0;
      uVar28 = 1;
      iVar14 = (int)uVar23;
      if (0 < iVar14) {
        uVar21 = 1;
        dVar36 = dVar35;
        do {
          iVar22 = (int)uVar21;
          if (iVar22 < iVar14) {
            lVar27 = uVar23 - uVar21;
            uVar19 = uVar21;
            do {
              uVar42 = storeVectorElementWordIndexed(in_vs44,0,uVar12 - 0x900);
              *(unsigned int *)(uVar12 - 0x900) = uVar42;
              if ((double)fStack_900 < dVar36) {
                uVar17 = uVar21 - 1;
                uVar28 = uVar19;
                dVar36 = (double)fStack_900;
              }
              uVar19 = uVar19 + 1;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
          }
          uVar21 = uVar21 + 1;
        } while (iVar22 < iVar14);
      }
      iVar22 = (int)((uVar17 & 0xffffffff) << 1);
      iVar8 = (int)((uVar28 & 0xffffffff) << 1);
      iVar14 = *(int *)*piVar13;
      uVar4 = puVar2[(*(unsigned short *)((int)auStack_8d0 + iVar8) + 0x56) * 3 + 1];
      if ((((*(unsigned int *)((*(int *)(iVar14 + 0xc) + 0x44) * 4 + *(int *)*piVar30) & 0x40000) == 0) ||
          (iVar15 = (**(int (***)())(*piVar18 + 0x14))
                              (piVar18,*(unsigned int *)
                                        (puVar2[(*(unsigned short *)((int)auStack_8d0 + iVar22) + 0x56) * 3
                                                + 1] + 8),uVar12 - 0x4d0),
          (*(unsigned int *)((*(int *)(iVar15 + 0xc) + 0x44) * 4 + *(int *)*piVar30) & 0x40000) == 0)) ||
         (iVar15 = (**(int (***)())(*piVar18 + 0x14))(piVar18,*(unsigned int *)(uVar4 + 8),uVar12 - 0x2d0)
         , (*(unsigned int *)((*(int *)(iVar15 + 0xc) + 0x44) * 4 + *(int *)*piVar30) & 0x40000) == 0))
      break;
      fn_82DDDAB8(*(unsigned int *)(*piVar13 + 8),iVar14,uVar12 - 0x8f0,2,piVar13 + 8,uVar12 - 0x8f8
                   );
      uVar42 = lbl_8323B4A0;
      uVar23 = uVar23 - 2;
      *(unsigned short *)((int)auStack_8d0 + iVar8) = *(unsigned short *)((int)lVar24 + -2);
      lVar24 = lVar24 + -4;
      *(unsigned short *)((int)auStack_8d0 + iVar22) = *(unsigned short *)lVar24;
      iVar14 = KeTlsGetValue(uVar42);
      puVar7 = *(unsigned int **)(iVar14 + 4);
      if (puVar7 < *(unsigned int **)(iVar14 + 0xc)) {
        *puVar7 = &lbl_82132BC4;
        uVar9 = TBLr;
        puVar7[1] = (int)uVar9;
        *(unsigned int **)(iVar14 + 4) = puVar7 + 3;
      }
    } while (1 < (int)uVar23);
    param_3 = param_3 & 0xffffffff;
  }
  piVar18 = (int *)param_3;
  if ((int)uVar23 != 0) {
    if (asStack_6d0[auStack_8d0[0]] != -1) {
      (**(int (***)())(*(int *)piVar13[4] + 0x14))
                ((int *)piVar13[4],asStack_6d0[auStack_8d0[0]],piVar18[1]);
      piVar31 = (int *)piVar13[4];
      asStack_6d0[auStack_8d0[0]] = -1;
      (**(int (***)())(*piVar31 + 0x10))(piVar31,1);
    }
  }
  iVar14 = *(int *)*piVar30;
  uVar23 = (__int64)(((int)*puVar2 + (-0x408 - (int)puVar2)) / 0xc) - 1;
  if (-1 < (__int64)uVar23) {
    lVar24 = (uVar23 & 0x7fffffff) * 2 + (uVar12 - 0x6d0);
    piVar30 = (int *)*puVar2;
    do {
      uVar1 = *(unsigned short *)lVar24;
      piVar31 = piVar30 + -3;
      if (uVar1 == 0xffff) {
        (**(int (***)())(*(int *)piVar13[4] + 0x10))((int *)piVar13[4],0xffffffffffffffff);
        (**(int (***)())((unsigned int)*(unsigned char *)(piVar30[-2] + 1) * 0x50 + iVar14 + 0x16bc))
                  (piVar30[-2],piVar30[-1],0xffff);
        iVar22 = *piVar18;
        *piVar18 = iVar22 + -0x30;
        iVar8 = *piVar31;
        puVar7 = (unsigned int *)((int)in_r0 + iVar22 + -0x30 & 0xfffffff0);
        uVar42 = puVar7[1];
        uVar43 = puVar7[2];
        uVar44 = puVar7[3];
        puVar10 = (unsigned int *)((int)in_r0 + iVar8 & 0xfffffff0);
        *puVar10 = *puVar7;
        puVar10[1] = uVar42;
        puVar10[2] = uVar43;
        puVar10[3] = uVar44;
        puVar7 = (unsigned int *)(iVar22 - 0x20U & 0xfffffff0);
        uVar42 = puVar7[1];
        uVar43 = puVar7[2];
        uVar44 = puVar7[3];
        puVar10 = (unsigned int *)(iVar8 + 0x10U & 0xfffffff0);
        *puVar10 = *puVar7;
        puVar10[1] = uVar42;
        puVar10[2] = uVar43;
        puVar10[3] = uVar44;
        *(unsigned int *)(iVar8 + 0x20) = *(unsigned int *)(iVar22 + -0x10);
      }
      else {
        (**(int (***)())((unsigned int)*(unsigned char *)(piVar30[-2] + 1) * 0x50 + iVar14 + 0x16c0))
                  (piVar30[-2],piVar30[-1],uVar1);
        *(unsigned int *)(*piVar31 + 0x20) = (unsigned int)uVar1;
      }
      uVar23 = uVar23 - 1;
      lVar24 = lVar24 + -2;
      piVar30 = piVar31;
    } while (-1 < (__int64)uVar23);
  }
  fn_82F6A588();
  return;
}

