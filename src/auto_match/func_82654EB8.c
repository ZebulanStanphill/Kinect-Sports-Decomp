extern int fn_826545C0();
extern unsigned int lbl_82186E64;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191FC4;
extern unsigned int lbl_82191FD4;
extern unsigned int lbl_82192510;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


double fn_82654EB8(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)lbl_821CA460 <= ABS(param_1)) {
    if ((double)lbl_821916FC <= ABS(param_1)) {
      dVar1 = (double)ltcg_pool_0_0f;
    }
    else {
      dVar1 = (double)fn_826545C0(param_1);
      dVar3 = (double)lbl_82192604;
      dVar2 = (double)fn_826545C0(ABS(param_1),dVar3);
      dVar1 = (double)(-(float)(ABS(param_1) * (double)lbl_82191FD4 -
                               (double)(float)(dVar1 * (double)lbl_82192510 -
                                              (double)(float)(dVar2 * dVar3))) + lbl_82186E64);
    }
  }
  else {
    dVar1 = (double)fn_826545C0(ABS(param_1),(double)lbl_82192604);
    dVar2 = (double)fn_826545C0(param_1,(double)lbl_821916FC);
    dVar1 = (double)((float)(dVar1 * (double)lbl_82193B38 -
                            (double)(float)(dVar2 * (double)lbl_82192510)) + lbl_82191FC4);
  }
  return dVar1;
}

