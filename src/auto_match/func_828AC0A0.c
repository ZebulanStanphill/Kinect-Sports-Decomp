extern int fn_828EA268();
extern unsigned int lbl_82024564;


unsigned int * fn_828AC0A0(unsigned int *param_1,unsigned char param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  
  param_1[1] = 0;
  *param_1 = &lbl_82024564;
  { unsigned char *p = (unsigned char *)(param_1 + 2);
  *p = param_2;
  param_1[3] = (int)param_3;
  param_1[4] = (int)param_4; }
  uVar1 = fn_828EA268(param_4 - param_3);
  param_1[5] = uVar1;
  return param_1;
}

