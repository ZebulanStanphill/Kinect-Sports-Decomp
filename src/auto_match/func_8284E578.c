extern int fn_8284D920();
extern int fn_8284E330();


void fn_8284E578(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                  unsigned __int64 param_5)

{
  fn_8284E330(param_1,param_2,param_4,param_5);
  fn_8284D920(param_2,param_3,*param_4,param_5);
  return;
}

