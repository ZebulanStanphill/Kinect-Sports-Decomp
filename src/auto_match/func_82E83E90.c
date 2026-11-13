extern int fn_82F07728();
extern int fn_82F65350();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200E1A8;
extern float lbl_82014C4C;
extern unsigned int lbl_8318892C;
extern unsigned int uStack_1a;


void fn_82E83E90(int param_1,unsigned char *param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  unsigned short uStack_1a;
  
  if ((*(int *)(param_1 + 0x7938) == 1) && (*(int *)(param_1 + 0x793c) == 2)) {
    uVar3 = fn_82F65350();
    *(unsigned int *)(param_1 + 0x594) = uVar3 & 1;
  }
  if ((*(int *)(param_1 + 0x7894) != 0) && (*(int *)(param_1 + 0x1a64) == 0)) {
    param_2 = *(unsigned char **)(param_1 + 0x78cc);
    *(unsigned char **)(param_1 + 0x2a0) = param_2;
  }
  if (*(int *)(param_1 + 0x78a0) != 0) {
    *(unsigned int *)(param_1 + 0x590) = *(unsigned int *)(param_1 + 0x78d8);
  }
  if (*(int *)(param_1 + 0x78ac) != 0) {
    *(unsigned int *)(param_1 + 0x594) = *(unsigned int *)(param_1 + 0x78e4);
  }
  *(unsigned char **)(param_1 + 0x58c) = param_2;
  if (8 < (int)param_2) {
    *(unsigned int *)(param_1 + 0x590) = 0;
  }
  if (*(int *)(param_1 + 0x598) == 0) {
    *(unsigned int *)(param_1 + 0x594) = (unsigned int)(param_2 < (unsigned char *)0x9) - ((int)param_2 >> 0x1f);
  }
  if (*(int *)(param_1 + 0x594) == 0) {
    uVar7 = *(unsigned int *)(param_1 + 0x2014);
  }
  else {
    uVar7 = *(unsigned int *)(param_1 + 0x2018);
  }
  *(unsigned int *)(param_1 + 0x2010) = uVar7;
  if ((int)param_2 < 9) {
    iVar8 = param_1 + 0x4d74;
    iVar6 = param_1 + 0x4df4;
    iVar5 = param_1 + 0x4c74;
    iVar4 = param_1 + 0x4cf4;
  }
  else {
    iVar8 = param_1 + 0x4d34;
    iVar6 = param_1 + 0x4db4;
    iVar5 = param_1 + 0x4c34;
    iVar4 = param_1 + 0x4cb4;
  }
  *(int *)(param_1 + 0x4e38) = iVar4;
  *(int *)(param_1 + 0x4e2c) = iVar5;
  *(int *)(param_1 + 20000) = iVar6;
  *(int *)(param_1 + 0x4e14) = iVar8;
  if (*(int *)(param_1 + 0x594) == 0) {
    *(int *)(param_1 + 0x6d24) = param_1 + 0x5324;
    if (*(int *)(param_1 + 0x598) == 0) {
      param_2 = (&lbl_8318892C)[(int)param_2];
    }
  }
  else {
    *(int *)(param_1 + 0x6d24) = param_1 + 0x6024;
  }
  *(unsigned char **)(param_1 + 0x588) = param_2;
  *(unsigned int *)(param_1 + 0x924) = 0;
  if ((*(int *)(param_1 + 0x920) != 0) && (*(int *)(param_1 + 0x1eb8) == 0)) {
    if ((int)param_2 < 9) {
      if ((*(int *)(param_1 + 0xa0c) == 0) ||
         (*(unsigned int *)(param_1 + 0x924) = 7, 3 < (int)param_2)) goto code_r0x82e84034;
      uVar7 = 2;
    }
    else {
      uVar7 = 1;
    }
    *(unsigned int *)(param_1 + 0x924) = uVar7;
  }
code_r0x82e84034:
  dVar9 = (double)lbl_8200E1A8;
  iVar5 = (*(int *)(param_1 + 0x590) + (int)param_2 * 2) * 0x34 + *(int *)(param_1 + 0x6d24);
  uVar7 = *(unsigned int *)(iVar5 + -0xc);
  dVar12 = (double)lbl_82002AE0;
  dVar13 = (double)lbl_82005344;
  *(unsigned int *)(param_1 + 0x5b0) = uVar7;
  *(unsigned int *)(param_1 + 0x5ac) = uVar7;
  fVar1 = *(float *)(iVar5 + -4);
  *(float *)(param_1 + 0x4b38) = fVar1;
  *(float *)(param_1 + 0x4b34) = fVar1;
  *(int *)(param_1 + 0x5c0) = (int)((double)fVar1 * dVar9);
  *(int *)(param_1 + 0x5c4) = (int)((double)fVar1 * dVar9);
  iVar4 = *(int *)(iVar5 + -0x34);
  *(int *)(param_1 + 0x5b4) = iVar4;
  dVar11 = (double)(__int64)iVar4;
  *(float *)(param_1 + 0x4b24) = (float)(__int64)iVar4;
  *(unsigned int *)(param_1 + 0x4b2c) = *(unsigned int *)(param_1 + 0x4b24);
  dVar10 = (double)(float)(dVar12 / dVar11);
  *(float *)(param_1 + 0x4b28) = (float)(dVar12 / dVar11);
  *(float *)(param_1 + 0x4b30) = (float)(dVar11 * dVar13);
  *(int *)(param_1 + 0x5bc) = (int)(dVar10 * dVar9);
  *(unsigned int *)(param_1 + 0x5b8) = *(unsigned int *)(iVar5 + -0x30);
  fVar2 = lbl_82014C4C;
  fVar1 = lbl_82002C5C;
  if ((*(unsigned int *)(param_1 + 0x924) & 1) == 0) {
    uStack_1a = (unsigned short)(int)(*(float *)(param_1 + 0x4b34) * lbl_82014C4C + lbl_82002C5C);
    **(unsigned short **)(param_1 + 0x4480) = uStack_1a;
    uStack_1a = (unsigned short)(int)(*(float *)(param_1 + 0x4b38) * fVar2 + fVar1);
    **(unsigned short **)(param_1 + 0x4484) = uStack_1a;
  }
  else {
    **(unsigned short **)(param_1 + 0x4480) = 0;
    **(unsigned short **)(param_1 + 0x4484) = 0;
  }
  fn_82F07728(dVar10,dVar11,param_1);
  return;
}

