typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CB08(const char *, int, int);
extern void fn_82E1CC60(const char *, float);
extern void fn_82E1CCA8(void);

void fn_8225FFE0(int matchCounter, __vector4 playerPos, int leftHanded, int shotType, float shotStrength, __vector4 ballPos, __vector4 ballVelocity, float topSpin, __vector4 nearSideBouncePos, int teamId, int playerId)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x1b, 1) == 0 && fn_82E1CAD0(0x1b) != 0) {
      fn_82E1CB88("MatchCounter", matchCounter);
      fn_8225FCE8("PlayerPosition", playerPos);
      fn_82E1CB88("LeftHanded", leftHanded);
      fn_82E1CB08("ShotType", shotType, 0);
      fn_8225FCE8("BallPosition", ballPos);
      fn_8225FCE8("BallVelocity", ballVelocity);
      fn_82E1CC60("ShotStrength", shotStrength);
      fn_82E1CC60("TopSpin", topSpin);
      fn_8225FCE8("NearSideBouncePosition", nearSideBouncePos);
      fn_82E1CB88("TeamId", teamId);
      fn_82E1CB88("PlayerId", playerId);
      fn_82E1CCA8();
    }
  }
}
