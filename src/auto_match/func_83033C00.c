extern int fn_83033838();
extern int fn_83033AB8();


unsigned int * fn_83033C00(unsigned int *param_1,int *param_2,unsigned __int64 param_3)

{
  *param_1 = 0;
  if ((*param_2 == 1) && (*(int *)(param_2[0x1e] + 0x10) != 0)) {
    fn_83033838(param_1,param_2[0x1e] + 0x10);
    fn_83033AB8(param_3,*param_1);
  }
  return param_1;
}

