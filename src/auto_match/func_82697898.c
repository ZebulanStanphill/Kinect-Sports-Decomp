extern int fn_82681898();
extern int fn_826972E0();
extern int fn_826BC950();
extern int fn_826BC960();
extern int fn_826BC970();
extern unsigned int lbl_82005710;


void fn_82697898(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_826972E0();
  dVar2 = (double)fn_826972E0(param_3,param_2);
  if (dVar2 == lbl_82005710) {
    if (dVar1 == lbl_82005710) {
      dVar1 = (double)fn_826BC950();
    }
    else if (dVar1 < lbl_82005710) {
      dVar1 = (double)fn_826BC970();
    }
    else {
      dVar1 = (double)fn_826BC960();
    }
  }
  else {
    dVar1 = dVar1 / dVar2;
  }
  fn_82681898(dVar1,param_1);
  return;
}

