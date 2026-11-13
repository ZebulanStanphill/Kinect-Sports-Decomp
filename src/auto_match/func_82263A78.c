extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();


void fn_82263A78(unsigned __int64 param_1,unsigned char param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x4d,param_2);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x4d), cVar3 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,param_1);
      fn_82E1CB88(0xffffffff821a69b8,param_3);
      fn_82E1CB88(0xffffffff821a69c0,param_4);
      fn_8225FCE8(0xffffffff821a6940);
      fn_8225FCE8(0xffffffff821a6968);
      fn_8225FCE8(0xffffffff821a6978);
      fn_82E1CCA8();
    }
  }
  return;
}

