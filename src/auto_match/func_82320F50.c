extern int fn_82321050();
extern int fn_823210A8();
extern int fn_8265CA20();


void fn_82320F50(unsigned int *param_1)

{
  if (param_1[0x24] != 0) {
    fn_823210A8(param_1[0x24],param_1[0x25]);
    fn_8265CA20(param_1[0x24]);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  fn_82321050(param_1 + 0x20);
  fn_82321050(param_1 + 0x1c);
  fn_82321050(param_1 + 0x18);
  fn_82321050(param_1 + 0x14);
  fn_82321050(param_1 + 0x10);
  fn_82321050(param_1 + 0xc);
  fn_82321050(param_1 + 8);
  fn_82321050(param_1 + 4);
  if (*param_1 != 0) {
    fn_823210A8(*param_1,param_1[1]);
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

