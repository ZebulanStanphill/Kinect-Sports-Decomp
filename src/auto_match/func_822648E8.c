extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern unsigned int lbl_83276584;


void fn_822648E8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  
  uVar1 = lbl_83276584;
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x12,param_3);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x12), cVar4 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar1);
      fn_82E1CB88(0xffffffff821a7640,param_1);
      fn_82E1CB88(0xffffffff821a69c0,param_2);
      fn_82E1CB88(0xffffffff821a76f8,param_4);
      fn_82E1CB88(0xffffffff821a770c,param_5);
      fn_8225FCE8(0xffffffff821a6940);
      fn_8225FCE8(0xffffffff821a76e4);
      fn_82E1CB88(0xffffffff821a7698,param_6);
      fn_82E1CB88(0xffffffff821a76a8,param_7);
      fn_82E1CB08(0xffffffff821a7720,param_8,0);
      fn_82E1CB88(0xffffffff821a7730,in_stack_0000007c);
      fn_82E1CB88(0xffffffff821a7744,in_stack_00000084);
      fn_82E1CB88(0xffffffff821a7654,in_stack_0000008c);
      fn_82E1CCA8();
    }
  }
  return;
}

