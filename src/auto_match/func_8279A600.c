typedef struct Hdr_8279A600 { int pad0; int size; } Hdr_8279A600;
typedef struct Pair_8279A600 { Hdr_8279A600 *first; int second; } Pair_8279A600;
typedef struct Obj_8279A600 { int pad0; int pad4; int ctx; } Obj_8279A600;
extern void fn_82791070(Pair_8279A600 *, int, unsigned int, unsigned int *);

unsigned int fn_8279A600(Obj_8279A600 *param_1, unsigned int param_2)
{
  unsigned char bVar1;
  unsigned int mark;
  Pair_8279A600 pr;
  unsigned int ret;
  unsigned int out;

  mark = ret = -1;
  fn_82791070(&pr, param_1->ctx, param_2, &mark);
  if (pr.first == 0 || pr.second < 0 || (pr.second >= pr.first->size)) {
    bVar1 = 1;
  } else {
    bVar1 = 0;
  }
  if (!bVar1) { return param_2 - mark; } return ret;
}
