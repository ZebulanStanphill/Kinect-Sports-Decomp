typedef struct Pair_8287EC98 { unsigned int a; unsigned int b; } Pair_8287EC98;
typedef struct Src_8287EC98 { unsigned int **p; int pad; int c; } Src_8287EC98;
extern void fn_8287E5C0(int, Pair_8287EC98 *, Pair_8287EC98 *, Pair_8287EC98 *, unsigned char);

void fn_8287EC98(int param_1, Src_8287EC98 *p2, Src_8287EC98 *p3, Src_8287EC98 *p4)
{
  unsigned char flag;
  struct { Pair_8287EC98 pr; int c; } i1, i2, i3;
  unsigned int **q;

  i3.pr.a = 0;
  i3.pr.b = 0;
  q = p4->p;
  if (q != 0 && *q != 0) {
    i3.pr.a = **q;
  }
  i3.c = p4->c;
  i2.pr.a = 0;
  i2.pr.b = 0;
  q = p3->p;
  if (q != 0 && *q != 0) {
    i2.pr.a = **q;
  }
  i2.c = p3->c;
  i1.pr.a = 0;
  i1.pr.b = 0;
  q = p2->p;
  if (q != 0 && *q != 0) {
    i1.pr.a = **q;
  }
  i1.c = p2->c;
  fn_8287E5C0(param_1, &i1.pr, &i2.pr, &i3.pr, flag);
}
