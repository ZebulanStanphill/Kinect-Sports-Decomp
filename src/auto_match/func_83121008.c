extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824AD898(void);
extern void fn_8313E928(void);
extern int atexit(void (*)(void));
extern int lbl_83293E90[];

void fn_83121008(void)
{
  int x = fn_82F53208();
  lbl_83293E90[0] = x;
  lbl_83293E90[1] = (int)"ArmActivityGesture";
  fn_822B7998(x, "ArmActivityGesture", fn_824AD898, 0x70);
  atexit(fn_8313E928);
}
