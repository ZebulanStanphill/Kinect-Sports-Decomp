extern int fn_82B7BEB0();
extern int fn_82BC1230();


int fn_82BC21A0(unsigned int param_1,unsigned int param_2)

{
  fn_82BC1230();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    fn_82B7BEB0(*(unsigned int *)(param_1 + -4),param_1 + -4);
  }
  return param_1;
}

