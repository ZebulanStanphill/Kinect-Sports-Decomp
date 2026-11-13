extern int fn_8225F670();
extern int fn_8225FCE8();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB88();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82F6DA0C();
extern int fn_82F6DCA4();


void fn_82262A90(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9,unsigned __int64 param_10)

{
  unsigned __int64 uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  unsigned __int64 extraout_f1;
  unsigned __int64 uVar5;
  unsigned int in_stack_00000094;
  unsigned int in_stack_0000009c;
  unsigned int in_stack_000000a4;
  unsigned int in_stack_000000e4;
  unsigned int in_stack_000000f4;
  unsigned int in_stack_000000fc;
  
  uVar1 = fn_82F6DA0C();
  uVar5 = extraout_f1;
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(6,param_10);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(6), cVar4 != '\0')) {
      fn_82E1CB88(0xffffffff821a684c,uVar1);
      fn_82E1CB88(0xffffffff821a731c,param_4);
      fn_82E1CB08(0xffffffff821a695c,param_5,0);
      fn_82E1CC60(uVar5,0xffffffff821a7310);
      fn_8225FCE8(0xffffffff821a6a04);
      fn_8225FCE8(0xffffffff821a6940);
      fn_8225FCE8(0xffffffff821a6968);
      fn_8225FCE8(0xffffffff821a6a30);
      fn_82E1CB08(0xffffffff821a732c,param_7,0);
      fn_82E1CB88(0xffffffff821a733c,param_8);
      fn_82E1CB88(0xffffffff821a734c,param_9);
      fn_82E1CB88(0xffffffff821a735c,in_stack_00000094);
      fn_82E1CB88(0xffffffff821a736c,in_stack_0000009c);
      fn_82E1CB08(0xffffffff821a7380,in_stack_000000a4,0);
      fn_8225FCE8(0xffffffff821a7390);
      fn_8225FCE8(0xffffffff821a73a8);
      fn_8225FCE8(0xffffffff821a73c0);
      fn_82E1CB08(0xffffffff821a73d8,in_stack_000000e4,0);
      fn_82E1CC60(param_2,0xffffffff821a73f0);
      fn_82E1CB88(0xffffffff821a7400,in_stack_000000f4);
      fn_82E1CB88(0xffffffff821a7410,in_stack_000000fc);
      fn_82E1CCA8();
    }
  }
  fn_82F6DCA4();
  return;
}

