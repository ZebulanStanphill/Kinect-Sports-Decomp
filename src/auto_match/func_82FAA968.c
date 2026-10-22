typedef struct { unsigned __int64 a, b, c; } S24;
typedef struct { char pad[0x5c]; int refs; } Ref;
extern int fn_82FF7820(int a, void *b, Ref *c);
extern int lbl_831BC768;
extern int lbl_832642E8;

typedef struct {
  int f2c;
  int f30;
  int f34;
  int f38;
  int f3c;
  int f40;
  int f44;
  int f48;
} Sub;

typedef struct {
  int f0;
  int f4;
  int f8;
  int fc;
  S24 f10;
  Ref *f28;
  Sub s;
} Obj;

int fn_82FAA968(Obj *param_1, S24 *param_2, Ref *param_3)
{
  Sub *s;
  int v;
  param_1->f10 = *param_2;
  param_1->f28 = param_3;
  param_3->refs++;
  v = lbl_831BC768;
  s = &param_1->s;
  s->f40 = 0;
  s->f38 = 0;
  s->f3c = -1;
  s->f44 = 0;
  s->f48 = v;
  s->f34 = 0;
  s->f2c = 0;
  s->f30 = 0;
  fn_82FF7820(lbl_832642E8, &param_1->f4, param_1->f28);
  return 1;
}
