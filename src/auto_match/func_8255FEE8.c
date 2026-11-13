extern unsigned int lbl_821917C0;
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_8255FEE8(double param_1,int param_2,unsigned int *param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  double dVar4;
  
  fVar1 = ltcg_pool_0_0f;
  fVar3 = lbl_821CA460;
  dVar4 = (double)ltcg_pool_0_0f;
  param_3[6] = 0;
  param_3[9] = 0;
  uVar2 = lbl_821917C0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[1] = fVar3;
  param_3[10] = 0;
  param_3[4] = uVar2;
  param_3[0xb] = 0;
  param_3[2] = fVar1;
  param_3[3] = 0x20;
  param_3[5] = fVar1;
  param_3[7] = 0x40;
  param_3[8] = uVar2;
  *param_3 = 0x4d697850;
  param_3[1] = *(unsigned int *)(param_2 + 0x48);
  param_3[3] = (int)*(char *)(param_2 + 0x5a);
  param_3[4] = *(unsigned int *)(param_2 + 0x54);
  param_3[6] = (int)*(char *)(param_2 + 0x58);
  param_3[7] = (int)*(char *)(param_2 + 0x59);
  param_3[9] = *(unsigned int *)(param_2 + 0x44);
  param_3[0xc] = param_2;
  if (param_1 < dVar4) {
    param_3[8] = *(unsigned int *)(param_2 + 0x50);
  }
  else {
    param_3[8] = (float)param_1;
  }
  fVar1 = lbl_82192734;
  if ((param_4 == 0) &&
     (fVar1 = *(float *)(param_2 + 0x4c), *(float *)(param_2 + 0x4c) == lbl_821954E8)) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar3;
  }
  param_3[5] = fVar1;
  return;
}

