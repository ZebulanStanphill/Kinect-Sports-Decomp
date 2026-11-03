typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;

extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern void fn_8225FCE8(const char *, __vector4);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CB40(const char *, int);
extern void fn_82E1CCA8(void);

void fn_822621D8(int matchId, int frame, int player, int score1, int score2, int total, int strike, int spare, __vector4 pos)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x46, 1) == 0 && fn_82E1CAD0(0x46) != 0) {
      fn_82E1CB88("MatchId", matchId);
      fn_82E1CB88("FrameNumber", frame);
      fn_82E1CB88("PlayerIndex", player);
      fn_8225FCE8("BasePosition", pos);
      fn_82E1CB88("Score1", score1);
      fn_82E1CB88("Score2", score2);
      fn_82E1CB88("TotalScore", total);
      fn_82E1CB40("Strike", strike);
      fn_82E1CB40("Spare", spare);
      fn_82E1CCA8();
    }
  }
}
