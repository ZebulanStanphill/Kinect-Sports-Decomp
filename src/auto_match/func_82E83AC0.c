extern int fn_82F07728();
extern int fn_82F65350();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8200E1A8;
extern unsigned int lbl_82014C4C;
extern unsigned int lbl_8318892C;
extern unsigned int uStack_1a;


void fn_82E83AC0(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned short uStack_1a;
  
  if ((*(int *)(param_1 + 0x7938) == 1) && (*(int *)(param_1 + 0x793c) == 2)) {
    uVar5 = fn_82F65350();
    *(unsigned int *)(param_1 + 0x594) = uVar5 & 1;
  }
  iVar11 = *(int *)(param_1 + 0xaf0);
  if ((iVar11 == 1) && (*(int *)(param_1 + 0x1a64) == 0)) {
    if (*(int *)(param_1 + 0x7898) != 0) {
      param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x78d0);
      *(unsigned int *)(param_1 + 0x2a4) = *(unsigned int *)(param_1 + 0x78d0);
    }
    if (*(int *)(param_1 + 0x78a4) != 0) {
      *(unsigned int *)(param_1 + 0x590) = *(unsigned int *)(param_1 + 0x78dc);
    }
    if (*(int *)(param_1 + 0x78b0) != 0) {
      uVar10 = *(unsigned int *)(param_1 + 0x78e8);
LAB_82e83b94:
      *(unsigned int *)(param_1 + 0x594) = uVar10;
    }
  }
  else if (iVar11 == 2) {
    if (*(int *)(param_1 + 0x789c) != 0) {
      param_2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x78d4);
      *(unsigned int *)(param_1 + 0x2a4) = *(unsigned int *)(param_1 + 0x78d4);
    }
    if (*(int *)(param_1 + 0x78a8) != 0) {
      *(unsigned int *)(param_1 + 0x590) = *(unsigned int *)(param_1 + 0x78e0);
    }
    if (*(int *)(param_1 + 0x78b4) != 0) {
      uVar10 = *(unsigned int *)(param_1 + 0x78ec);
      goto LAB_82e83b94;
    }
  }
  iVar6 = (int)param_2;
  *(int *)(param_1 + 0x58c) = iVar6;
  if (8 < iVar6) {
    *(unsigned int *)(param_1 + 0x590) = 0;
  }
  if (*(int *)(param_1 + 0x598) == 0) {
    *(unsigned int *)(param_1 + 0x594) = (unsigned int)(param_2 < 9) - (iVar6 >> 0x1f);
  }
  if (*(int *)(param_1 + 0x594) == 0) {
    uVar10 = *(unsigned int *)(param_1 + 0x2014);
  }
  else {
    uVar10 = *(unsigned int *)(param_1 + 0x2018);
  }
  *(unsigned int *)(param_1 + 0x2010) = uVar10;
  if (iVar6 < 9) {
    iVar9 = param_1 + 0x4d74;
    iVar8 = param_1 + 0x4df4;
    iVar7 = param_1 + 0x4c74;
    iVar6 = param_1 + 0x4cf4;
  }
  else {
    iVar9 = param_1 + 0x4d34;
    iVar8 = param_1 + 0x4db4;
    iVar7 = param_1 + 0x4c34;
    iVar6 = param_1 + 0x4cb4;
  }
  *(int *)(param_1 + 0x4e38) = iVar6;
  *(int *)(param_1 + 0x4e2c) = iVar7;
  *(int *)(param_1 + 20000) = iVar8;
  *(int *)(param_1 + 0x4e14) = iVar9;
  if (*(int *)(param_1 + 0x594) == 0) {
    *(int *)(param_1 + 0x6d24) = param_1 + 0x5324;
    if (*(int *)(param_1 + 0x598) == 0) {
      param_2 = (unsigned __int64)*(unsigned int *)((int)&lbl_8318892C + (int)((param_2 & 0xffffffff) << 2));
    }
  }
  else {
    *(int *)(param_1 + 0x6d24) = param_1 + 0x6024;
  }
  iVar6 = (int)param_2;
  *(int *)(param_1 + 0x588) = iVar6;
  *(unsigned int *)(param_1 + 0x924) = 0;
  if (((8 < iVar6) && (*(int *)(param_1 + 0x1eb8) == 0)) &&
     (*(unsigned int *)(param_1 + 0x924) = *(unsigned int *)(param_1 + 0x920), iVar11 == 2)) {
    *(unsigned int *)(param_1 + 0x924) = 0;
  }
  if (iVar6 < 5) {
    *(unsigned int *)(param_1 + 0x5b0) = 8;
    *(unsigned int *)(param_1 + 0x5ac) = 8;
    if ((*(int *)(param_1 + 0x624) == 0) || (2 < iVar6)) goto LAB_82e83cd0;
    iVar11 = (int)((param_2 & 0xffffffff) << 1);
  }
  else {
    iVar11 = (iVar6 >> 1) + (unsigned int)(iVar6 < 0 && (param_2 & 1) != 0) + 6;
  }
  *(int *)(param_1 + 0x5ac) = iVar11;
  *(int *)(param_1 + 0x5b0) = iVar11;
