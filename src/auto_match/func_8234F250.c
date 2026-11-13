extern int fn_8255FD70();


unsigned __int64 fn_8234F250(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  if ((unsigned int)param_3[5] >= 0x10) {
    param_3 = (unsigned int *)*param_3;
  }
  fn_8255FD70(param_1,*param_2,param_3);
  return param_1;
}

