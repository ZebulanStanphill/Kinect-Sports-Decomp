extern "C" {
extern int fn_825165E0(int *);
extern int *fn_8265C9E0(int);
extern int fn_828A8C50(int *, int, int);
extern unsigned int lbl_821969CC[];
}
namespace v2 { extern "C" unsigned int lbl_821969CC[]; }

extern "C" int *fn_82238EE8(int param_1)
{
  int *puVar1;

  puVar1 = fn_8265C9E0(0x88);
  if (puVar1 != 0) {
    fn_828A8C50(puVar1, param_1, 0);
    *puVar1 = (int)lbl_821969CC;
    {
      int *q = puVar1 + 0x1a;
      q[0] = 0; q[1] = 0; q[2] = 0; q[4] = 0; q[5] = 0; q[6] = 0;
    }
    fn_825165E0(puVar1);
    *puVar1 = (int)v2::lbl_821969CC;
    return puVar1;
  }
  return 0;
}
