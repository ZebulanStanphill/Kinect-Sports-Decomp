typedef struct { __int64 a; double b; __int64 c; __int64 d; double e, f, g; int h, i; } Timer_83129C18;
extern Timer_83129C18 lbl_83218D90;
extern int fn_82A1F160(__int64 *);
void fn_83129C18(void)
{
  __int64 freq;
  fn_82A1F160(&freq);
  lbl_83218D90.e = 0.0;
  lbl_83218D90.f = 0.0;
  lbl_83218D90.g = 0.0;
  lbl_83218D90.a = 0;
  lbl_83218D90.c = 0;
  lbl_83218D90.d = 0;
  lbl_83218D90.h = 0;
  lbl_83218D90.i = 0;
  lbl_83218D90.b = 1.0 / (double)freq;
}
