extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824C93D8(void);
extern void fn_8313EC88(void);
extern int atexit(void (*)(void));
extern int lbl_83294A00[];

void fn_83122700(void)
{
  int x = fn_82520C40();
  lbl_83294A00[0] = x;
  lbl_83294A00[1] = (int)"IncidentalSceneController";
  fn_822B7998(x, "IncidentalSceneController", fn_824C93D8, 0x4c);
  atexit(fn_8313EC88);
}
