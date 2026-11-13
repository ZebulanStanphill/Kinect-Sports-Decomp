typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {float f[4];} __vector4;
extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int,int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *,int);
extern void fn_8225FCE8(const char *,__vector4);
extern void fn_82E1CB08(const char *,int,int);
extern void fn_82E1CC60(const char *,float);
extern void fn_82E1CCA8(void);

void fn_82260130(int match,int leftHanded,int shotType,int backHand,__vector4 inVelocity,float inSpin,float strength,__vector4 outVelocity,float outSpin,__vector4 ball,__vector4 target,__vector4 pos,int team,int player,int event) {
 if(*fn_8225F670()!=0) {
  if(fn_8225FDE0(29,event)==0 && fn_82E1CAD0(29)!=0) {
   fn_82E1CB88("MatchCounter",match);
   fn_82E1CB88("LeftHanded",leftHanded);
   fn_82E1CB08("ShotType",shotType,0);
   fn_82E1CB88("BackHand",backHand);
   fn_8225FCE8("IncomingBallVelocity",inVelocity);
   fn_82E1CC60("IncomingBallSpin",inSpin);
   fn_82E1CC60("ShotStrength",strength);
   fn_8225FCE8("OutgoingBallVelocity",outVelocity);
   fn_82E1CC60("OutgoingBallSpin",outSpin);
   fn_8225FCE8("BallPosition",ball);
   fn_8225FCE8("TargetPosition",target);
   fn_8225FCE8("PlayerPosition",pos);
   fn_82E1CB88("TeamId",team);
   fn_82E1CB88("PlayerId",player);
   fn_82E1CCA8();
  }
 }
}
