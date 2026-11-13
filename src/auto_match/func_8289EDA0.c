extern int fn_82381BC0();


void fn_8289EDA0(unsigned int param_1,int param_2,int *param_3)

{
  
  while (param_1 != param_2) {
    *param_3 = *param_3 + 1;
    fn_82381BC0(&param_1);
  }
  return;
}

