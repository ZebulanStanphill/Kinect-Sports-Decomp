extern int fn_82230110();
extern int fn_8265C9E0();
extern unsigned int lbl_821B9978;


unsigned int *
fn_82441BD0(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  
  *param_1 = &lbl_821B9978;
  puVar1 = (unsigned int *)fn_8265C9E0(0x30);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_82230110(puVar1 + 2,param_2);
    puVar1[9] = param_4;
    puVar1[10] = 1;
    puVar1[0xb] = 0;
  }
  param_1[1] = puVar1;
  if (param_3 != (unsigned int *)0x0) {
    puVar1[1] = *param_3;
  }
  return param_1;
}

