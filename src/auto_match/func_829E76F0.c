extern int fn_82A28E60();
extern unsigned int lbl_820798C8;
extern unsigned int lbl_832179FC;


unsigned int * fn_829E76F0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820798C8;
  if ((param_2 & 1) != 0) {
    fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,param_1);
  }
  return param_1;
}

