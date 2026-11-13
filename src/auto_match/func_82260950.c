extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CD30(void);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CC60(const char *, float);
extern void fn_82E1CCA8(void);
extern void fn_82E1CA30(void);
extern void fn_8225F6D0(void);

void fn_82260950(int id, float f1, float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11, float f12, float f13, float f14, float f15, float f16, float f17, float f18, float f19, float f20, float f21)
{
  char *p = fn_8225F670();
  if (*p != 0) {
    if (fn_8225FDE0(0x22, 1) == 0 && fn_82E1CAD0(0x22) != 0) {
      fn_82E1CD30();
      fn_82E1CB88("pentathlonId", id);
      fn_82E1CC60("Player0Event1Score", f1);
      fn_82E1CC60("Player0Event2Score", f2);
      fn_82E1CC60("Player0Event3Score", f3);
      fn_82E1CC60("Player0Event4Score", f4);
      fn_82E1CC60("Player0Event5Score", f5);
      fn_82E1CC60("Player1Event1Score", f6);
      fn_82E1CC60("Player1Event2Score", f7);
      fn_82E1CC60("Player1Event3Score", f8);
      fn_82E1CC60("Player1Event4Score", f9);
      fn_82E1CC60("Player1Event5Score", f10);
      fn_82E1CC60("Player2Event1Score", f11);
      fn_82E1CC60("Player2Event2Score", f12);
      fn_82E1CC60("Player2Event3Score", f13);
      fn_82E1CC60("Player2Event4Score", f14);
      fn_82E1CC60("Player2Event5Score", f15);
      fn_82E1CC60("Player3Event1Score", f16);
      fn_82E1CC60("Player3Event2Score", f17);
      fn_82E1CC60("Player3Event3Score", f18);
      fn_82E1CC60("Player3Event4Score", f19);
      fn_82E1CC60("Player3Event5Score", f20);
      fn_82E1CC60("Duration", f21);
      fn_82E1CCA8();
      fn_82E1CA30();
    }
  }
  fn_8225F6D0();
}
