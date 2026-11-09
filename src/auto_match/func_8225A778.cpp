extern "C" void *fn_8265C9E0(int);
extern "C" void fn_82239CB0(void *, void *);
extern "C" void fn_8225AB78(void *, void *);
extern "C" char lbl_82198484[];
extern "C" char lbl_821968A4[];
extern "C" char lbl_82198468[];
extern "C" char lbl_8219848C[];
namespace v2 { extern "C" char lbl_82198484[]; }

extern "C" void *fn_8225A778(char *param_1)
{
  char *p = (char *)fn_8265C9E0(0xa8);
  if (p != 0) {
    param_1 -= 0x28;
    fn_82239CB0(p, param_1);
    *(void **)p = lbl_82198484;
    *(void **)(p + 0x28) = lbl_821968A4;
    fn_8225AB78(p + 0x30, param_1 + 0x30);
    *(void **)(p + 0x30) = lbl_82198468;
    *(void **)p = v2::lbl_82198484;
    *(void **)(p + 0x28) = lbl_8219848C;
    return p;
  }
  return 0;
}
