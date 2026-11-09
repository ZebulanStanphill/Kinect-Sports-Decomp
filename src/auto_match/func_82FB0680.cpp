extern "C" void fn_8265CA20(void *);
extern "C" void fn_82FAFA90(void *);
extern "C" void fn_82FB05B8(void *);
extern "C" unsigned int lbl_8216D000;
extern "C" unsigned int lbl_8216D160;
extern "C" unsigned int lbl_8217C940;

namespace v2 { extern "C" unsigned int lbl_8217C940; }

extern "C" unsigned int * fn_82FB0680(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = (unsigned int)&lbl_8216D160;
  param_1[7] = (unsigned int)&lbl_8217C940;
  fn_82FAFA90(param_1);
  *param_1 = (unsigned int)&lbl_8216D000;
  param_1[7] = (unsigned int)&v2::lbl_8217C940;
  fn_82FB05B8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

