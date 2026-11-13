typedef unsigned char bool;
extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_8280DED0();


bool fn_8280E618(double param_1,float *param_2,unsigned __int64 param_3)

{
  float *pfVar1;
  struct { float first; float second; } stack_pair_20;

  float fStack_18;
  float fStack_14;
  
  if (param_2 != &stack_pair_20.first) {
    stack_pair_20.first = *param_2;
    stack_pair_20.second = param_2[1];
    fStack_18 = param_2[2];
    fStack_14 = param_2[3];
  }
  fn_8280DED0(param_2,param_3,&stack_pair_20.first);
  pfVar1 = (float *)param_3;
  return (double)((stack_pair_20.first - *pfVar1) * (stack_pair_20.first - *pfVar1) +
                 (stack_pair_20.second - pfVar1[1]) * (stack_pair_20.second - pfVar1[1]) +
                 (fStack_14 - pfVar1[3]) * (fStack_14 - pfVar1[3]) +
                 (fStack_18 - pfVar1[2]) * (fStack_18 - pfVar1[2])) <= param_1;
}

