extern int fn_82A4F4E0();
extern int fn_82A819E0();


unsigned int * fn_82A767A8(unsigned int *param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1[0x21] + 4) = 0;
  *param_1 = 0;
  fn_82A819E0();
  if ((param_2 & 1) != 0) {
    fn_82A4F4E0(param_1);
  }
  return param_1;
}

