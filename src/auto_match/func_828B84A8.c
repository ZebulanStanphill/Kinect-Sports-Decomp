extern int fn_828B7E20();
extern unsigned int lbl_820252F8;


unsigned int * fn_828B84A8(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_828B7E20(param_1,param_2,0x32,1);
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  *param_1 = &lbl_820252F8;
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  return param_1;
}

