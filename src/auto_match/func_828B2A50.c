extern int fn_8265CA20();
extern int fn_828B22F0();
extern unsigned int lbl_82024E1C;


unsigned int * fn_828B2A50(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82024E1C;
  if ((int *)param_1[1] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[1] + 4))(param_1[1]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  fn_828B22F0(param_1 + 3);
  fn_8265CA20(param_1[3]);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

