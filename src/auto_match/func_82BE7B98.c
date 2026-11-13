extern unsigned int fn_82BE8E38();
extern unsigned __int64 fn_82BE8EA0();
extern int lbl_8317523C;
extern unsigned int lbl_8322B1E4;

void fn_82BE7B98(unsigned __int64 param_1)
{
  unsigned __int64 start;

  if (lbl_8317523C != 0) {
    lbl_8322B1E4 = 1;
    if (fn_82BE8E38() != 0) {
      fn_82BE8E38();
      start = fn_82BE8EA0();
      while (lbl_8317523C != 0) {
        fn_82BE8E38();
        if (fn_82BE8EA0() - start > param_1) {
          break;
        }
      }
    }
  }
}
