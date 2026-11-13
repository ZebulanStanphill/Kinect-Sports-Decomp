extern int fn_82BE51E8();
extern unsigned int lbl_820EBE90;


unsigned int * fn_82BFAFD8(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  fn_82BE51E8(param_1,"CMassiveOrder");
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[7] = 0;
  *param_1 = &lbl_820EBE90;
  param_1[8] = 0;
  return param_1;
}

