typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {float f[4];} __vector4;
extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int,int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *,int);
extern void fn_8225FCE8(const char *,__vector4);
extern void fn_82E1CB08(const char *,int,int);
extern void fn_82E1CC60(const char *,float);
extern void fn_82E1CCA8(void);
void fn_82262958(int match,__vector4 pos,int shot,int left,float power,__vector4 ball,__vector4 velocity,int team,__vector4 target,int player,int event) {
 if(*fn_8225F670()!=0) {
  if(fn_8225FDE0(5,event)==0 && fn_82E1CAD0(5)!=0) {
   fn_82E1CB88("MatchCounter",match);
   fn_8225FCE8("PlayerPosition",pos);
   fn_82E1CB08("ShotType",shot,0);
   fn_82E1CB88("LeftHandedThrow",left);
   fn_82E1CC60("ShotPower",power);
   fn_8225FCE8("BallPosition",ball);
   fn_8225FCE8("BallVelocity",velocity);
   fn_8225FCE8("TargetPosition",target);
   fn_82E1CB88("TeamId",team);
   fn_82E1CB88("PlayerId",player);
   fn_82E1CCA8();
  }
 }
}
