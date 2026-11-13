extern int fn_82A1E968();
extern int fn_82F6B030();
extern unsigned int lbl_832767D8;
extern unsigned int lbl_832767E0;


double fn_82522FF0(void)

{
  double dVar1;
  __int64 alStack_20 [2];
  
  fn_82A1E968(alStack_20);
  dVar1 = (double)fn_82F6B030(alStack_20[0] - lbl_832767D8);
  return (double)(float)(dVar1 / (double)lbl_832767E0);
}

