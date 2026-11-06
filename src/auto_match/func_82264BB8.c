typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern int lbl_83276584;
extern char *fn_8225F670(void);
extern void fn_8225FCE8(const char *, __vector4);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CCA8(void);

void fn_82264BB8(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, __vector4 param_8, __vector4 param_9)
{
  int match;
  char *p;

  match = lbl_83276584;
  p = fn_8225F670();
  if (*p != 0) {
    if (fn_8225FDE0(0x15, param_3) == 0 && fn_82E1CAD0(0x15) != 0) {
      fn_82E1CB88("MatchCounter", match);
      fn_82E1CB88("Round", param_1);
      fn_82E1CB88("PlayerId", param_2);
      fn_82E1CB88("KnockDownsInMatch", param_4);
      fn_82E1CB88("KnockDownsInRound", param_5);
      fn_8225FCE8("PlayerPosition", param_8);
      fn_8225FCE8("OpponentPosition", param_9);
      fn_82E1CB88("ConsecutiveHits", param_6);
      fn_82E1CB88("KOStarsHit", param_7);
      fn_82E1CCA8();
    }
  }
}
