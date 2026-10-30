extern int fn_82520C40(void);
extern void fn_822B7998(int, const char *, void (*)(void), int);
extern void fn_8224FE30(void);
extern void fn_8313AA18(void);
extern int atexit(void (*)(void));
extern int lbl_83282F04[];

void fn_83108DC8(void)
{
  int x = fn_82520C40();
  lbl_83282F04[0] = x;
  lbl_83282F04[1] = (int)"GameLiveOlympusMatchmakingSceneController";
  fn_822B7998(x, "GameLiveOlympusMatchmakingSceneController", fn_8224FE30, 0x5c);
  atexit(fn_8313AA18);
}
