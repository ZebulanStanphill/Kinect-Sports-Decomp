extern unsigned int fStack_10;
extern unsigned int fStack_14;
extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern unsigned int fStack_c;
extern int fn_8268CD40();


void fn_8268D008(float *param_1,float *param_2,float *param_3)

{
  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  stack_pair_40.first = *param_1;
  stack_pair_40.second = param_1[1];
  fStack_38 = param_1[2];
  fStack_34 = param_1[3];
  fStack_30 = param_1[4];
  fStack_2c = param_1[5];
  fStack_20 = stack_pair_40.first;
  fStack_1c = stack_pair_40.second;
  fStack_18 = fStack_38;
  fStack_14 = fStack_34;
  fStack_10 = fStack_30;
  fStack_c = fStack_2c;
  fn_8268CD40(&stack_pair_40.first,&fStack_20);
  *param_2 = *param_3 * stack_pair_40.first + param_3[1] * stack_pair_40.second + fStack_38;
  param_2[1] = param_3[1] * fStack_30 + *param_3 * fStack_34 + fStack_2c;
  return;
}

