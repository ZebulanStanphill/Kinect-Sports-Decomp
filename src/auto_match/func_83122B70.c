extern int fn_824CD148(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824D2BB0(void);
extern void fn_8313ED40(void);
extern int atexit(void (*)(void));
extern int lbl_83294C90[];

void fn_83122B70(void)
{
  int x = fn_824CD148();
  lbl_83294C90[0] = x;
  lbl_83294C90[1] = (int)"HumanControlBowling";
  fn_822B7998(x, "HumanControlBowling", fn_824D2BB0, 0x34);
  atexit(fn_8313ED40);
}
