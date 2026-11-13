extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_829DBE60();
extern int fn_829DDF00();
extern unsigned int lbl_82002C5C;
extern float lbl_820579A8;


void fn_829DE2A8(int *param_1,unsigned __int64 param_2,int *param_3,unsigned __int64 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = SQRT((float)(__int64)(param_1[0x10] - param_1[8]) *
               (float)(__int64)(param_1[0x10] - param_1[8]) +
               (float)(__int64)((param_1[0x11] - param_1[9]) * (param_1[0x11] - param_1[9]))) *
          lbl_820579A8;
  fVar1 = fVar2 + lbl_82002C5C;
  *param_3 = (int)((float)(__int64)(param_1[4] + param_1[2] + *param_1) * 0.333333343f -
                  fVar2 * lbl_82002C5C);
  param_3[1] = param_1[5];
  param_3[2] = (int)fVar1 + *param_3;
  param_3[3] = param_1[1];
  iVar3 = fn_829DBE60();
  fn_829DDF00(param_2,param_3,*(unsigned int *)(iVar3 + 0x20),param_4);
  return;
}

