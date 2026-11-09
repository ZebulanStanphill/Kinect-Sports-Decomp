typedef struct Camera_82261BE0 { unsigned angle; unsigned char buf[4]; } Camera_82261BE0;
extern unsigned char *fn_8225F670(void);
extern int fn_8225FDE0(int,int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CB88(const char *,int);
extern void fn_82E1CB40(const char *,int);
extern void fn_82E1CC60(const char *,float);
extern void fn_82E1CC18(const char *,unsigned);
extern int fn_829C5988(unsigned *,unsigned char *);
extern void fn_82E1CCA8(void);
void fn_82261BE0(int session,int human1,int human2,int human3,float score0,float score1,float score2,float score3) {
 Camera_82261BE0 cam;
 if (*fn_8225F670()) {
  if (fn_8225FDE0(0x41,1)==0 && fn_82E1CAD0(0x41)) {
   fn_82E1CB88("SessionId",session);
   fn_82E1CB40("Player0IsHuman",1);
   fn_82E1CB40("Player1IsHuman",human1);
   fn_82E1CB40("Player2IsHuman",human2);
   fn_82E1CB40("Player3IsHuman",human3);
   fn_82E1CC60("Player0Score",score0);
   fn_82E1CC60("Player1Score",score1);
   fn_82E1CC60("Player2Score",score2);
   fn_82E1CC60("Player3Score",score3);
   if (fn_829C5988(&cam.angle,cam.buf)>=0) fn_82E1CC18("CameraAngle",cam.angle);
   else fn_82E1CB88("CameraAngle",-1);
   fn_82E1CCA8();
  }
 }
}
