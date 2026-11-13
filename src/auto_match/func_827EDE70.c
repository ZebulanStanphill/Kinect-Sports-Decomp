extern int fn_82809CB0();
extern int fn_82F6A548();
extern int fn_82F6A594();


void fn_827EDE70(unsigned __int64 param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)fn_82F6A548();
  dVar2 = (double)fn_82809CB0((double)(float)(dVar1 - param_3));
  dVar3 = (double)fn_82809CB0((double)(float)(param_2 - param_3));
  if (dVar2 < dVar3) {
    param_2 = dVar1;
  }
  fn_82F6A594(param_2);
  return;
}

