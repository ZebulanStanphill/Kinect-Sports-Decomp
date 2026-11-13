typedef unsigned char bool;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_8260F0C8(int param_1,unsigned __int64 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  
  iVar2 = *(int *)(**(int **)(param_1 + 0x60) + 0x93c);
  if (iVar2 == 0) {
    return;
  }
  fVar1 = *(float *)(param_3 + 0x10);
  if (fVar1 <= ltcg_pool_0_0f) {
    return;
  }
  *(float *)(iVar2 + 0x44) = fVar1;
  fVar3 = lbl_821CA460;
  fVar1 = lbl_821CA460 / fVar1;
  bVar4 = lbl_821CA460 < *(float *)(iVar2 + 0x50);
  *(float *)(iVar2 + 0x54) = fVar1 * lbl_82192734;
  *(float *)(iVar2 + 0x3c) = (*(float *)(iVar2 + 0x48) - *(float *)(iVar2 + 0x34)) * fVar1;
  *(float *)(iVar2 + 0x40) = (*(float *)(iVar2 + 0x4c) - *(float *)(iVar2 + 0x38)) * fVar1;
  if (bVar4) {
    *(float *)(iVar2 + 0x50) = fVar3;
  }
  *(unsigned char *)(iVar2 + 0x30) = 1;
  return;
}

