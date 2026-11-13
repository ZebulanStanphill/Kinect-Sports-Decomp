extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;


void fn_82677848(int param_1,unsigned char *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (float)param_2[1] * lbl_82005328;
  fVar3 = (float)*param_2 * lbl_82005328;
  fVar4 = (float)param_2[2] * lbl_82005328;
  fVar5 = (float)param_2[3] * lbl_82005328;
  if ((*(int *)(param_1 + 0x1d0) == 3) || (*(int *)(param_1 + 0x1d0) == 6)) {
    fVar2 = (fVar2 - lbl_82002AE0) * fVar3 + lbl_82002AE0;
    fVar4 = (fVar4 - lbl_82002AE0) * fVar3 + lbl_82002AE0;
    fVar5 = (fVar5 - lbl_82002AE0) * fVar3 + lbl_82002AE0;
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  *(float *)(iVar1 + 0x1780) = fVar2;
  *(float *)(iVar1 + 0x1784) = fVar4;
  *(float *)(iVar1 + 0x1788) = fVar5;
  *(float *)(iVar1 + 0x178c) = fVar3;
  *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x8000000000000000;
  return;
}

