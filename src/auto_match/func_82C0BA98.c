extern int fn_82C0B9B8();
extern int fn_82C12D90();
extern unsigned int lbl_820ECD78;


unsigned int * fn_82C0BA98(unsigned int *param_1)

{
  fn_82C12D90();
  *param_1 = &lbl_820ECD78;
  fn_82C0B9B8(param_1);
  return param_1;
}

