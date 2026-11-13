extern int fn_82E66B60();
extern unsigned int lbl_82155154;


unsigned int * fn_82E66120(unsigned int *param_1,int *param_2,int *param_3,int *param_4)

{
  param_1[10] = 0;
  *param_1 = &lbl_82155154;
  param_1[0xd] = 0;
  fn_82E66B60();
  param_1[0xb] = param_2;
  param_1[7] = 0;
  param_1[9] = 0;
  if (param_2 != (int *)0x0) {
    (*(int (**)())(*param_2 + 4))(param_2);
  }
  param_1[0xc] = param_4;
  if (param_4 != (int *)0x0) {
    (*(int (**)())(*param_4 + 4))(param_4);
  }
  param_1[6] = param_3;
  if (param_3 != (int *)0x0) {
    (*(int (**)())(*param_3 + 4))(param_3);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  return param_1;
}

