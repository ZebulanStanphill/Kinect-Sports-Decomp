extern int fn_82B7BEB0();


int fn_82BC6DC0(int param_1,unsigned int param_2)

{
  fn_82B7BEB0(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8));
  if ((param_2 & 1) != 0) {
    fn_82B7BEB0(*(unsigned int *)(param_1 + -4),param_1 + -4);
  }
  return param_1;
}

