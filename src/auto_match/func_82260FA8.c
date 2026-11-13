extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();


void fn_82260FA8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x2e,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x2e), cVar3 != '\0')) {
      fn_82E1CB88(0xffffffff821a6d50,param_1);
      fn_82E1CB88(0xffffffff821a69c0,param_2);
      fn_82E1CB40(0xffffffff821a6d74,param_3);
      fn_8225FCE8(0xffffffff821a6d84);
      fn_82E1CB88(0xffffffff821a6d94,0);
      fn_8225FCE8(0xffffffff821a6940);
      fn_82E1CCA8();
    }
  }
  return;
}

