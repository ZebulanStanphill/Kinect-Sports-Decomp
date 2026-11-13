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
extern int fn_8268CF60();


void fn_8268D100(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  struct { float first; float second; } stack_pair_20;

  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;

  fStack_2c = param_2[1];
  fStack_38 = *param_2;
  fStack_30 = param_2[5] - fStack_2c;
  fStack_34 = param_2[3] - fStack_2c;
  fVar1 = param_2[2];
  stack_pair_40.second = param_2[4] - fStack_38;
  param_1[5] = fStack_2c;
  *param_1 = fVar1 - fStack_38;
  param_1[2] = fStack_38;
  param_1[4] = fStack_30;
  param_1[1] = stack_pair_40.second;
  param_1[3] = fStack_34;
  fStack_18 = *param_3;
  fStack_c = param_3[1];
  stack_pair_40.first = *param_1;
  stack_pair_20.first = param_3[2] - fStack_18;
  stack_pair_20.second = param_3[4] - fStack_18;
  fStack_14 = param_3[3] - fStack_c;
  fStack_10 = param_3[5] - fStack_c;
  uVar2 = fn_8268CD40(param_1,&stack_pair_40.first);
  fn_8268CF60(uVar2,&stack_pair_20.first);
  return;
}
