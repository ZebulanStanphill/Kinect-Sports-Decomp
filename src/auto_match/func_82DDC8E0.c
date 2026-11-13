extern float lbl_8208E088;


void fn_82DDC8E0(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  float *param_6)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(param_2 - param_1);
  dVar2 = (double)((float)((__int64)param_3 * -0x3e39b193 + 0x3039U & 0x7fffffff) * lbl_8208E088);
  *param_6 = (float)(dVar2 + param_1) * fVar1;
  param_6[1] = (float)(dVar2 + param_1) * fVar1;
  param_6[2] = (float)(dVar2 + param_1) * fVar1;
  return;
}

