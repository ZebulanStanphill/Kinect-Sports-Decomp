extern int fn_822315A0();
extern int fn_8229A230();
extern int fn_8265CA20();
extern int fn_82672660();


unsigned int * fn_82292450(unsigned int *param_1,unsigned int param_2)

{
  fn_82672660(*param_1,param_1);
  fn_8229A230(param_1);
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

