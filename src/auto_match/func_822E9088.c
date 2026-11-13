extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C87C8();
extern int fn_8265CA20();


int fn_822E9088(int param_1,unsigned int param_2)

{
  fn_82230300(param_1 + 0xf4,1,0);
  fn_82230300(param_1 + 0xd8,1,0);
  if (*(unsigned int *)(param_1 + 0xd4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0xd4));
  }
  if (*(unsigned int *)(param_1 + 0xcc) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0xcc));
  }
  if (*(unsigned int *)(param_1 + 0xc4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0xc4));
  }
  fn_822C87C8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

