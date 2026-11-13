extern int fn_82F68CC0();


void fn_82631E78(unsigned int *param_1,int param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)param_1[1] + param_3;
  if ((unsigned __int64)param_1[2] < (uVar1 & 0xffffffff)) {
    if (param_1[2] != 0) {
      param_1[4] = 0x80004005;
    }
  }
  else if (param_2 != 0) {
    fn_82F68CC0((unsigned __int64)param_1[1] + (unsigned __int64)*param_1);
  }
  param_1[1] = (unsigned int)uVar1;
  if ((unsigned __int64)param_1[3] < (uVar1 & 0xffffffff)) {
    param_1[3] = (unsigned int)uVar1;
  }
  return;
}

