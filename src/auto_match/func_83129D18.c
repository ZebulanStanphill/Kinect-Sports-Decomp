typedef struct { __int64 a; double b; __int64 c; __int64 d; double e, f, g; int h, i; } Timer_83129D18;
extern Timer_83129D18 lbl_83218C50;
extern int fn_82A1F160(__int64 *);
void fn_83129D18(void)
{
  __int64 freq;
  fn_82A1F160(&freq);
  lbl_83218C50.e = 0.0;
  lbl_83218C50.f = 0.0;
  lbl_83218C50.g = 0.0;
  lbl_83218C50.a = 0;
  lbl_83218C50.c = 0;
  lbl_83218C50.d = 0;
  lbl_83218C50.h = 0;
  lbl_83218C50.i = 0;
  lbl_83218C50.b = 1.0 / (double)freq;
}
