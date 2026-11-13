extern int fn_82A28E60();
extern int fn_82BA02A8();
extern unsigned int lbl_832179FC;


unsigned int  fn_829E6650(unsigned int param_1,unsigned int param_2)

{
  fn_82BA02A8();
  if (((param_2 & 1) != 0) && ((param_1 & 0xffffffff) != 0)) {
    fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,param_1);
  }
  return param_1;
}

