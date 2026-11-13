typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CC60(const char *, float);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CCA8(void);

void fn_82261580(int sessionId, int playerId, float throwDistance, __vector4 landingPosition)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x35, 1) == 0 && fn_82E1CAD0(0x35) != 0) {
      fn_82E1CB88("SessionId", sessionId);
      fn_82E1CC60("ThrowDistance", throwDistance);
      fn_8225FCE8("LandingPosition", landingPosition);
      fn_82E1CC60("LandingAngle", 0.0f);
      fn_82E1CB88("PlayerId", playerId);
      fn_82E1CCA8();
    }
  }
}
