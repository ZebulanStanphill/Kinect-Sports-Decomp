extern int fn_8265C9E0();
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821BEA64;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_8248B928(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
             unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  float fVar1;
  unsigned int *puVar2;
  double dVar3;
  double dVar4;
  
  param_1[3] = param_2;
  dVar4 = (double)ltcg_pool_0_0f;
  param_1[4] = ltcg_pool_0_0f;
  *param_1 = &lbl_821BEA64;
  param_1[1] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  fVar1 = lbl_821922D0;
  dVar3 = (double)lbl_821922D0;
  param_1[0xb] = param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x1c] = fVar1;
  param_1[0x10] = param_7;
  param_1[0x12] = 0x140;
  param_1[0x13] = 0x100;
  param_1[0x14] = 0x140;
  param_1[0x15] = 0x100;
  param_1[0x18] = param_2;
  param_1[0x19] = param_4;
  param_1[0x1a] = 0x140;
  param_1[0x1b] = 0x100;
  param_1[0x1d] = 2;
  param_1[0x1e] = param_5;
  param_1[0x1f] = param_6;
  puVar2 = (unsigned int *)fn_8265C9E0(0x68);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[0xc] = (float)dVar4;
    puVar2[0xf] = (float)dVar4;
    puVar2[6] = param_4;
    puVar2[0x10] = (float)dVar3;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[0xd] = 0x140;
    puVar2[0xe] = 0x100;
    puVar2[0x12] = 1;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x17] = 2;
    puVar2[0x18] = param_5;
    puVar2[0x19] = param_6;
  }
  param_1[5] = puVar2;
  param_1[2] = 0;
  return param_1;
}

