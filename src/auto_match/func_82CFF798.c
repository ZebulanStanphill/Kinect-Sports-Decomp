extern int fn_82D04B90();
extern unsigned int lbl_820143E0;
extern unsigned int lbl_82090FC8;


void fn_82CFF798(unsigned int param_1,unsigned __int64 param_2)

{
  if ((int)param_1 < 0x400) {
    fn_82D04B90(param_2,0xffffffff82133f04);
    return;
  }
  if ((int)param_1 < 0x2800) {
    fn_82D04B90(param_2,0xffffffff82133efc,
                      (double)((float)(__int64)(int)param_1 * lbl_820143E0));
    return;
  }
  if ((int)param_1 < 0x100000) {
    fn_82D04B90(param_2,0xffffffff82133ef4,
                      (__int64)((int)param_1 >> 10) +
                      (unsigned __int64)((int)param_1 < 0 && (param_1 & 0x3ff) != 0));
    return;
  }
  fn_82D04B90(param_2,0xffffffff82133eec,
                    (double)((float)(__int64)(int)param_1 * lbl_82090FC8));
  return;
}

