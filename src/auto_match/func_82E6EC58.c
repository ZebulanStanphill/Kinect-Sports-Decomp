extern int fn_82E6E6F0();
extern unsigned int lbl_8215ED00;


unsigned int *
fn_82E6EC58(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  
  param_1[2] = 0;
  param_1[1] = 1;
  *param_1 = &lbl_8215ED00;
  *(unsigned __int64 *)(param_1 + 4) = 0;
  *(unsigned __int64 *)(param_1 + 6) = 0;
  *(unsigned __int64 *)(param_1 + 8) = 0;
  param_1[10] = 1000;
  *(unsigned __int64 *)(param_1 + 0xc) = 0xffffffffffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  uVar1 = fn_82E6E6F0();
  if (param_4 != (unsigned int *)0x0) {
    *param_4 = uVar1;
  }
  return param_1;
}

