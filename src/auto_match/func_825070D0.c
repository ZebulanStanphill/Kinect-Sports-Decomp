extern int fn_82547C80();
extern unsigned int lbl_821917B0;
extern float lbl_821917C4;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_825070D0(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  double dVar4;
  
  dVar4 = (double)ltcg_pool_0_0f;
  if ((dVar4 < (double)*(float *)(param_2 + 0xd5c)) &&
     (fVar1 = (float)((double)*(float *)(param_2 + 0xd5c) - param_1),
     *(float *)(param_2 + 0xd5c) = fVar1, (double)fVar1 < dVar4)) {
    *(unsigned int *)(param_2 + 0xd4c) = 0;
  }
  if (*(int *)(param_2 + 0xd50) == 3) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xd54) - param_1);
    *(float *)(param_2 + 0xd54) = fVar1;
    if ((double)fVar1 < dVar4) {
      *(unsigned int *)(param_2 + 0xd50) = *(unsigned int *)(param_2 + 0xd4c);
    }
  }
  else {
    fVar1 = (float)((double)*(float *)(param_2 + 0xd58) - param_1);
    *(float *)(param_2 + 0xd58) = fVar1;
    fVar3 = lbl_821CA460;
    if ((double)fVar1 < dVar4) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      uVar2 = lbl_83265A28 & 0x7fffff;
      *(unsigned int *)(param_2 + 0xd50) = 3;
      fVar1 = ((float)(uVar2 | 0x3f800000) - fVar3) * lbl_821917C4 + lbl_821917B0;
      *(unsigned int *)(param_2 + 0xd54) = lbl_821917D4;
      *(float *)(param_2 + 0xd58) = fVar1;
    }
  }
  fn_82547C80((unsigned __int64)*(unsigned int *)(param_2 + 0x8c0) + 0xd0,2,*(unsigned int *)(param_2 + 0xd50) & 0xff);
  return;
}

