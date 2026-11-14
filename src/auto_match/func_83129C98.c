typedef struct { __int64 a; double b; __int64 c; __int64 d; double e, f, g; int h, i; } Timer_83129C98;
extern Timer_83129C98 lbl_83218D10;
extern int fn_82A1F160(__int64 *);
void fn_83129C98(void)
{
  __int64 freq;
  fn_82A1F160(&freq);
  lbl_83218D10.e = 0.0;
  lbl_83218D10.f = 0.0;
  lbl_83218D10.g = 0.0;
  lbl_83218D10.a = 0;
  lbl_83218D10.c = 0;
  lbl_83218D10.d = 0;
  lbl_83218D10.h = 0;
  lbl_83218D10.i = 0;
  lbl_83218D10.b = 1.0 / (double)freq;
}
