extern unsigned char fn_8223AAC0();
extern void *fn_82365BD8();
extern int fn_823FE080();
extern unsigned int lbl_821AD588;

typedef struct { unsigned int ptr; unsigned int rep; } Pair;
typedef struct { Pair p3; Pair p4; Pair p5; char tmp[8]; } Frame;

unsigned int *fn_823FCDC8(unsigned int *param_1, int param_2, Pair *param_3, Pair *param_4, Pair *param_5)
{
  Frame f;
  unsigned int rep;
  unsigned int ptr;
  void *w;

  param_1[1] = 1;
  *param_1 = (unsigned int)&lbl_821AD588;
  param_1[2] = 1;
  if (param_1 + 3 != 0) {
    rep = param_5->rep;
    ptr = param_5->ptr;
    f.p5.ptr = 0;
    f.p5.rep = 0;
    if (rep != 0) {
      if (fn_8223AAC0(rep) != 0) {
        f.p5.rep = rep;
        f.p5.ptr = ptr;
      }
    }
    rep = param_4->rep;
    ptr = param_4->ptr;
    f.p4.ptr = 0;
    f.p4.rep = 0;
    if (rep != 0) {
      if (fn_8223AAC0(rep) != 0) {
        f.p4.rep = rep;
        f.p4.ptr = ptr;
      }
    }
    rep = param_3->rep;
    ptr = param_3->ptr;
    f.p3.ptr = 0;
    f.p3.rep = 0;
    if (rep != 0 && fn_8223AAC0(rep) != 0) {
      f.p3.rep = rep;
      f.p3.ptr = ptr;
    }
    fn_823FE080(param_1 + 3, fn_82365BD8(f.tmp, param_2), &f.p3, &f.p4, &f.p5);
  }
  return param_1;
}
