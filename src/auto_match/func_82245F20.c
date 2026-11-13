extern int fn_822315A0();
extern int fn_8265CA20();
extern int fn_82897D88();


int fn_82245F20(int param_1,unsigned int param_2)

{
  if (*(unsigned int *)(param_1 + 0x5c) != 0) {
    fn_822315A0(*(int *)(param_1 + 0x5c));
  }
  fn_82897D88(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

