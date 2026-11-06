extern unsigned char *fn_8225F670(void);
extern void fn_8225F6D0(void);
extern int fn_8225FDE0(int,int);
extern int fn_829C5988(unsigned *,unsigned *);
extern void fn_82E1CA30(void);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *,int);
extern void fn_82E1CC18(const char *,unsigned);
extern void fn_82E1CC60(const char *,float);
extern void fn_82E1CCA8(void);
extern void fn_82E1CD30(void);
void fn_822635D8(int counter,int score0,int score1,float duration,int human0,int human1) {
 struct { unsigned angle,other; } out;
 if (*fn_8225F670()) {
 if(fn_8225FDE0(13,1)==0 && fn_82E1CAD0(13)) {
 fn_82E1CD30();
 fn_82E1CB88("MatchCounter",counter); fn_82E1CB88("Team0Score",score0); fn_82E1CB88("Team1Score",score1);
 fn_82E1CC60("MatchDurationSecs",duration);
 fn_82E1CB88("Team0IsHuman",human0); fn_82E1CB88("Team1IsHuman",human1);
 if(fn_829C5988(&out.angle,&out.other)>=0) fn_82E1CC18("CameraAngle",out.angle);
 else fn_82E1CB88("CameraAngle",-1);
 fn_82E1CCA8(); fn_82E1CA30();
 }
 }
 fn_8225F6D0();
}