LAB_82e83cd0:
  *(int *)(param_1 + 0x1ad8) = iVar6;
  *(int *)(param_1 + 0x4b18) = *(int *)(param_1 + 0x58c) * iVar6 * 5 >> 2;
  if (*(int *)(param_1 + 0x628) != 0) {
    *(int *)(param_1 + 0x4b18) = iVar6 * iVar6 * 0x14641 >> 0x10;
    *(int *)(param_1 + 0x1ad8) = iVar6 * 0x121 + 0x80 >> 8;
  }
  fVar4 = lbl_8200E1A8;
  fVar3 = lbl_82002C5C;
  fVar2 = lbl_82002AE0;
  fVar1 = lbl_82002AE0 / (float)(__int64)*(int *)(param_1 + 0x5b0);
  *(float *)(param_1 + 0x4b38) = fVar1;
  fVar2 = fVar2 / (float)(__int64)*(int *)(param_1 + 0x5ac);
  *(float *)(param_1 + 0x4b34) = fVar2;
  *(int *)(param_1 + 0x5c0) = (int)(fVar2 * fVar4);
  *(int *)(param_1 + 0x5c4) = (int)(fVar1 * fVar4);
  fVar1 = lbl_82014C4C;
  if ((*(unsigned int *)(param_1 + 0x924) & 1) == 0) {
    uStack_1a = (unsigned short)(int)(fVar2 * lbl_82014C4C + fVar3);
    **(unsigned short **)(param_1 + 0x4480) = uStack_1a;
    uStack_1a = (unsigned short)(int)(*(float *)(param_1 + 0x4b38) * fVar1 + fVar3);
    **(unsigned short **)(param_1 + 0x4484) = uStack_1a;
  }
  else {
    **(unsigned short **)(param_1 + 0x4480) = 0;
    **(unsigned short **)(param_1 + 0x4484) = 0;
  }
  *(int *)(param_1 + 0x588) = iVar6;
  iVar11 = (int)((param_2 & 0xffffffff) << 1);
  *(int *)(param_1 + 0x5b8) = iVar6;
  *(int *)(param_1 + 0x5b4) = iVar11;
  fVar1 = lbl_82005344;
  *(float *)(param_1 + 0x4b28) = fVar3 / (float)(__int64)iVar6;
  *(float *)(param_1 + 0x4b24) = (float)(__int64)iVar11;
  *(unsigned int *)(param_1 + 0x4b2c) = *(unsigned int *)(param_1 + 0x4b24);
  *(float *)(param_1 + 0x4b30) = (float)(__int64)iVar11 * fVar1;
  *(int *)(param_1 + 0x5bc) = (int)((fVar3 / (float)(__int64)iVar6) * fVar4);
  fn_82F07728(param_1);
  return;
}

