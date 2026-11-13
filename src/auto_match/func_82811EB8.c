extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_828105C8();
extern int fn_8281F0A0();
extern int fn_8281F0C0();


void fn_82811EB8(float *param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [24];
  
  fVar1 = param_1[3];
  fn_828105C8((double)(fVar1 + *param_1),(double)(param_1[1] + fVar1),(double)(param_1[2] + fVar1)
                ,auStack_40);
  fVar1 = param_1[3];
  fn_828105C8((double)(*param_1 - fVar1),(double)(param_1[1] - fVar1),(double)(param_1[2] - fVar1)
                ,auStack_30);
  fn_8281F0C0(param_2,auStack_40);
  fn_8281F0A0(param_2,auStack_30);
  return;
}

