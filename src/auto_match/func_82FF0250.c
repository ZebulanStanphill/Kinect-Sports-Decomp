extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_8216CBF0;
extern unsigned int lbl_821AAD20;


void fn_82FF0250(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar5 = lbl_8216CBF0;
  fVar1 = lbl_82002AE0;
  for (iVar6 = *(int *)(param_1 + 0x1c); iVar6 != *(int *)(param_1 + 0x20); iVar6 = iVar6 + 0xc) {
    fVar1 = *(float *)(iVar6 + 8) * fVar1 * lbl_82005328;
  }
  if (*(unsigned char *)(param_1 + 0xd6) != 0xff) {
    fVar1 = (float)*(unsigned char *)(param_1 + 0xd6) * fVar1 * lbl_82005328;
  }
  if (*(unsigned char *)(param_1 + 0xd7) != 0xff) {
    fVar1 = (float)*(unsigned char *)(param_1 + 0xd7) * fVar1 * lbl_82005328;
  }
  fVar2 = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x7c) + *(float *)(param_1 + 0x2c);
  fVar4 = lbl_821AAD20;
  if (fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar2 = lbl_821AAD20;
  if (fVar3 < 0.0) {
    fVar2 = fVar3;
  }
  fVar2 = fVar2 - lbl_8216C698;
  *(float *)(param_1 + 0x78) = (fVar4 - lbl_8216C698) * fVar1 - lbl_8216CBF0;
  *(float *)(param_1 + 0x80) = fVar2 * fVar1 - fVar5;
  return;
}

