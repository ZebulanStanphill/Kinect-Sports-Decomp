extern int memcpy();


unsigned int * fn_82860D68(unsigned int *param_1,unsigned __int64 param_2)

{
  memcpy(param_1,param_2,0x1d0);
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

