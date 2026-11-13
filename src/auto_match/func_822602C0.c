typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CB08(const char *, int, int);
extern void fn_82E1CC60(const char *, float);
extern void fn_82E1CCA8(void);

void fn_822602C0(int matchCounter, int playerScore, int aiScore, int shotCounter, __vector4 ballStartPos, int shotType, int leftHanded, int backHand, float shotStrength, __vector4 ballVelocity, float ballSpin, __vector4 ballEndPos, int eventId, int teamId, int playerId, __vector4 playerPos)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x1e, eventId) == 0 && fn_82E1CAD0(0x1e) != 0) {
      fn_82E1CB88("MatchCounter", matchCounter);
      fn_82E1CB88("PlayerScore", playerScore);
      fn_82E1CB88("AiScore", aiScore);
      fn_82E1CB88("ShotCounter", shotCounter);
      fn_8225FCE8("BallStartPosition", ballStartPos);
      fn_82E1CB08("ShotType", shotType, 0);
      fn_82E1CB88("LeftHanded", leftHanded);
      fn_82E1CB88("BackHand", backHand);
      fn_82E1CC60("ShotStrength", shotStrength);
      fn_8225FCE8("BallVelocity", ballVelocity);
      fn_82E1CC60("BallSpin", ballSpin);
      fn_8225FCE8("BallEndPosition", ballEndPos);
      fn_82E1CB88("TeamId", teamId);
      fn_82E1CB88("PlayerId", playerId);
      fn_8225FCE8("PlayerPosition", playerPos);
      fn_82E1CCA8();
    }
  }
}
