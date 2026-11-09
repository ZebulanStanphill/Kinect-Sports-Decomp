typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CCA8(void);

void fn_82263C68(int matchCounter, unsigned char force, int teamId, int playerId, __vector4 playerPos, __vector4 ballPos, __vector4 ballVelocity)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x52, force) == 0 && fn_82E1CAD0(0x52) != 0) {
      fn_82E1CB88("MatchCounter", matchCounter);
      fn_82E1CB88("TeamId", teamId);
      fn_82E1CB88("PlayerId", playerId);
      fn_8225FCE8("PlayerPosition", playerPos);
      fn_8225FCE8("BallPosition", ballPos);
      fn_8225FCE8("BallVelocity", ballVelocity);
      fn_82E1CCA8();
    }
  }
}
