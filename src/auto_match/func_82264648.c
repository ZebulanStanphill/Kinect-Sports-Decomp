typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CB08(const char *, int, int);
extern void fn_82E1CCA8(void);
extern int lbl_83276584;

void fn_82264648(int round, int playerId, __vector4 playerPos, __vector4 oppPos, int c, int hitCount, int consecutiveHits, int punchType, int punchStrength, int hitArea, int playerStunned, int opponentStunned)
{
  int counter = lbl_83276584;
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x10, c) == 0 && fn_82E1CAD0(0x10) != 0) {
      fn_82E1CB88("MatchCounter", counter);
      fn_82E1CB88("Round", round);
      fn_82E1CB88("PlayerId", playerId);
      fn_82E1CB88("HitCount", hitCount);
      fn_82E1CB88("ConsecutiveHits", consecutiveHits);
      fn_82E1CB08("PunchType", punchType, 0);
      fn_82E1CB88("PunchStrength", punchStrength);
      fn_82E1CB88("HitArea", hitArea);
      fn_8225FCE8("PlayerPosition", playerPos);
      fn_8225FCE8("OpponentPostion", oppPos);
      fn_82E1CB88("PlayerStunned", playerStunned);
      fn_82E1CB88("OpponentStunned", opponentStunned);
      fn_82E1CCA8();
    }
  }
}
