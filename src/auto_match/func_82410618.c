extern int fn_82410670();
extern int fn_82809950();
extern unsigned int lbl_82191208;
extern unsigned int ltcg_pool_0_0f;


double fn_82410618(void)

{
  int iVar1;
  double extraout_f1;
  double dVar2;
  
  iVar1 = fn_82410670();
  dVar2 = (double)ltcg_pool_0_0f;
  if (dVar2 < extraout_f1) {
    dVar2 = (double)(float)((double)*(float *)(*(int *)(iVar1 + 0x274) + 0xa0) * extraout_f1);
    fn_82809950((double)lbl_82191208);
  }
  return dVar2;
}

