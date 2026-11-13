typedef unsigned char bool;
extern int fn_8229FDA0();
extern int fn_8229FF28();
extern int fn_8236B950();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821916FC;
extern unsigned int ltcg_pool_0_0f;


void fn_823D4CE0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  bool bVar8;
  int iVar9;
  
  iVar5 = param_1[3];
  param_1[0x19] = param_1[0xb];
  param_1[0x2d] = param_3;
  param_1[0x2c] = param_2;
  iVar6 = *param_1;
  iVar1 = *(int *)(iVar5 + 0x14c);
  *(unsigned char *)((int)param_1 + 0x9d) = 0;
  param_1[0x18] = iVar1;
  param_1[0x25] = 0;
  iVar1 = ltcg_pool_0_0f;
  param_1[0x28] = ltcg_pool_0_0f;
  param_1[0x26] = iVar1;
  param_1[0xd] = 1;
  iVar9 = lbl_8218EC10;
  iVar1 = *(int *)(iVar5 + 0x168);
  param_1[0x2b] = 0;
  param_1[0x3a] = iVar9;
  *(unsigned char *)(param_1 + 0x38) = 0;
  iVar9 = lbl_821916FC;
  param_1[0x2a] = iVar1;
  param_1[0xf] = *(int *)(iVar5 + 0x178);
  param_1[0x10] = *(int *)(iVar5 + 400);
  param_1[0x11] = *(int *)(iVar5 + 0x1a8);
  param_1[0x12] = *(int *)(iVar5 + 0x1c0);
  fVar2 = *(float *)(iVar5 + 0x1d8);
  fVar3 = *(float *)(iVar5 + 0x1dc);
  fVar4 = (float)param_1[*(int *)(iVar5 + 0x1e0) + 0xf];
  *(float *)(iVar6 + 0x1334) =
       (float)param_1[*(int *)(iVar5 + 0x1ec) + 0xf] *
       (*(float *)(iVar5 + 0x1e8) - *(float *)(iVar5 + 0x1e4)) + *(float *)(iVar5 + 0x1e4);
  *(float *)(iVar6 + 0x1330) = fVar4 * (fVar3 - fVar2) + fVar2;
  iVar1 = param_1[3];
  fVar2 = *(float *)(iVar1 + 0x1f0);
  fVar3 = *(float *)(iVar1 + 500);
  fVar4 = (float)param_1[*(int *)(iVar1 + 0x1f8) + 0xf];
  param_1[0x1b] = iVar9;
  param_1[0xc] = (int)(fVar4 * (fVar3 - fVar2) + fVar2);
  bVar8 = *(int *)(iVar1 + 0x168) == 0;
  param_1[10] = (unsigned int)bVar8;
  if (bVar8) {
    iVar5 = *param_1;
    iVar1 = param_1[0x18];
    *(int *)(iVar5 + 0xc4) = iVar1;
    *(unsigned int *)(iVar5 + 0xc0) = 0xffffffff;
    *(int *)(iVar5 + 200) = iVar1;
    *(unsigned int *)(iVar5 + 0xbc) = 1;
    fn_8236B950((double)*(float *)(param_1[3] + 0x14c),*param_1,param_1[0x25],
                      0xffffffff82190000,0);
  }
  else {
    uVar7 = *(unsigned int *)(iVar1 + 0x168);
    iVar1 = *(int *)(**(int **)(*param_1 + 0x4b0) + 0xd4);
    fn_8229FF28(*(unsigned int *)(iVar1 + 0xc),param_1[0x25]);
    fn_8229FDA0(*(unsigned int *)(iVar1 + 0xc),uVar7);
  }
  return;
}

