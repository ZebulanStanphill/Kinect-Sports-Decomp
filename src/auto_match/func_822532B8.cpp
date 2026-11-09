extern "C" void *fn_8265C9E0(int);
extern "C" void fn_82239CB0(void *, void *);
extern "C" void fn_822533A0(void *, void *);
extern "C" char lbl_8219802C[];
extern "C" char lbl_821968A4[];
extern "C" char lbl_82198044[];
namespace v2 { extern "C" char lbl_8219802C[]; }

extern "C" void *fn_822532B8(char *param_1)
{
  char *p = (char *)fn_8265C9E0(0xe68);
  if (p != 0) {
    param_1 -= 0x28;
    fn_82239CB0(p, param_1);
    *(void **)p = lbl_8219802C;
    *(void **)(p + 0x28) = lbl_821968A4;
    fn_822533A0(p + 0x30, param_1 + 0x30);
    *(void **)p = v2::lbl_8219802C;
    *(void **)(p + 0x28) = lbl_82198044;
    return p;
  }
  return 0;
}
