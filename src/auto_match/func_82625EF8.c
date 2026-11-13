extern int fn_8255A1C8();
extern int fn_825C2F80();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821925C0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_82625EF8(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  double dVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar5 = fn_825C2F80();
  dVar6 = (double)lbl_821CA460;
  fn_8255A1C8(uVar5,(double)ltcg_pool_0_0f,dVar6);
  fVar1 = *param_3;
  puVar3 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar3 = in_register_000104d0;
  puVar3[1] = in_register_000104d4;
  puVar3[2] = in_register_000104d8;
  puVar3[3] = in_vr77;
  fVar2 = fVar1 * lbl_821925C0;
  uVar4 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  lbl_83265A28 = uVar4;
  *param_1 = (fVar1 * lbl_8218E8E8 - fVar2) *
             (float)((double)(float)(uVar4 & 0x7fffff | 0x3f800000) - dVar6) + fVar2;
  fVar1 = param_3[1];
  if (param_2 == 0) {
    uVar4 = uVar4 * 0x19660d + 0x3c6ef35f;
    fVar1 = (float)((double)(float)(uVar4 & 0x7fffff | 0x3f800000) - dVar6) * fVar1;
    lbl_83265A28 = uVar4;
  }
  param_1[1] = fVar1 * param_1[1];
  fVar1 = param_3[2];
  if (param_2 == 0) {
    lbl_83265A28 = uVar4 * 0x19660d + 0x3c6ef35f;
    fVar1 = (float)((double)(float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - dVar6) * fVar1;
  }
  param_1[2] = param_1[2] * fVar1;
  return;
}

