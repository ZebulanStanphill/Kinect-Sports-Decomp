extern int fn_82809D40();
extern unsigned int lbl_82195680;
extern unsigned int ltcg_pool_0_0f;


double fn_8255A070(void)

{
  double dVar1;
  float in_register_00010010;
  float in_register_00010018;
  
  if ((lbl_82195680 < ABS(in_register_00010010)) || (lbl_82195680 < ABS(in_register_00010018))) {
    dVar1 = (double)fn_82809D40();
  }
  else {
    dVar1 = (double)ltcg_pool_0_0f;
  }
  return dVar1;
}

