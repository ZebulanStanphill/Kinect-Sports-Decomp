typedef struct { int first; int second; } Pair;
typedef struct {
  int pad0;
  int pad4;
  void *p8;
  void (*cb)(Pair *, int);
  int arg;
  int p14;
  int p18;
  int pad1c;
  int pad20;
  int done;
} Obj;
extern void fn_82517978(Pair *, int, int, int);
extern void fn_827D50C0(int);
extern void fn_827D5108(int, int);
extern void fn_827D9E70(void *);

void fn_827E4628(Obj *param_1)
{
  Pair pair;

  if (param_1->done == 0) {
    fn_827D50C0(param_1->p14);
    if (param_1->cb != 0) {
      pair.first = 0;
      pair.second = 0;
      fn_82517978(&pair, param_1->p14, param_1->p18, 0);
      param_1->cb(&pair, param_1->arg);
    }
    if (param_1->p8 != 0) {
      fn_827D9E70(param_1->p8);
    }
    fn_827D5108(param_1->p14, 3);
    param_1->done = 1;
  }
}
