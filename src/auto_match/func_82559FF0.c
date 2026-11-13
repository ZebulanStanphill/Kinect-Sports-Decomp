extern int fn_82809D40();
extern unsigned int lbl_82195680;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_82559FF0(float *param_1)

{
  unsigned __int64 uVar1;
  double dVar2;
  float in_register_00010010;
  float in_register_00010018;
  
  if ((lbl_82195680 < ABS(in_register_00010010)) || (lbl_82195680 < ABS(in_register_00010018))) {
    dVar2 = (double)fn_82809D40();
    *param_1 = (float)dVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *param_1 = ltcg_pool_0_0f;
  }
  return uVar1;
}

