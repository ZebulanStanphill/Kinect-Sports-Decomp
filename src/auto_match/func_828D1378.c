extern int fn_828D1208();
extern unsigned int lbl_820267A4;


unsigned int * fn_828D1378(unsigned int *param_1,int param_2)

{
  *param_1 = &lbl_820267A4;
  param_1[1] = *(unsigned int *)(param_2 + 4);
  param_1[2] = *(unsigned int *)(param_2 + 8);
  fn_828D1208(param_1 + 3,param_2 + 0xc);
  return param_1;
}

