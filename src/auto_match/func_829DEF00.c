typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_829DEAE0();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821A7F10;


void fn_829DEF00(unsigned __int64 param_1,double param_2,double param_3,double param_4,double param_5)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar7;
  unsigned __int64 uVar6;
  unsigned short uVar8;
  int iVar9;
  int iVar10;
  unsigned short uVar11;
  unsigned short uVar12;
  unsigned short uVar13;
  int iVar15;
  unsigned short uVar16;
  __int64 lVar14;
  int iVar17;
  int iVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  double extraout_f1;
  __int64 lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  iVar7 = fn_82F6A540();
  lVar22 = (__int64)param_3;
  uVar21 = (unsigned __int64)param_5;
  if (((int)(__int64)extraout_f1 < 0) ||
     (bVar5 = true, *(int *)(*(int *)(iVar7 + 8) + 4) <= (int)(__int64)extraout_f1)) {
    bVar5 = false;
  }
  if (bVar5) {
    iVar15 = (int)(__int64)param_2;
    if ((iVar15 < 0) || (bVar5 = true, *(int *)(*(int *)(iVar7 + 8) + 4) <= iVar15)) {
      bVar5 = false;
    }
    if (bVar5) {
      iVar17 = (int)lVar22;
      lVar19 = (__int64)iVar17;
      if ((lVar19 < 0) || (bVar5 = true, *(int *)(*(int *)(iVar7 + 8) + 8) <= iVar17)) {
        bVar5 = false;
      }
      if ((bVar5) && (lVar22 + 10 < (__int64)uVar21)) {
        iVar10 = *(int *)(iVar7 + 8);
        uVar2 = *(unsigned int *)(iVar10 + 8);
        dVar24 = (double)(float)((double)(float)(param_4 - param_2) /
                                (double)(float)(param_5 - param_3));
        if ((__int64)(int)uVar2 <= (__int64)uVar21) {
          uVar21 = (unsigned __int64)uVar2 - 1 & 0xffffffff;
          if ((__int64)uVar21 <= lVar22 + 10) goto LAB_829def88;
          param_4 = (double)(float)((double)(float)(param_5 - param_3) * dVar24 + param_2);
        }
        iVar3 = *(int *)(iVar7 + 0xc);
        fVar4 = (float)(param_3 + param_5) * 0.5f;
        dVar23 = (double)fVar4;
        iVar9 = (int)(__int64)((float)(param_2 + param_4) * 0.5f);
        uVar1 = *(unsigned short *)
                 ((unsigned int)((unsigned char)(&lbl_821A7F10)[*(unsigned int *)(iVar10 + 0x10) & 0x3f] >> 3) * iVar15 +
                  *(int *)(iVar10 + 0x14) * iVar17 + iVar3);
        if ((iVar9 < 0) || (bVar5 = true, *(int *)(iVar10 + 4) <= iVar9)) {
          bVar5 = false;
        }
        iVar15 = (int)(__int64)fVar4;
        if (bVar5) {
          if ((iVar15 < 0) || (bVar5 = true, (int)uVar2 <= iVar15)) {
            bVar5 = false;
          }
          if (!bVar5) goto LAB_829df100;
          uVar16 = *(unsigned short *)
                    ((unsigned int)((unsigned char)(&lbl_821A7F10)[*(unsigned int *)(iVar10 + 0x10) & 0x3f] >> 3) * iVar9 +
                     *(int *)(iVar10 + 0x14) * iVar15 + iVar3);
        }
        else {
LAB_829df100:
          uVar16 = 0;
        }
        iVar9 = (int)(__int64)param_4;
        if ((iVar9 < 0) || (bVar5 = true, *(int *)(iVar10 + 4) <= iVar9)) {
          bVar5 = false;
        }
        iVar18 = (int)uVar21;
        if (bVar5) {
          if ((iVar18 < 0) || (bVar5 = true, (int)uVar2 <= iVar18)) {
            bVar5 = false;
          }
          if (!bVar5) goto LAB_829df174;
          uVar8 = *(unsigned short *)
                   ((unsigned int)((unsigned char)(&lbl_821A7F10)[*(unsigned int *)(iVar10 + 0x10) & 0x3f] >> 3) * iVar9 +
                    *(int *)(iVar10 + 0x14) * iVar18 + iVar3);
        }
        else {
LAB_829df174:
          uVar8 = 0;
        }
        iVar10 = (unsigned int)(uVar8 != 0) + (unsigned int)(uVar16 != 0) +
                 ((unsigned int)uVar1 - ((uVar1 - 1) + (unsigned int)(uVar1 == 0)));
        if (1 < iVar10) {
          if (iVar10 == 2) {
            uVar11 = uVar1;
            if (uVar1 <= uVar16) {
              uVar11 = uVar16;
            }
            uVar12 = uVar8;
            if ((uVar8 < uVar11) && (uVar12 = uVar16, uVar16 < uVar1)) {
              uVar12 = uVar1;
            }
            *(unsigned short *)(iVar7 + 0x16) = uVar12;
            *(unsigned short *)(iVar7 + 0x14) = (uVar8 - uVar12) + uVar16 + uVar1;
            if (uVar1 == 0) {
              lVar19 = (__int64)iVar18;
              if (lVar22 <= lVar19) {
                dVar23 = (double)lbl_82002AE0;
                do {
                  fn_829DEAE0((double)(float)((double)(float)(param_5 - param_3) * dVar24 +
                                               param_2),iVar7,lVar19);
                  lVar19 = lVar19 + -1;
                  param_5 = (double)(float)(param_5 - dVar23);
                } while (lVar22 <= (int)lVar19);
              }
            }
            else if ((__int64)iVar17 <= (__int64)uVar21) {
              dVar25 = (double)lbl_82002AE0;
              dVar23 = param_3;
              do {
                fn_829DEAE0((double)(float)((double)(float)(param_3 - dVar23) * dVar24 + param_2),
                              iVar7,lVar19);
                lVar19 = lVar19 + 1;
                param_3 = (double)(float)(param_3 + dVar25);
              } while ((__int64)(int)lVar19 <= (__int64)uVar21);
            }
          }
          else {
            uVar11 = uVar1;
            if (uVar16 <= uVar1) {
              uVar11 = uVar16;
            }
            uVar12 = uVar8;
            if ((uVar11 < uVar8) && (uVar12 = uVar16, uVar1 < uVar16)) {
              uVar12 = uVar1;
            }
            *(unsigned short *)(iVar7 + 0x14) = uVar12;
            uVar11 = uVar1;
            if (uVar1 <= uVar16) {
              uVar11 = uVar16;
            }
            uVar13 = uVar8;
            if ((uVar8 < uVar11) && (uVar13 = uVar16, uVar16 < uVar1)) {
              uVar13 = uVar1;
            }
            uVar16 = ((uVar8 - uVar13) - uVar12) + uVar16 + uVar1;
            *(unsigned short *)(iVar7 + 0x16) = uVar16 + 10;
            *(unsigned short *)(iVar7 + 0x14) = uVar16 - 10;
            if (uVar16 == uVar1) {
              if ((__int64)iVar17 <= (__int64)uVar21) {
                dVar25 = (double)lbl_82002AE0;
                dVar23 = param_3;
                do {
                  fn_829DEAE0((double)(float)((double)(float)(param_3 - dVar23) * dVar24 + param_2
                                               ),iVar7,lVar19);
                  lVar19 = lVar19 + 1;
                  param_3 = (double)(float)(param_3 + dVar25);
                } while ((__int64)(int)lVar19 <= (__int64)uVar21);
              }
            }
            else if (uVar16 == uVar8) {
              lVar19 = (__int64)iVar18;
              if (lVar22 <= lVar19) {
                dVar23 = (double)lbl_82002AE0;
                do {
                  fn_829DEAE0((double)(float)((double)(float)(param_5 - param_3) * dVar24 +
                                               param_2),iVar7,lVar19);
                  lVar19 = lVar19 + -1;
                  param_5 = (double)(float)(param_5 - dVar23);
                } while (lVar22 <= (int)lVar19);
              }
            }
            else {
              dVar26 = (double)lbl_82002AE0;
              lVar19 = (__int64)iVar15;
              dVar25 = dVar23;
              lVar20 = lVar19;
              lVar14 = lVar19;
              while (lVar14 <= (__int64)uVar21) {
                fn_829DEAE0((double)(float)((double)(float)(dVar23 - param_3) * dVar24 + param_2),
                              iVar7,lVar20);
                lVar20 = lVar20 + 1;
                dVar23 = (double)(float)(dVar23 - dVar26);
                lVar14 = (__int64)(int)lVar20;
              }
              dVar25 = dVar25 - dVar26;
              while( true ) {
                dVar25 = (double)(float)dVar25;
                lVar19 = lVar19 + -1;
                if ((int)lVar19 < lVar22) break;
                fn_829DEAE0((double)(float)((double)(float)(dVar25 - param_3) * dVar24 + param_2),
                              iVar7,lVar19);
                dVar25 = dVar25 - dVar26;
              }
            }
          }
          uVar6 = 1;
          goto LAB_829df4a0;
        }
      }
    }
  }
LAB_829def88:
  uVar6 = 0;
LAB_829df4a0:
  fn_82F6A58C(uVar6);
  return;
}

