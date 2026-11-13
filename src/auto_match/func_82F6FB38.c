extern int fn_82F6FA78();
extern unsigned int lbl_831BB900;


void fn_82F6FB38(unsigned int param_1)

{
  if (lbl_831BB900 != -1) {
    if ((param_1 & 0xffffffff) == 0) {
      param_1 = KeTlsGetValue(lbl_831BB900);
    }
    KeTlsSetValue(lbl_831BB900,0);
    fn_82F6FA78(param_1);
  }
  return;
}

