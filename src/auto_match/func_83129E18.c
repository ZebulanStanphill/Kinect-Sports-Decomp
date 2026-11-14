typedef struct { __int64 a; double b; __int64 c; __int64 d; double e, f, g; int h, i; } Timer_83129E18;
extern Timer_83129E18 lbl_83218CD0;
extern int fn_82A1F160(__int64 *);
void fn_83129E18(void)
{
  __int64 freq;
  fn_82A1F160(&freq);
  lbl_83218CD0.e = 0.0;
  lbl_83218CD0.f = 0.0;
  lbl_83218CD0.g = 0.0;
  lbl_83218CD0.a = 0;
  lbl_83218CD0.c = 0;
  lbl_83218CD0.d = 0;
  lbl_83218CD0.h = 0;
  lbl_83218CD0.i = 0;
  lbl_83218CD0.b = 1.0 / (double)freq;
}
