extern int fn_8267C4F0();
extern int fn_826EB228();
extern unsigned int lbl_82005B04;


unsigned int * fn_82685408(unsigned int *param_1)

{
  unsigned int uVar1;
  
  param_1[1] = 1;
  param_1[2] = 0x1d;
  *param_1 = &lbl_82005B04;
  param_1[3] = 0;
  uVar1 = fn_826EB228();
  if (param_1[3] != 0) {
    fn_8267C4F0(param_1[3]);
  }
  param_1[3] = uVar1;
  return param_1;
}

