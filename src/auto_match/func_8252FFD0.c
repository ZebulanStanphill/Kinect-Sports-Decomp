extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821955C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F844;
extern unsigned int lbl_83296810;
extern unsigned int lbl_83296814;


void fn_8252FFD0(double param_1,double param_2,double param_3)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  int in_r6;
  int iVar4;
  int iVar5;
  
  iVar3 = lbl_8327F844;
  fVar2 = ltcg_pool_0_0f;
  if (in_r6 < 0) {
    return;
  }
  if (1 < in_r6) {
    return;
  }
  iVar5 = in_r6 * 0x2c + lbl_8327F844;
  if ((*(char *)(iVar5 + 0x40) != '\0') && (ltcg_pool_0_0f < *(float *)(iVar5 + 0x4c))) {
    return;
  }
  *(float *)(iVar5 + 0x54) = ltcg_pool_0_0f;
  *(float *)(iVar5 + 0x50) = fVar2;
  *(unsigned char *)(iVar5 + 0x40) = 1;
  fVar2 = lbl_821CA460;
  iVar4 = in_r6 * 0x68;
  if ((float)(param_1 - (double)lbl_8218EC10) < 0.0) {
    param_1 = lbl_821955C0;
  }
  *(float *)(iVar5 + 0x44) = (float)param_1;
  fVar2 = fVar2 / (float)param_1;
  *(float *)(iVar5 + 0x4c) = *(float *)(&lbl_83296810 + iVar4) * fVar2;
  *(float *)(iVar5 + 0x48) = *(float *)(&lbl_83296814 + iVar4) * fVar2;
  *(float *)(iVar5 + 100) = (float)param_2;
  *(float *)(iVar5 + 0x68) = (float)param_3;
  *(unsigned int *)(iVar5 + 0x5c) = *(unsigned int *)(&lbl_83296810 + iVar4);
  uVar1 = *(unsigned int *)(&lbl_83296814 + iVar4);
  *(unsigned int *)(iVar5 + 0x60) = 1;
  *(unsigned int *)((in_r6 + 2) * 0x2c + iVar3) = uVar1;
  return;
}

