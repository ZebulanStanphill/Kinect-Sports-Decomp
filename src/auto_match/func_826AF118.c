extern int fn_8267B890();
extern int fn_826AA4C8();


unsigned int * fn_826AF118(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int lVar1;
  
  *param_1 = (int)param_2;
  if (((param_3 & 0xffffffff) == 0) || (lVar1 = fn_8267B890(param_2,0xc,0), lVar1 == 0)) {
    lVar1 = 0;
  }
  else {
    fn_826AA4C8(lVar1,param_3);
  }
  param_1[1] = (int)lVar1;
  return param_1;
}

