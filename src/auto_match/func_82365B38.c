extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821C09E4;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_82365B38(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)fn_8265C9E0(0x20);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    puVar3[1] = 1;
    *puVar3 = &lbl_821AD588;
    puVar3[2] = 1;
    if (puVar3 + 3 != (unsigned int *)0x0) {
      uVar2 = *param_2;
      uVar1 = *param_3;
      puVar3[7] = *param_4;
      puVar3[6] = uVar1;
      uVar1 = ltcg_pool_0_0f;
      puVar3[4] = uVar2;
      puVar3[5] = uVar1;
      puVar3[3] = &lbl_821C09E4;
    }
  }
  param_1[1] = puVar3;
  *param_1 = puVar3 + 3;
  return param_1;
}

