extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;


int fn_8279A810(int param_1)

{
  double dVar1;
  
  dVar1 = (double)(__int64)param_1;
  if (lbl_82005710 < dVar1) {
    return (int)(dVar1 + lbl_82005730);
  }
  return (int)(dVar1 - lbl_82005730);
}

