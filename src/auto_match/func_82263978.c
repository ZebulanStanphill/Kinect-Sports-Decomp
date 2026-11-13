extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();


void fn_82263978(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  
  uVar1 = fn_82F6DA24();
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x4f,param_2 & 0xff);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x4f), cVar4 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar1);
      fn_82E1CB88(0xffffffff821a74bc,param_3);
      fn_82E1CB88(0xffffffff821a74cc,param_4);
      fn_8225FCE8(0xffffffff821a74dc);
      fn_82E1CB88(0xffffffff821a74f4,param_5);
      fn_8225FCE8(0xffffffff821a7504);
      fn_8225FCE8(0xffffffff821a6968);
      fn_8225FCE8(0xffffffff821a6978);
      fn_82E1CCA8();
    }
  }
  fn_82F6DCBC();
  return;
}

