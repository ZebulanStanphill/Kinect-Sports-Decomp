extern int fn_82FF3EE0();
extern int fn_83008600();
extern unsigned int lbl_8217C7E8;
extern unsigned int lbl_8217C940;


unsigned int * fn_8302C050(unsigned int *param_1)

{
  fn_82FF3EE0();
  *param_1 = &lbl_8217C7E8;
  param_1[7] = &lbl_8217C940;
  fn_83008600(param_1 + 0x22);
  return param_1;
}

