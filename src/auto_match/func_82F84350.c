extern int fn_82F6FA78();
extern unsigned int lbl_831BB900;


void fn_82F84350(unsigned __int64 param_1)

{
  if ((int)param_1 != 0) {
    return;
  }
  if (lbl_831BB900 != -1) {
    if ((param_1 & 0xffffffff) == 0) {
      param_1 = KeTlsGetValue(lbl_831BB900);
    }
    KeTlsSetValue(lbl_831BB900,0);
    fn_82F6FA78(param_1);
  }
  return;
}

