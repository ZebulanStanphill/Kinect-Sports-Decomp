extern int lbl_831D1298[];
extern struct { int pad; void (*f)(int, int, int, const char *, const char *, int); } lbl_83276774;

void fn_822A1DD8(void)
{
  if (lbl_831D1298[2] == 0 && lbl_831D1298[0] == 0) {
    if (lbl_83276774.f != 0) {
      lbl_83276774.f(0, 0, 0, "uiGameLoadingIncubationBeginEarlyDummyWipe", "D:\\Work\\Incubation\\Olympus_Testing\\Incubation\\game\\ui\\ui_game\\ui_game_loading\\ui_game_loading_incubation.cpp", 0x1c3);
    }
    lbl_831D1298[2] = 1;
  }
}
