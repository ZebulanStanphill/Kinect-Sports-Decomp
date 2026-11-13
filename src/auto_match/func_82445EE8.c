extern int fn_82441CB0();
extern int fn_82529320();
extern int fn_8265CA20();
extern int lbl_821B9B48[];
extern unsigned int lbl_821B9B50;


void fn_82445EE8(unsigned int *param_1)

{
  *param_1 = lbl_821B9B48;
  ((int (*)())lbl_821B9B48[2])(param_1);
  if (*(unsigned int *)param_1[1] != 0) {
    fn_82529320(*(int *)param_1[1],0);
    *(unsigned int *)param_1[1] = 0;
  }
  fn_8265CA20(param_1[2]);
  fn_82441CB0(param_1);
  return;
}

