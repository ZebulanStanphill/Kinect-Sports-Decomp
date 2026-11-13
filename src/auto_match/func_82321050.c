extern int fn_823210A8();
extern int fn_8265CA20();


void fn_82321050(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_823210A8(*param_1,param_1[1]);
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

