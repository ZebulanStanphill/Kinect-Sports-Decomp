#define true 1
extern unsigned int *auStack_dc;
extern int fn_827F6990();
extern int fn_827FAF20();
extern int fn_828116B8();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int iStack_cc;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_d0;
extern unsigned int uStack_e0;


void fn_827FB300(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int uVar11;
  __int64 lVar12;
  float *pfVar13;
  double extraout_f1;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  unsigned int uStack_e0;
  unsigned int auStack_dc [3];
  unsigned int uStack_d0;
  int iStack_cc;
  float *pfStack_c8;
  unsigned int *puStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  
  uVar4 = fn_82F6A540();
  dVar14 = extraout_f1;
  fn_827F6990(uVar4,auStack_dc);
  fn_827F6990(param_2,&uStack_e0);
  lVar12 = 0;
  lVar10 = 0;
  uVar11 = 0;
  dVar17 = (double)lbl_821AAD20;
  dVar16 = (double)lbl_82002AE0;
  do {
    uStack_d0 = uVar11;
    fn_827FAF20(uVar4,param_2,param_3,&uStack_d0);
    uVar3 = uStack_b8;
    uVar9 = (unsigned __int64)uStack_bc;
    uVar8 = (unsigned __int64)uStack_c0;
    if (param_5 == 0) {
      uVar6 = 0;
      if (uStack_b8 != 0) {
        dVar15 = (double)(float)(dVar16 - dVar14);
        iVar1 = iStack_cc - (int)pfStack_c8;
        iVar2 = (int)puStack_c4 - (int)pfStack_c8;
        pfVar13 = pfStack_c8;
        do {
          if ((uVar9 <= (uVar6 & 0xffffffff)) ||
             (dVar18 = dVar14, dVar19 = dVar15, iVar5 = fn_828116B8(uStack_e0,lVar10 + uVar6),
             iVar5 == 0)) {
            dVar18 = dVar17;
            dVar19 = dVar16;
          }
          if ((uVar8 <= (uVar6 & 0xffffffff)) ||
             (iVar5 = fn_828116B8(auStack_dc[0],uVar6 + lVar12), iVar5 == 0)) {
            dVar19 = dVar17;
          }
          if ((uVar6 & 0xffffffff) < uVar8) {
            if (uVar9 <= (uVar6 & 0xffffffff)) {
LAB_827fb450:
              dVar18 = dVar17;
            }
            if (dVar19 != dVar17) {
              dVar19 = (double)(float)((double)*(float *)(iVar1 + (int)pfVar13) * dVar19);
            }
          }
          else {
            dVar19 = dVar17;
            if (uVar9 <= (uVar6 & 0xffffffff)) goto LAB_827fb450;
          }
          if (dVar18 != dVar17) {
            dVar18 = (double)(float)((double)*pfVar13 * dVar18);
          }
          uVar6 = uVar6 + 1;
          *(float *)(iVar2 + (int)pfVar13) = (float)(dVar18 + dVar19);
          pfVar13 = pfVar13 + 1;
        } while ((uVar6 & 0xffffffff) < (unsigned __int64)uVar3);
      }
    }
    else {
      uVar6 = (unsigned __int64)uStack_b8;
      if (uVar6 != 0) {
        puVar7 = puStack_c4;
        do {
          *puVar7 = *(unsigned int *)((iStack_cc - (int)puStack_c4) + (int)puVar7);
          puVar7 = puVar7 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    uVar11 = uVar11 + 1;
    lVar12 = uVar8 + lVar12;
    lVar10 = uVar9 + lVar10;
    if (1 < uVar11) {
      fn_82F6A58C();
      return;
    }
  } while( true );
}

