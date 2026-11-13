extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();


void fn_82261AD0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x40,1);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x40), cVar3 != '\0')) {
      fn_82E1CB88(0xffffffff821a6d50,param_3);
      fn_82E1CB40(0xffffffff821a6ea8,param_4);
      fn_82E1CB88(0xffffffff821a6eb4,param_5);
      fn_82E1CB88(0xffffffff821a6f0c,param_6);
      fn_82E1CB40(0xffffffff821a6f18,param_7);
      fn_82E1CC60(param_1,0xffffffff821a6f24);
      fn_82E1CC60(param_2,0xffffffff821a6f3c);
      fn_8225FCE8(0xffffffff821a6940);
      fn_82E1CCA8();
    }
  }
  return;
}

