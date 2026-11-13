extern int fn_82EF4900();
extern unsigned int lbl_8215F108;


unsigned int * fn_82E7E500(unsigned int *param_1,int *param_2,unsigned short param_3)

{
  fn_82EF4900();
  *(unsigned short *)(param_1 + 3) = param_3;
  param_1[4] = param_2;
  *param_1 = &lbl_8215F108;
  if (param_2 != (int *)0x0) {
    (*(int (**)())(*param_2 + 4))(param_2);
  }
  return param_1;
}

