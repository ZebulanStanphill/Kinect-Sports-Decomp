extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_82145200;
extern unsigned int lbl_821AAD20;


unsigned __int64
fn_82DE5138(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,float *param_5)

{
  float fVar1;
  unsigned int *puVar2;
  float fVar3;
  int in_r0;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  fVar1 = lbl_820162A0;
  if (((double)lbl_821AAD20 < param_2) && ((double)lbl_821AAD20 < param_1)) {
    puVar2 = (unsigned int *)((int)param_5 + in_r0 + 0x20 & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    puVar2 = (unsigned int *)((unsigned int)(param_5 + 0xc) & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    puVar2 = (unsigned int *)((unsigned int)(param_5 + 0x10) & 0xfffffff0);
    *puVar2 = in_register_00010000;
    puVar2[1] = in_ACC;
    puVar2[2] = in_register_00010008;
    puVar2[3] = in_vr0;
    fVar3 = lbl_82002AE0;
    param_5[8] = lbl_82002AE0;
    param_5[0xd] = fVar3;
    param_5[0x12] = fVar3;
    fVar3 = lbl_82145200;
    fVar1 = (float)((double)(float)(param_1 * param_1) * param_2) * fVar1;
    param_5[8] = fVar1;
    param_5[0xd] = fVar1;
    param_5[0x12] = fVar1;
    puVar2 = (unsigned int *)((int)param_5 + in_r0 + 0x10 & 0xfffffff0);
    *puVar2 = in_register_000100c0;
    puVar2[1] = in_register_000100c4;
    puVar2[2] = in_register_000100c8;
    puVar2[3] = in_vr12;
    *param_5 = (float)((double)(float)(param_1 * param_1) * param_1) * fVar3;
    param_5[1] = (float)param_2;
    return 0;
  }
  return 1;
}

