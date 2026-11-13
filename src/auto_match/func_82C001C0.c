extern int fn_82BFFF08();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82C001C0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar6;
  float fVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  
  fVar7 = lbl_821AAD20;
  fVar1 = *(float *)(param_1 + 0x84);
  fVar3 = fVar1 * *(float *)(param_1 + 0x8c);
  fVar2 = *(float *)(param_1 + 0x88);
  fVar4 = (float)*(unsigned int *)(param_1 + 0x7c);
  fVar5 = (float)*(unsigned int *)(param_1 + 0x80);
  if (fVar3 / fVar2 <= fVar4 / fVar5) {
    fVar4 = (fVar5 * fVar3) / fVar4;
    fVar5 = (fVar2 - fVar4) * 0.5f;
    fVar2 = fVar4 + fVar5;
    fVar3 = lbl_821AAD20;
  }
  else {
    fVar4 = ((fVar4 * fVar2) / fVar5) / *(float *)(param_1 + 0x8c);
    fVar3 = (fVar1 - fVar4) * 0.5f;
    fVar1 = fVar3 + fVar4;
    fVar5 = lbl_821AAD20;
  }
  lVar9 = (__int64)(int)fVar2;
  *(float *)(param_1 + 0x9c) = lbl_821AAD20;
  lVar8 = (__int64)(int)fVar5;
  *(float *)(param_1 + 0xa0) = fVar7;
  *(float *)(param_1 + 0xb4) = fVar7;
  *(int *)(param_1 + 100) = (int)fVar5;
  lVar11 = (__int64)(int)fVar1;
  *(float *)(param_1 + 0xc4) = fVar7;
  lVar10 = (__int64)(int)fVar3;
  *(float *)(param_1 + 0xd8) = fVar7;
  uVar6 = lbl_82002AE0;
  *(unsigned int *)(param_1 + 0xb0) = lbl_82002AE0;
  *(unsigned int *)(param_1 + 200) = uVar6;
  *(float *)(param_1 + 0xa4) = (float)lVar11;
  *(float *)(param_1 + 0xe0) = (float)lVar11;
  *(int *)(param_1 + 0x68) = (int)fVar1;
  *(float *)(param_1 + 0xf4) = (float)lVar11;
  *(int *)(param_1 + 0x60) = (int)fVar3;
  *(unsigned int *)(param_1 + 0xdc) = uVar6;
  *(int *)(param_1 + 0x6c) = (int)fVar2;
  *(unsigned int *)(param_1 + 0xec) = uVar6;
  *(float *)(param_1 + 0xf0) = fVar7;
  *(unsigned int *)(param_1 + 0x100) = uVar6;
  *(float *)(param_1 + 0x90) = (float)lVar10;
  *(float *)(param_1 + 0xb8) = (float)lVar10;
  *(float *)(param_1 + 0x94) = (float)lVar8;
  *(float *)(param_1 + 0xa8) = (float)lVar8;
  *(float *)(param_1 + 0xbc) = (float)lVar9;
  *(float *)(param_1 + 0xcc) = (float)lVar10;
  *(float *)(param_1 + 0xd0) = (float)lVar9;
  *(float *)(param_1 + 0xe4) = (float)lVar8;
  *(float *)(param_1 + 0xf8) = (float)lVar9;
  *(unsigned int *)(param_1 + 0x104) = uVar6;
  fn_82BFFF08();
  return 0;
}

