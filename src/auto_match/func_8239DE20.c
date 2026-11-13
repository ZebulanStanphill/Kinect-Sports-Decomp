extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B5348;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_8239DE20(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  float fVar6;
  unsigned int *puVar7;
  
  puVar7 = (unsigned int *)fn_8265C9E0(0x30);
  if (puVar7 == (unsigned int *)0x0) {
    puVar7 = (unsigned int *)0x0;
  }
  else {
    puVar7[1] = 1;
    *puVar7 = &lbl_821AD588;
    puVar7[2] = 1;
    if (puVar7 + 3 != (unsigned int *)0x0) {
      uVar3 = *param_5;
      uVar4 = *param_4;
      uVar5 = *param_3;
      fVar1 = *param_7;
      fVar2 = *param_6;
      puVar7[5] = param_2;
      puVar7[0xb] = fVar1;
      puVar7[3] = &lbl_821B5348;
      fVar6 = ltcg_pool_0_0f;
      puVar7[6] = uVar4;
      puVar7[4] = uVar5;
      puVar7[7] = uVar3;
      if (fVar1 <= fVar2) {
        fVar2 = fVar6;
      }
      puVar7[9] = fVar2;
      puVar7[10] = fVar6;
    }
  }
  param_1[1] = puVar7;
  *param_1 = puVar7 + 3;
  return param_1;
}

