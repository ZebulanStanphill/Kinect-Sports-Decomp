typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CB08(const char *, int, int);
extern void fn_82E1CC60(const char *, float);
extern void fn_8225FCE8(const char *, __vector4);
extern void fn_82E1CCA8(void);

void fn_82262EB0(int matchCounter, int rallyCounter, int shotType, float shotPower,
                 __vector4 outgoingBallVelocity, __vector4 playerPosition, __vector4 ballPosition,
                 __vector4 targetPosition, int diveDirection, int superSpike, int goodSpike,
                 int sendingTeamId, int sendingPlayerId, int user, int receivingTeamId,
                 int receivingPlayerId, int lastShotType, int unused,
                 __vector4 lastShotBallPosition, __vector4 lastShotBallVelocity,
                 __vector4 lastShotPlayerPosition, int lastShotDiveDirection, float lastShotPower,
                 int lastShotTeamId, int lastShotPlayerId)
{
  char *p = fn_8225F670();
  if (*p != 0) {
    if (fn_8225FDE0(8, user) == 0 && fn_82E1CAD0(8) != 0) {
      fn_82E1CB88("MatchCounter", matchCounter);
      fn_82E1CB88("RallyCounter", rallyCounter);
      fn_82E1CB08("ShotType", shotType, 0);
      fn_82E1CC60("ShotPower", shotPower);
      fn_8225FCE8("OutgoingBallVelocity", outgoingBallVelocity);
      fn_8225FCE8("PlayerPosition", playerPosition);
      fn_8225FCE8("BallPosition", ballPosition);
      fn_8225FCE8("TargetPosition", targetPosition);
      fn_82E1CB08("DiveDirection", diveDirection, 0);
      fn_82E1CB88("SuperSpike", superSpike);
      fn_82E1CB88("GoodSpike", goodSpike);
      fn_82E1CB88("SendingTeamId", sendingTeamId);
      fn_82E1CB88("SendingPlayerId", sendingPlayerId);
      fn_82E1CB88("ReceivingTeamId", receivingTeamId);
      fn_82E1CB88("ReceivingPlayerId", receivingPlayerId);
      fn_82E1CB08("LastShotType", lastShotType, 0);
      fn_8225FCE8("LastShotBallPosition", lastShotBallPosition);
      fn_8225FCE8("LastShotBallVelocity", lastShotBallVelocity);
      fn_8225FCE8("LastShotPlayerPosition", lastShotPlayerPosition);
      fn_82E1CB08("LastShotDiveDirection", lastShotDiveDirection, 0);
      fn_82E1CC60("LastShotPower", lastShotPower);
      fn_82E1CB88("LastShotTeamId", lastShotTeamId);
      fn_82E1CB88("LastShotPlayerId", lastShotPlayerId);
      fn_82E1CCA8();
    }
  }
}
