extern float fn_8301E178(float x);
extern float lbl_82002C5C;

int fn_830272C8(int param_1, float x)
{
  *(float *)(param_1 + 0x14) = fn_8301E178(x) * lbl_82002C5C;
  return 1;
}
