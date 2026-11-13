extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B4524;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82376B08(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  float fVar5;
  unsigned int *puVar6;
  
  puVar6 = (unsigned int *)fn_8265C9E0(0x34);
  if (puVar6 == (unsigned int *)0x0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6[1] = 1;
    *puVar6 = &lbl_821AD588;
    puVar6[2] = 1;
    if (puVar6 + 3 != (unsigned int *)0x0) {
      fVar1 = *param_7;
      fVar2 = *param_6;
      uVar3 = *param_5;
      uVar4 = *param_4;
      puVar6[4] = *param_3;
      fVar5 = ltcg_pool_0_0f;
      puVar6[5] = param_2;
      puVar6[3] = &lbl_821B4524;
      puVar6[8] = 0;
      puVar6[9] = 1;
      if (fVar1 <= fVar2) {
        fVar2 = fVar5;
      }
      puVar6[10] = fVar2;
      puVar6[6] = uVar4;
      puVar6[0xb] = fVar5;
      puVar6[7] = uVar3;
      puVar6[0xc] = fVar1;
    }
  }
  param_1[1] = puVar6;
  *param_1 = puVar6 + 3;
  return param_1;
}

