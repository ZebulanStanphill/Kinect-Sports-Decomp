extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();


void fn_82262110(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  char *pcVar1;
  int iVar2;
  unsigned char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x45,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x45), cVar3 != '\0')) {
      fn_82E1CB88("MatchId",param_1);
      fn_82E1CB88("BowlId",param_2);
      fn_82E1CB88("PlayerIndex",param_3);
      fn_82E1CB88("FrameNumber",param_4);
      fn_82E1CB88("SecondsSincePickedUp",param_5);
      fn_82E1CB88("NumberOfAttempts",param_6);
      fn_82E1CCA8();
    }
  }
  return;
}

