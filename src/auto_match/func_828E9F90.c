extern int fn_82F68CC0();


unsigned __int64 fn_828E9F90(int *param_1,unsigned __int64 param_2,__int64 param_3)

{
  if ((*param_1 == 0) &&
     (((unsigned __int64)(unsigned int)param_1[1] + param_3 & 0xffffffff) <= (unsigned __int64)(unsigned int)param_1[3])) {
    fn_82F68CC0((unsigned __int64)(unsigned int)param_1[2] + (unsigned __int64)(unsigned int)param_1[1]);
    param_1[1] = param_1[1] + (int)param_3;
    return 1;
  }
  return 0;
}

