extern int fn_8225F670();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();


void fn_82260B60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  char *pcVar1;
  int iVar2;
  unsigned char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 == '\0') {
    return;
  }
  if (param_1 == 2) {
    iVar2 = fn_8225FDE0(0x2d,1);
    if (iVar2 != 0) {
      return;
    }
    cVar3 = fn_82E1CAD0(0x2d);
    if (cVar3 != '\0') goto LAB_82260c70;
  }
  if (param_1 == 3) {
    iVar2 = fn_8225FDE0(0x32,1);
    if (iVar2 != 0) {
      return;
    }
    cVar3 = fn_82E1CAD0(0x32);
    if (cVar3 != '\0') goto LAB_82260c70;
  }
  if (param_1 == 4) {
    iVar2 = fn_8225FDE0(0x37,1);
    if (iVar2 != 0) {
      return;
    }
    cVar3 = fn_82E1CAD0(0x37);
    if (cVar3 != '\0') goto LAB_82260c70;
  }
  if (param_1 == 0) {
    iVar2 = fn_8225FDE0(0x3a,1);
    if (iVar2 != 0) {
      return;
    }
    cVar3 = fn_82E1CAD0(0x3a);
    if (cVar3 != '\0') goto LAB_82260c70;
  }
  if (param_1 != 1) {
    return;
  }
  iVar2 = fn_8225FDE0(0x3d,1);
  if (iVar2 != 0) {
    return;
  }
  cVar3 = fn_82E1CAD0(0x3d);
  if (cVar3 == '\0') {
    return;
  }
LAB_82260c70:
  fn_82E1CB88("SessionId",param_2);
  fn_82E1CB88("PentathlonId",param_3);
  fn_82E1CB88("EventId",param_4);
  fn_82E1CB88("RoundId",param_5);
  fn_82E1CB88("PlayerId",param_6);
  fn_82E1CCA8();
  return;
}

