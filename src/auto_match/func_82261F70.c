// Kinect Sports retail 4D5308C9, function 0x82261F70 (416 bytes).
// Bowling telemetry event 0x44 (release of a bowl): ids, three positions/directions, release power and spin,
// score and the strike/gutterball flags.

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CB40(const char *, unsigned char);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CC60(const char *, float);
extern void fn_82E1CCA8(void);

void fn_82261F70(int matchId, int bowlId, int playerIndex, int frameNumber, int secondsSincePickedUp, __vector4 releasePos, __vector4 basePos, __vector4 releaseDir, float releasePower, float baseSpin, float appliedSpin, int score, unsigned char strike, unsigned char gutterball)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x44, 1) == 0 && fn_82E1CAD0(0x44) != 0) {
      fn_82E1CB88("MatchId", matchId);
      fn_82E1CB88("BowlId", bowlId);
      fn_82E1CB88("PlayerIndex", playerIndex);
      fn_82E1CB88("FrameNumber", frameNumber);
      fn_82E1CB88("SecondsSincePickedUp", secondsSincePickedUp);
      fn_8225FCE8("ReleasePosition", releasePos);
      fn_8225FCE8("BasePosition", basePos);
      fn_8225FCE8("ReleaseDirection", releaseDir);
      fn_82E1CC60("ReleasePower", releasePower);
      fn_82E1CC60("BaseSpin", baseSpin);
      fn_82E1CC60("AppliedSpin", appliedSpin);
      fn_82E1CB88("Score", score);
      fn_82E1CB40("Strike", strike);
      fn_82E1CB40("Gutterball", gutterball);
      fn_82E1CCA8();
    }
  }
}
