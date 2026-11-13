extern int fn_8280DD78();
extern int fn_8280E418();
extern int fn_82F68CC0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82016290;


void fn_82808D88(unsigned __int64 param_1,int *param_2,__int64 param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  float *pfVar4;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  __int64 lVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  iVar7 = fn_82F6A548();
  puVar1 = *(unsigned int **)(iVar7 + 100);
  uVar11 = 0;
  uVar2 = puVar1[2];
  uVar9 = (unsigned __int64)*puVar1;
  uVar3 = puVar1[1];
  uVar12 = (unsigned __int64)*(unsigned short *)((int)puVar1 + 0x32);
  lVar14 = (__int64)(int)(unsigned int)*(unsigned char *)(uVar2 + *param_2) * (__int64)(int)uVar3 + uVar9;
  lVar15 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[1] + uVar2) * (__int64)(int)uVar3 + uVar9;
  lVar16 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[2] + uVar2) * (__int64)(int)uVar3 + uVar9;
  lVar13 = (__int64)(int)(unsigned int)*(unsigned char *)(param_2[3] + uVar2) * (__int64)(int)uVar3 + uVar9;
  if (*(short *)(iVar7 + 0x48) != 0) {
    lVar6 = uVar12 * 4;
    dVar23 = (double)lbl_82005344;
    dVar24 = (double)lbl_82016290;
    dVar25 = (double)lbl_820145BC;
    dVar26 = (double)lbl_82002C5C;
    do {
      if ((*(int *)(iVar7 + 0x50) == 0) || (*(char *)(*(int *)(iVar7 + 0x50) + uVar11) != '\0')) {
        fn_8280DD78((double)*(float *)(iVar7 + 0x40),lVar15,lVar16,param_3);
        fn_8280E418(param_3,param_3);
        if (4 < uVar12) {
          lVar8 = uVar12 - 4;
          lVar10 = lVar16 + 0x10;
          iVar5 = (int)lVar16;
          do {
            pfVar4 = (float *)lVar10;
            dVar22 = (double)*(float *)(((int)lVar14 - iVar5) + (int)pfVar4);
            dVar17 = (double)*pfVar4;
            dVar20 = (double)(float)(dVar22 * dVar26);
            dVar21 = (double)(float)((double)*(float *)(((int)lVar13 - iVar5) + (int)pfVar4) *
                                    dVar26);
            dVar19 = (double)*(float *)(((int)lVar15 - iVar5) + (int)pfVar4);
            dVar18 = (double)*(float *)(iVar7 + 0x40);
            *(float *)(((int)param_3 - iVar5) + (int)pfVar4) =
                 (float)((double)(float)((double)(float)((double)((float)(dVar19 * dVar25 -
                                                                         (double)(float)(dVar17 * 
                                                  dVar25)) + (float)(dVar21 - dVar20)) * dVar18 +
                                                  (double)(-(float)(dVar19 * dVar24 - dVar22) +
                                                          (float)(dVar17 * dVar23 - dVar21))) *
                                         dVar18 + (double)(float)(dVar17 * dVar26 - dVar20)) *
                         dVar18 + dVar19);
            lVar10 = lVar10 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
      }
      else {
        fn_82F68CC0(param_3,*(unsigned int *)(iVar7 + 0x54),lVar6);
      }
      uVar11 = uVar11 + 1;
      param_3 = lVar6 + param_3;
      lVar14 = lVar6 + lVar14;
      lVar15 = lVar6 + lVar15;
      lVar16 = lVar6 + lVar16;
      lVar13 = lVar6 + lVar13;
    } while (uVar11 < *(unsigned short *)(iVar7 + 0x48));
  }
  fn_82F6A594();
  return;
}

