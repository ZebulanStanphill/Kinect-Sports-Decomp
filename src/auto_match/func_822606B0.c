extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();


void fn_822606B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  pcVar1 = (char *)fn_8225F670();
  if (*pcVar1 != '\0') {
    iVar2 = fn_8225FDE0(0x20,param_6);
    if ((iVar2 == 0) && (cVar3 = fn_82E1CAD0(0x20), cVar3 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,param_2);
      fn_82E1CB88(0xffffffff821a6a54,param_3);
      fn_82E1CB88(0xffffffff821a69b8,param_4);
      fn_82E1CB88(0xffffffff821a69c0,param_5);
      fn_8225FCE8(0xffffffff821a6b60);
      fn_82E1CB88(0xffffffff821a6950,param_7);
      fn_82E1CB88(0xffffffff821a69cc,param_8);
      fn_82E1CB08(0xffffffff821a695c,param_9,0);
      fn_82E1CC60(param_1,0xffffffff821a6988);
      fn_8225FCE8(0xffffffff821a6a60);
      fn_82E1CCA8();
    }
  }
  return;
}

