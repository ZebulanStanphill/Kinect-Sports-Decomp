extern int fn_8225F670();
extern int fn_8225F6D0();
extern int fn_8225FDE0();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();


void fn_82260E68(int param_1,unsigned __int64 param_2)

{
  char *pcVar1;
  int iVar2;
  unsigned char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 == '\0') goto code_r0x82260f8c;
  if (param_1 == 2) {
    iVar2 = fn_8225FDE0(0x28,1);
    if (iVar2 != 0) goto code_r0x82260f8c;
    cVar3 = fn_82E1CAD0(0x28);
    if (cVar3 == '\0') goto code_r0x82260ec0;
  }
  else {
code_r0x82260ec0:
    if (param_1 == 3) {
      iVar2 = fn_8225FDE0(0x2a,1);
      if (iVar2 != 0) goto code_r0x82260f8c;
      cVar3 = fn_82E1CAD0(0x2a);
      if (cVar3 != '\0') goto code_r0x82260f70;
    }
    if (param_1 == 4) {
      iVar2 = fn_8225FDE0(0x2c,1);
      if (iVar2 != 0) goto code_r0x82260f8c;
      cVar3 = fn_82E1CAD0(0x2c);
      if (cVar3 != '\0') goto code_r0x82260f70;
    }
    if (param_1 == 0) {
      iVar2 = fn_8225FDE0(0x29,1);
      if (iVar2 != 0) goto code_r0x82260f8c;
      cVar3 = fn_82E1CAD0(0x29);
      if (cVar3 != '\0') goto code_r0x82260f70;
    }
    if (param_1 != 1) goto code_r0x82260f8c;
    iVar2 = fn_8225FDE0(0x2b,1);
    if ((iVar2 != 0) || (cVar3 = fn_82E1CAD0(0x2b), cVar3 == '\0')) goto code_r0x82260f8c;
  }
code_r0x82260f70:
  fn_82E1CD30();
  fn_82E1CB88("GameId",param_2);
  fn_82E1CCA8();
  fn_82E1CA30();
code_r0x82260f8c:
  fn_8225F6D0();
  return;
}

