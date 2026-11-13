typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CC60(const char *, float);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CCA8(void);

void fn_82261750(int sessionId, int playerId, float finalRunUpSpeed, float distanceFromBoard, float distanceJumped, __vector4 playerPos)
{
  if (*fn_8225F670() != 0) {
    if (fn_8225FDE0(0x38, 1) == 0 && fn_82E1CAD0(0x38) != 0) {
      fn_82E1CB88("SessionId", sessionId);
      fn_82E1CB88("PlayerId", playerId);
      fn_82E1CC60("FinalRunUpSpeed", finalRunUpSpeed);
      fn_82E1CC60("DistanceFromBoard", distanceFromBoard);
      fn_82E1CC60("DistanceJumped", distanceJumped);
      fn_8225FCE8("PlayerPosition", playerPos);
      fn_82E1CCA8();
    }
  }
}
