extern int fn_82F53208(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_824B5ED0(void);
extern void fn_8313EB98(void);
extern int atexit(void (*)(void));
extern int lbl_83294738[];

void fn_83122238(void)
{
  int x = fn_82F53208();
  lbl_83294738[0] = x;
  lbl_83294738[1] = (int)"VolleyballServeThrowGesture";
  fn_822B7998(x, "VolleyballServeThrowGesture", fn_824B5ED0, 0x48);
  atexit(fn_8313EB98);
}
