extern int fn_827A9C58();


void fn_82799CA8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned __int64)(unsigned int)param_1[2];
  if (param_1[2] < 0) {
    uVar1 = 0xffffffffffffffff;
  }
  if (uVar1 == -1) {
    uVar1 = (unsigned __int64)*(unsigned int *)(*param_1 + 4);
  }
  fn_827A9C58(*param_1,uVar1,param_2,param_3,param_4);
  param_1[2] = param_1[2] + 1;
  return;
}

