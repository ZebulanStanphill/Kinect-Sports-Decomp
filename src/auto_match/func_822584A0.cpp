extern "C" void *fn_8265C9E0(int);
extern "C" void fn_82239CB0(void *, void *);
extern "C" void fn_82258628(void *, void *);
extern "C" char lbl_821982D0[];
extern "C" char lbl_821968A4[];
extern "C" char lbl_821982D8[];
extern "C" char lbl_821982A0[];
extern "C" void fn_8223A060(void *, void *);
namespace v2 { extern "C" char lbl_821982D0[]; }

extern "C" void *fn_822584A0(char *param_1)
{
  char *p = (char *)fn_8265C9E0(0x110);
  if (p != 0) {
    param_1 -= 0x28;
    fn_82239CB0(p, param_1);
    *(void **)p = lbl_821982D0;
    *(void **)(p + 0x28) = lbl_821968A4;
    fn_82258628(p + 0x30, param_1 + 0x30);
    *(void **)(p + 0x30) = lbl_821982A0;
    fn_8223A060(p + 0xa8, param_1 + 0xa8);
    *(void **)p = v2::lbl_821982D0;
    *(void **)(p + 0x28) = lbl_821982D8;
    return p;
  }
  return 0;
}
