typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CB40(const char *, int);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CCA8(void);

void fn_82261E78(int matchId, int bowlId, int playerIndex, int leftHanded, __vector4 basePos, __vector4 handPickupPos, int secondsSinceLastThrow)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x43, 1) == 0 && fn_82E1CAD0(0x43) != 0) {
      fn_82E1CB88("MatchId", matchId);
      fn_82E1CB88("BowlId", bowlId);
      fn_82E1CB88("PlayerIndex", playerIndex);
      fn_82E1CB40("LeftHanded", leftHanded);
      fn_8225FCE8("BasePosition", basePos);
      fn_8225FCE8("HandPickupPosition", handPickupPos);
      fn_82E1CB88("SecondsSinceLastThrow", secondsSinceLastThrow);
      fn_82E1CCA8();
    }
  }
}
