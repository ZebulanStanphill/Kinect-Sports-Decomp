extern int fn_82687F40();
extern int fn_826D86D0();


void fn_826D93E8(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_826D86D0(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  fn_82687F40(((unsigned int)param_1[1] & 0x3fffffff) * 4 + (unsigned __int64)*param_1 + -4,param_2);
  return;
}

