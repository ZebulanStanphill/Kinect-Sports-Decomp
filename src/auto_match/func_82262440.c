extern char *fn_8225F670(void);
extern int fn_8225FDE0(int, int);
extern unsigned char fn_82E1CAD0(int);
extern void fn_82E1CD30(void);
extern void fn_82E1CB88(const char *, int);
extern void fn_82E1CB40(const char *, int);
extern void fn_82E1CCA8(void);
extern void fn_82E1CA30(void);
extern void fn_8225F6D0(void);

void fn_82262440(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22)
{
  char *p = fn_8225F670();
  if (*p != 0) {
    if (fn_8225FDE0(0x48, 1) == 0 && fn_82E1CAD0(0x48) != 0) {
      fn_82E1CD30();
      fn_82E1CB88("MatchId", a1);
      fn_82E1CB40("IsPartyMode", a2);
      fn_82E1CB88("PlayerScore", a3);
      fn_82E1CB88("NumTimeBonus", a4);
      fn_82E1CB88("NumBallsBowled", a5);
      fn_82E1CB88("NumBallsBowledLeft", a6);
      fn_82E1CB88("NumBallsBowledRight", a7);
      fn_82E1CB88("Player2Score", a8);
      fn_82E1CB88("Player2NumTimeBonus", a9);
      fn_82E1CB88("Player2NumBallsBowled", a10);
      fn_82E1CB88("Player2NumBallsBowledLeft", a11);
      fn_82E1CB88("Player2NumBallsBowledRight", a12);
      fn_82E1CB88("Player3Score", a13);
      fn_82E1CB88("Player3NumTimeBonus", a14);
      fn_82E1CB88("Player3NumBallsBowled", a15);
      fn_82E1CB88("Player3NumBallsBowledLeft", a16);
      fn_82E1CB88("Player3NumBallsBowledRight", a17);
      fn_82E1CB88("Player4Score", a18);
      fn_82E1CB88("Player4NumTimeBonus", a19);
      fn_82E1CB88("Player4NumBallsBowled", a20);
      fn_82E1CB88("Player4NumBallsBowledLeft", a21);
      fn_82E1CB88("Player4NumBallsBowledRight", a22);
      fn_82E1CCA8();
      fn_82E1CA30();
    }
  }
  fn_8225F6D0();
}
