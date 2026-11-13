typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {float f[4];} __vector4;
extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int,int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *,int);
extern void fn_8225FCE8(const char *,__vector4);
extern void fn_82E1CB08(const char *,int,int);
extern void fn_82E1CC60(const char *,float);
extern void fn_82E1CCA8(void);
void fn_82263430(int match,int rally,int scoringTeam,int touches,int score0,int score1,__vector4 ballPos,int shot,__vector4 ball,__vector4 velocity,__vector4 target,__vector4 pos,int dive,float power,int team,int player,int event) {
 if(*fn_8225F670()!=0) {
  if(fn_8225FDE0(12,event)==0 && fn_82E1CAD0(12)!=0) {
   fn_82E1CB88("MatchCounter",match);
   fn_82E1CB88("RallyCounter",rally);
   fn_82E1CB88("PointScoringTeamId",scoringTeam);
   fn_82E1CB88("NumberOfTeamTouches",touches);
   fn_82E1CB88("ScoreTeam0",score0);
   fn_82E1CB88("ScoreTeam1",score1);
   fn_8225FCE8("BallPosition",ballPos);
   fn_82E1CB08("LastShotType",shot,0);
   fn_8225FCE8("LastShotBallPosition",ball);
   fn_8225FCE8("LastShotBallVelocity",velocity);
   fn_8225FCE8("LastShotTargetPosition",target);
   fn_8225FCE8("LastShotPlayerPosition",pos);
   fn_82E1CB08("LastShotDiveDirection",dive,0);
   fn_82E1CC60("LastShotPower",power);
   fn_82E1CB88("LastShotTeamId",team);
   fn_82E1CB88("LastShotPlayerId",player);
   fn_82E1CCA8();
  }
 }
}
