extern int fn_82528948();
extern int fn_8252BDB8();
extern int fn_8252D020();
extern float fn_82A81DA8();


void fn_825010E8(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  
  if (*(unsigned int *)(param_1 + 0xb64) != 0) {
    fn_8252D020(param_1,1);
    *(unsigned int *)(param_1 + 0xb64) = 0;
  }
  fn_8252BDB8(param_1,param_2);
  if (*(float *)(param_1 + 0xffc) > 0.0f) {
    fVar1 = *(float *)(param_1 + 0xffc) / fn_82A81DA8(param_2);
    if (((*(float *)(param_1 + 0xa0) != fVar1) || (*(float *)(param_1 + 0xa4) != fVar1)) ||
       (*(float *)(param_1 + 0xa8) != fVar1)) {
      *(float *)(param_1 + 0xa0) = fVar1;
      *(unsigned int *)(param_1 + 0x170) = 0;
      *(float *)(param_1 + 0xa4) = fVar1;
      *(float *)(param_1 + 0xa8) = fVar1;
      fn_82528948(param_1);
    }
  }
  *(unsigned char *)(param_1 + 0xb68) = 0;
  return;
}

