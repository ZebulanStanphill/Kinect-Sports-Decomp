extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_8255CFD0();
extern int fn_825E2618();
extern int fn_825E2870();
extern int fn_825E2E40();
extern int fn_825E34E8();
extern int fn_8261DCB8();
extern int fn_8261E158();
extern int fn_8261E600();
extern int fn_8261FD18();
extern int fn_82620420();
extern int fn_82620720();
extern int fn_82809D40();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8218E0C4;
extern unsigned int lbl_8218E0C8;
extern unsigned int lbl_82191418;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_82195738;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326B4D8;


void fn_825E20F8(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int in_r0;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar9;
  __int64 lVar10;
  double dVar11;
  unsigned __int64 extraout_f1;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  unsigned __int64 uVar22;
  double dVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int in_register_000107f0;
  unsigned int in_register_000107f4;
  unsigned int in_register_000107f8;
  unsigned int in_vr127;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  iVar7 = fn_82F6A540();
  dVar17 = (double)ltcg_pool_0_0f;
  uVar22 = extraout_f1;
  fn_8261E600(param_2,0xffffffff831bf528);
  fn_8255CFD0(param_6,param_2 + 0x240);
  dVar19 = (double)lbl_821CA460;
  iVar4 = (int)param_2;
  if ((*(int *)(iVar7 + 0xe0) == 0) &&
     ((*(int *)(iVar4 + 0x314) == 0 || ((double)*(float *)(iVar7 + 0x34) != dVar19)))) {
    fn_825E2870(uVar22,iVar7,param_2,param_3);
  }
  if ((*(int *)(iVar4 + 0x1c0) != 0) && (*(int *)(iVar7 + 0xe0) == 0)) {
    puVar5 = (unsigned int *)(iVar4 + 0x400U & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
    puVar5 = (unsigned int *)(iVar4 + 0x430U & 0xfffffff0);
    *puVar5 = in_register_000104d0;
    puVar5[1] = in_register_000104d4;
    puVar5[2] = in_register_000104d8;
    puVar5[3] = in_vr77;
    puVar5 = (unsigned int *)(in_r0 + iVar4 + 0x3f0 & 0xfffffff0);
    uVar8 = *puVar5;
    uVar24 = puVar5[1];
    uVar25 = puVar5[2];
    uVar26 = puVar5[3];
    fn_8261DCB8();
    puVar5 = (unsigned int *)(iVar4 + 0x410U & 0xfffffff0);
    *puVar5 = uVar8;
    puVar5[1] = uVar24;
    puVar5[2] = uVar25;
    puVar5[3] = uVar26;
    goto LAB_825e2468;
  }
  uVar3 = *(unsigned int *)(iVar4 + 0x310);
  if (((uVar3 & 0x100) != 0) || (*(int *)(iVar4 + 0x220) == 2)) {
    puVar5 = (unsigned int *)(iVar4 + 0x290U & 0xfffffff0);
    uVar8 = puVar5[1];
    uVar24 = puVar5[2];
    uVar25 = puVar5[3];
    puVar6 = (unsigned int *)(in_r0 + iVar4 + 0x3f0 & 0xfffffff0);
    *puVar6 = *puVar5;
    puVar6[1] = uVar8;
    puVar6[2] = uVar24;
    puVar6[3] = uVar25;
    if ((uVar3 & 0x20) != 0) {
      dVar17 = (double)lbl_8218E0C4;
    }
    fn_8261E158(uVar22,dVar17,(double)lbl_82191418,(double)lbl_8218E0C8,param_2,param_2 + 0x44c,
                  param_2 + 0x448,uVar3 & 0x20,param_3);
    puVar5 = (unsigned int *)(iVar4 + 0x2a0U & 0xfffffff0);
    uVar8 = puVar5[1];
    uVar24 = puVar5[2];
    uVar25 = puVar5[3];
    puVar6 = (unsigned int *)(iVar4 + 0x410U & 0xfffffff0);
    *puVar6 = *puVar5;
    puVar6[1] = uVar8;
    puVar6[2] = uVar24;
    puVar6[3] = uVar25;
    goto LAB_825e2468;
  }
  if (*(int *)(iVar7 + 0xe0) != 0) {
    fn_825E34E8(uVar22,param_2,iVar7,param_6,param_3);
    goto LAB_825e2468;
  }
  if ((*(int *)(iVar4 + 0x314) == 0) || ((double)*(float *)(iVar7 + 0x34) != dVar19)) {
    lVar10 = param_2 + 0x3f0;
    lVar9 = param_2 + 0x460;
    fn_82620420(uVar22,lVar9,lVar10,param_5,param_6);
    fn_82620720(uVar22,lVar9,lVar10);
    if (*(int *)(iVar7 + 0x98) == 0) {
      puVar5 = (unsigned int *)(iVar4 + 0x410U & 0xfffffff0);
      uVar8 = puVar5[1];
      uVar24 = puVar5[2];
      uVar25 = puVar5[3];
      puVar6 = (unsigned int *)((int)&fStack_90 + in_r0 & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar8;
      puVar6[2] = uVar24;
      puVar6[3] = uVar25;
      dVar15 = (double)fStack_8c;
      dVar14 = (double)fStack_84;
      dVar11 = (double)lbl_821916FC;
      dVar16 = (double)fStack_90;
      dVar12 = (double)(float)(dVar15 * dVar11);
      dVar13 = (double)(float)((double)fStack_88 * dVar11);
      fVar1 = (float)(dVar16 * (double)(float)(dVar16 * dVar11));
      dVar11 = (double)(float)(dVar14 * (double)(float)(dVar16 * dVar11));
      dVar18 = (double)(float)(dVar13 * dVar15 - dVar11);
      fVar2 = (float)((double)fStack_88 * dVar13);
      dVar23 = (double)(float)(dVar14 * dVar12 + (double)(float)(dVar13 * dVar16));
      dVar21 = (double)(float)(dVar19 - (double)((float)(dVar15 * dVar12) + fVar1));
      dVar20 = (double)SQRT((float)(dVar21 * dVar21 + (double)(float)(dVar23 * dVar23)));
      if (dVar20 <= (double)lbl_82195628) {
        fn_82809D40(-(double)((float)(dVar12 * dVar16) - (float)(dVar14 * dVar13)),
                     (double)(float)(dVar19 - (double)(fVar2 + (float)(dVar15 * dVar12))),
                     (double)(float)(dVar13 * dVar16),dVar11);
        fn_82809D40(-dVar18,dVar20);
      }
      else {
        fn_82809D40((double)((float)(dVar12 * dVar16) + (float)(dVar14 * dVar13)),
                     (double)(float)(dVar19 - (double)(fVar2 + fVar1)));
        fn_82809D40(-dVar18,dVar20);
        dVar17 = (double)fn_82809D40(dVar23,dVar21);
      }
      fn_825E2618(dVar17,(double)*(float *)(iVar7 + 0x34),(double)*(float *)(iVar7 + 0x38),
                        param_2,param_3,param_6);
      fn_825E2E40(lVar9,lVar10);
      puVar5 = (unsigned int *)(in_r0 + (int)lVar10 & 0xfffffff0);
      *puVar5 = in_register_000107f0;
      puVar5[1] = in_register_000107f4;
      puVar5[2] = in_register_000107f8;
      puVar5[3] = in_vr127;
    }
    goto LAB_825e2468;
  }
  if ((param_3 & 0xffffffff) == 0) {
LAB_825e2324:
    uVar8 = 0;
  }
  else {
    fn_8261FD18(param_3);
    if (lbl_8326B4D8 == 0) {
      dVar17 = (double)*(float *)(*(int *)((int)param_3 + 0x10) * 0x28 + (int)param_3 + 0x30);
    }
    uVar8 = 1;
    if ((double)lbl_82195738 <= dVar17) goto LAB_825e2324;
  }
  *(unsigned int *)(iVar7 + 0xd4) = uVar8;
LAB_825e2468:
  fn_82F6A58C();
  return;
}

