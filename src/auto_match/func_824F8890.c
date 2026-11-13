#define NAN(x) ((x) != (x))
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_824FA0F8();
extern int fn_824FA188();
extern int fn_8255A780();
extern int fn_82F4EC30();
extern int fn_82F53418();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956BC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D42F8;


void fn_824F8890(int param_1)

{
  float fVar1;
  float fVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  
  if (*(int *)(param_1 + 0x300) == 0) {
    uVar4 = fn_82F4EC30(0);
    iVar5 = fn_82F53418(uVar4,param_1 + 0x308,1);
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
    *(int *)(param_1 + 0x300) = iVar6;
  }
  if (*(int *)(param_1 + 0x304) == 0) {
    uVar4 = fn_82F4EC30(0);
    iVar5 = fn_82F53418(uVar4,param_1 + 0x30c,1);
    iVar6 = 0;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
    *(int *)(param_1 + 0x304) = iVar6;
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x300) + 0x44);
  puVar3 = (unsigned int *)(*(int *)(param_1 + 0x300) + 0x50U & 0xfffffff0);
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  puVar7 = (unsigned int *)(*(int *)(param_1 + 0x304) + 0x50U & 0xfffffff0);
  uVar14 = *puVar7;
  uVar15 = puVar7[1];
  uVar16 = puVar7[2];
  uVar17 = puVar7[3];
  iVar5 = *(int *)(*(int *)(param_1 + 0x304) + 0x44);
  puVar7 = (unsigned int *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *puVar7 = *puVar3;
  puVar7[1] = uVar11;
  puVar7[2] = uVar12;
  puVar7[3] = uVar13;
  fVar1 = ltcg_pool_0_0f;
  dVar8 = (double)ltcg_pool_0_0f;
  puVar7 = &lbl_831D42F8;
  puVar3 = (unsigned int *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar3 = uVar14;
  puVar3[1] = uVar15;
  puVar3[2] = uVar16;
  puVar3[3] = uVar17;
  if (iVar6 == 0) {
    if ((iVar5 != 0) && ((double)fStack_20 != dVar8)) {
      dVar9 = (double)lbl_831D42F8 * (double)fStack_20;
      fStack_2c = fStack_1c;
LAB_824f899c:
      *(float *)(param_1 + 0x220) = -(float)dVar9;
      *(float *)(param_1 + 0x224) = lbl_831D42F8 * fStack_2c;
      puVar7 = &lbl_831D42F8;
      fn_824FA188(param_1,2);
    }
  }
  else if (iVar5 == 0) {
    if ((double)fStack_30 != dVar8) {
      dVar9 = (double)lbl_831D42F8 * (double)fStack_30;
      goto LAB_824f899c;
    }
  }
  else {
    *(float *)(param_1 + 0x220) = fVar1;
  }
  fVar1 = (float)puVar7[1];
  dVar9 = (double)(*(float *)(param_1 + 0x220) - -fVar1);
  fVar2 = *(float *)(param_1 + 0x220);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar9 < dVar8) << 2) | (unsigned int)(NAN(dVar9) || NAN(dVar8)) << 2)) < 0.0)
  {
    fVar2 = -fVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(fVar2 - fVar1) < dVar8) << 2) |
                (unsigned int)(NAN((double)(fVar2 - fVar1)) || NAN(dVar8)) << 2)) < 0.0) {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x220) = fVar1;
  fVar2 = (float)puVar7[1];
  dVar9 = (double)(fVar1 - -fVar2);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar9 < dVar8) << 2) | (unsigned int)(NAN(dVar9) || NAN(dVar8)) << 2)) < 0.0)
  {
    fVar1 = -fVar2;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(fVar1 - fVar2) < dVar8) << 2) |
                (unsigned int)(NAN((double)(fVar1 - fVar2)) || NAN(dVar8)) << 2)) < 0.0) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x224) = fVar2;
  dVar9 = (double)fn_824FA0F8(param_1);
  *(float *)(param_1 + 0x21c) = (float)dVar9;
  if (*(int *)(param_1 + 0x70) != 2) {
    if (*(int *)(param_1 + 0x70) != 3) {
      return;
    }
    dVar10 = (double)*(float *)(param_1 + 0x220);
    fVar1 = (float)(dVar10 + (double)*(float *)(param_1 + 0x218));
    *(float *)(param_1 + 0x218) = fVar1;
    iVar6 = *(int *)(param_1 + 0x2d8) * 0x10 + param_1;
    if (((dVar8 < dVar10) && (*(float *)(iVar6 + 0x2b8) < fVar1)) ||
       ((dVar10 < dVar8 && (*(float *)(param_1 + 0x218) < *(float *)(iVar6 + 0x2b8))))) {
      *(unsigned int *)(param_1 + 0x218) = *(unsigned int *)(iVar6 + 0x2b8);
      *(float *)(param_1 + 0x220) = (float)dVar8;
    }
    iVar6 = fn_8255A780(dVar9,(double)*(float *)(iVar6 + 700),
                         (double)((float)puVar7[5] + lbl_821917D4));
    if (iVar6 == 0) {
      *(float *)(param_1 + 0x21c) = (float)((double)*(float *)(param_1 + 0x2dc) + extraout_f1);
      return;
    }
    if ((double)*(float *)(param_1 + 0x220) != dVar8) {
      return;
    }
    uVar4 = 1;
    goto LAB_824f8bc4;
  }
  fVar1 = *(float *)(param_1 + 0x220) * (float)puVar7[8];
  *(float *)(param_1 + 0x220) = fVar1;
  fVar2 = lbl_82193E50;
  fVar1 = fVar1 + *(float *)(param_1 + 0x218);
  *(float *)(param_1 + 0x218) = fVar1;
  if (fVar1 <= fVar2) {
    if (fVar1 < lbl_821956BC) {
      fVar1 = fVar1 + lbl_82193E2C;
      goto LAB_824f8ba0;
    }
  }
  else {
    fVar1 = fVar1 - lbl_82193E2C;
LAB_824f8ba0:
    *(float *)(param_1 + 0x218) = fVar1;
  }
  if (*(float *)(param_1 + 0x220) < -(float)puVar7[4]) {
    return;
  }
  if ((float)puVar7[4] <= *(float *)(param_1 + 0x220)) {
    return;
  }
  uVar4 = 3;
LAB_824f8bc4:
  fn_824FA188(param_1,uVar4);
  return;
}

