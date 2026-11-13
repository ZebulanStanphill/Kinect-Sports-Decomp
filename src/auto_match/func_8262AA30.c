typedef unsigned char bool;
extern int fn_8255D288();
extern int fn_825D4FE8();
extern int fn_8263C7F0();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CB8A4;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_8262AA30(unsigned int *param_1,unsigned __int64 param_2,int param_3,unsigned int param_4,int param_5)

{
  float fVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  float fVar4;
  int in_r0;
  unsigned int uVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  
  fn_825D4FE8(param_1,param_2,3);
  dVar6 = (double)ltcg_pool_0_0f;
  param_1[0x3831] = ltcg_pool_0_0f;
  param_1[0x3833] = param_4;
  param_1[0x3832] = param_3;
  *(unsigned char *)(param_1 + 0x3834) = 0;
  *param_1 = &lbl_821CB8A4;
  *(unsigned char *)((int)param_1 + 0xe0d1) = 0;
  *(bool *)((int)param_1 + 0xe0d2) = param_5 == 0;
  param_1[0x383e] = 0;
  param_1[0x383f] = 0;
  param_1[0x3840] = 0;
  uVar5 = fn_8263C7F0(0x80,0x80,1,1,0,0x18280186,0,3);
  param_1[0x14] = uVar5;
  fn_8255D288(param_3,param_1 + 0x382c,param_1 + 6);
  param_1[6] = (float)param_1[6] * lbl_82192604;
  if (param_3 == 0) {
    param_1[0x381c] = 0;
  }
  else {
    if ((*(int *)(param_3 + 0x4c) == 0) || (*(int *)(param_3 + 0x8c0) == 0)) {
      uVar5 = 0;
    }
    else {
      param_1[0x322c] = *(int *)(param_3 + 0x8c0);
      puVar2 = (unsigned int *)(in_r0 + param_3 + 0xf0 & 0xfffffff0);
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar11 = puVar2[3];
      uVar5 = 1;
      puVar2 = (unsigned int *)(param_3 + 0x100U & 0xfffffff0);
      uVar20 = *puVar2;
      uVar21 = puVar2[1];
      uVar22 = puVar2[2];
      uVar23 = puVar2[3];
      puVar2 = (unsigned int *)(param_3 + 0x110U & 0xfffffff0);
      uVar16 = *puVar2;
      uVar17 = puVar2[1];
      uVar18 = puVar2[2];
      uVar19 = puVar2[3];
      puVar2 = (unsigned int *)(param_3 + 0x120U & 0xfffffff0);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar15 = puVar2[3];
      param_1[0x322d] = 0xffffffff;
      uVar10 = lbl_821CA460;
      param_1[0x322f] = 0xffffffff;
      param_1[0x322e] = uVar10;
      param_1[0x3230] = 0xffffffff;
      puVar2 = (unsigned int *)((int)param_1 + in_r0 + 0xc870 & 0xfffffff0);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar11;
      puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x3220) & 0xfffffff0);
      *puVar2 = uVar20;
      puVar2[1] = uVar21;
      puVar2[2] = uVar22;
      puVar2[3] = uVar23;
      puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x3224) & 0xfffffff0);
      *puVar2 = uVar16;
      puVar2[1] = uVar17;
      puVar2[2] = uVar18;
      puVar2[3] = uVar19;
      puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x3228) & 0xfffffff0);
      *puVar2 = uVar12;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
    }
    param_1[0x381c] = uVar5;
    fn_8255D288(param_3,param_1 + 0x382c,param_1 + 0x3830);
    puVar2 = (unsigned int *)(param_3 + 0x50U & 0xfffffff0);
    uVar5 = puVar2[1];
    uVar10 = puVar2[2];
    uVar7 = puVar2[3];
    puVar3 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar3[2] = uVar10;
    puVar3[3] = uVar7;
  }
  fVar1 = (float)param_1[6];
  fVar4 = fVar1 * lbl_82191FB0;
  param_1[0x15] = fVar1 * lbl_821917B0 + (float)param_1[9];
  *(unsigned char *)(param_1 + 0x383d) = 0;
  param_1[0x321a] = (float)dVar6;
  param_1[0x10] = param_1[0x10] | 6;
  param_1[0x3218] = (float)dVar6;
  param_1[0x3219] = fVar4;
  param_1[0xc] = 1;
  param_1[0xd] = 1;
  return param_1;
}

