extern int fn_8251F720();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821BD5A8;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_8247B3E0(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  param_1[1] = 1;
  *param_1 = &lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != (unsigned int *)0x0) {
    uVar2 = *param_3;
    param_1[9] = param_4;
    param_1[4] = 9;
    uVar1 = ltcg_pool_0_0f;
    param_1[3] = &lbl_821BD5A8;
    param_1[6] = uVar1;
    param_1[5] = 0;
    param_1[0xc] = uVar1;
    param_1[10] = uVar2;
    param_1[0xf] = uVar1;
    param_1[0xb] = *param_2;
    param_1[7] = param_2[1];
    param_1[8] = param_2[2];
    uVar2 = fn_8251F720(param_2,0);
    param_1[0xd] = uVar2;
  }
  return param_1;
}

