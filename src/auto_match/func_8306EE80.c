extern int fn_8306EA28();
extern unsigned int lbl_82196080;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_8306EE80(float *param_1)

{
  unsigned __int64 uVar1;
  double dVar2;
  float in_register_00010010;
  float in_register_00010018;
  
  if ((lbl_82196080 < ABS(in_register_00010010)) || (lbl_82196080 < ABS(in_register_00010018))) {
    dVar2 = (double)fn_8306EA28();
    *param_1 = (float)dVar2;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    *param_1 = lbl_821AAD20;
  }
  return uVar1;
}

