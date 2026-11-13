typedef unsigned char bool;
extern int fn_824DF2E8();
extern int fn_824DF3E0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824E0D28(double param_1,int param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  
  fn_824DF2E8((double)*(float *)(param_3 + 0x54),param_2 + 0x20);
  *(float *)(param_2 + 0x3c) = (float)((double)*(float *)(param_2 + 0x3c) + param_1);
  fn_824DF3E0(param_2 + 0x20);
  pfVar2 = *(float **)(param_2 + 4);
  bVar5 = *pfVar2 < lbl_821CA460 - *(float *)(param_3 + 100) / *(float *)(param_2 + 0x38);
  uVar4 = (unsigned int)bVar5;
  *(unsigned int *)(param_2 + 0x10) = uVar4;
  uVar3 = ltcg_pool_0_0f;
  if ((uVar4 != 0) && ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0xc) != 0)))) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x14) + param_1);
    *(float *)(param_2 + 0x14) = fVar1;
    if (fVar1 <= pfVar2[1]) goto LAB_824e0df8;
    *(unsigned int *)(param_2 + 0x18) = uVar3;
    *(unsigned int *)(param_2 + 8) = 1;
    *(unsigned int *)(param_2 + 0xc) = 0;
  }
  *(unsigned int *)(param_2 + 0x14) = uVar3;
LAB_824e0df8:
  if (*(int *)(param_2 + 8) != 0) {
    if (*(int *)(param_2 + 0xc) != 0) {
      *(float *)(param_2 + 0x18) = (float)((double)*(float *)(param_2 + 0x18) + param_1);
    }
    if (pfVar2[2] < *(float *)(param_2 + 0x18)) {
      *(unsigned int *)(param_2 + 0x18) = uVar3;
      *(unsigned int *)(param_2 + 8) = 0;
      *(unsigned int *)(param_2 + 0xc) = 0;
    }
  }
  if ((!bVar5) && (*(int *)(param_2 + 8) != 0)) {
    *(unsigned int *)(param_2 + 0xc) = 1;
  }
  return;
}

