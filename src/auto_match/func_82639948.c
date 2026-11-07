typedef struct { float v; } FloatRet_82639948;

extern float lbl_821954B0[];

FloatRet_82639948 fn_82639948(int param_1, int param_2)
{
  FloatRet_82639948 r;
  int v;

  v = *(int *)(param_2 * 0x18 + param_1 + 0x490);
  r.v = (float)((v << 10) >> 22) * lbl_821954B0[0xCE];
  return r;
}
