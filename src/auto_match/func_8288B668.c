extern int fn_82897458();
extern unsigned int lbl_82197070;


unsigned int * fn_8288B668(unsigned int *param_1,int param_2)

{
  fn_82897458(param_1,*(unsigned int *)(param_2 + 0x10));
  param_1[0x11] = param_2;
  param_1[0xe] = 0;
  *param_1 = &lbl_82197070;
  return param_1;
}

