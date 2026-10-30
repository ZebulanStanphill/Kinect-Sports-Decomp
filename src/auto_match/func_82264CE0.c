extern char *fn_8225F670();
extern int fn_8225F6D0();
extern int fn_8225FDE0();
extern int fn_829C5988();
extern unsigned char fn_82E1CAD0();
extern int fn_82E1CA30();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC18();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();
extern int lbl_83276584;

void fn_82264CE0(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8,
                 int p9, int p10, int p11, int p12)
{
  int uVar1;
  char *pc;
  struct { int val; char buf[12]; } l;
  uVar1 = lbl_83276584;
  pc = fn_8225F670();
  if (*pc != 0) {
    if (fn_8225FDE0(0x17, 1) == 0 && fn_82E1CAD0(0x17) != 0) {
      fn_82E1CD30();
      fn_82E1CB88("MatchCounter", uVar1);
      fn_82E1CB88("Round", p1);
      fn_82E1CB08("WinReason", p2, 0);
      fn_82E1CB88("Player0Score", p3);
      fn_82E1CB88("Player1Score", p4);
      fn_82E1CB88("Player0TotalHits", p5);
      fn_82E1CB88("Player0TotalBlocks", p6);
      fn_82E1CB88("Player0TotalKnockedDown", p7);
      fn_82E1CB88("Player0TotalStunned", p8);
      fn_82E1CB88("Player1TotalHits", p9);
      fn_82E1CB88("Player1TotalBlocks", p10);
      fn_82E1CB88("Player1TotalKnockedDown", p11);
      fn_82E1CB88("Player1TotalStunned", p12);
      if (fn_829C5988(&l.val, l.buf) >= 0) {
        fn_82E1CC18("CameraAngle", l.val);
      } else {
        fn_82E1CB88("CameraAngle", -1);
      }
      fn_82E1CCA8();
      fn_82E1CA30();
    }
  }
  fn_8225F6D0();
}
