extern int fn_83029E20();
extern int fn_83029EE0();
extern int fn_8302A198();
extern int lbl_832642E4;

typedef struct { int a, b, c, d; } Elem;

typedef struct {
  int f0;
  int f4;
  Elem *f8;
  unsigned int fc;
  Elem *f10;
  unsigned short f14;
  short pad16;
  int f18;
  int f1c;
  unsigned char f20;
} Obj;

int fn_8301B380(int param_1, Obj *param_2, unsigned int *param_3)
{
  int ret;
  unsigned short idx;

  ret = 2;
  if (param_2->f4 == 0) {
    if (param_2->f20 == 0) {
      if (param_3[1] != 0) {
        param_2->fc = param_3[1];
        idx = (unsigned short)param_3[0];
        param_2->f14 = idx;
        param_2->f10 = &param_2->f8[idx];
      }
      ret = fn_83029EE0(param_2, *(int *)(lbl_832642E4 + 0x90));
      if ((param_2->f1c & 2) == 0) {
        fn_8302A198(param_2);
        param_3[0] = param_2->f14;
        param_3[1] = param_2->fc;
      }
    }
    else {
      fn_83029E20(param_2);
    }
  }
  return ret;
}
