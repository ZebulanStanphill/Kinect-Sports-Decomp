extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_820A8648;


double fn_82A6BAE0(int param_1)

{
  double dVar1;
  
  if ((-1 < param_1) && (param_1 < 0xc0)) {
    return (double)*(float *)(&lbl_820A8648 + param_1 * 4);
  }
  dVar1 = (double)fn_82F655D8(lbl_82015618,(double)((float)(__int64)param_1 * lbl_82005718));
  return (double)(float)dVar1;
}

