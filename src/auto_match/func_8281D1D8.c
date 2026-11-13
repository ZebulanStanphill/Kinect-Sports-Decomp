extern unsigned int fStack_30;
extern int fn_8280A668();


void fn_8281D1D8(unsigned __int64 param_1,unsigned __int64 param_2,double param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,float *param_7)

{
  unsigned __int64 uVar1;
  double dVar2;
  float fStack_30;
  float afStack_2c;
  
  uVar1 = fn_8280A668(param_4,&fStack_30,&afStack_2c);
  param_7[1] = (float)((double)fStack_30 * param_3);
  dVar2 = (double)(float)((double)afStack_2c * param_3);
  fn_8280A668(param_2,uVar1,&fStack_30,&afStack_2c);
  *param_7 = (float)(dVar2 * (double)fStack_30);
  param_7[2] = (float)(dVar2 * (double)afStack_2c);
  return;
}

