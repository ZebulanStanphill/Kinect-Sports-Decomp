extern "C" void *fn_8265C9E0(int);
extern "C" void fn_82239CB0(void *, void *);
extern "C" void fn_8223A060(void *, void *);
extern "C" char lbl_82198478[];
extern "C" char lbl_821968A4[];
extern "C" char lbl_82198480[];
namespace v2 { extern "C" char lbl_82198478[]; }

extern "C" void *fn_8225A6E0(char *param_1)
{
  char *p = (char *)fn_8265C9E0(0x98);
  if (p != 0) {
    param_1 -= 0x28;
    fn_82239CB0(p, param_1);
    *(void **)p = lbl_82198478;
    *(void **)(p + 0x28) = lbl_821968A4;
    fn_8223A060(p + 0x30, param_1 + 0x30);
    *(void **)p = v2::lbl_82198478;
    *(void **)(p + 0x28) = lbl_82198480;
    return p;
  }
  return 0;
}
