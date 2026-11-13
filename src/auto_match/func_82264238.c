extern unsigned int *auStack_5c;
extern int fn_8225F670();
extern int fn_8225F6D0();
extern int fn_8225FD88();
extern int fn_8225FDE0();
extern int fn_829C5988();
extern int fn_82E1CA30();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CC18();
extern int fn_82E1CC60();
extern int fn_82E1CCA8();
extern int fn_82E1CD30();
extern unsigned int uStack_60;


void fn_82264238(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9,unsigned __int64 param_10)

{
  char *pcVar2;
  int iVar3;
  char cVar4;
  unsigned __int64 uVar1;
  unsigned int in_stack_00000054;
  unsigned char in_stack_0000005f;
  unsigned int in_stack_00000064;
  unsigned int in_stack_00000074;
  unsigned int in_stack_0000007c;
  unsigned int in_stack_00000084;
  unsigned int in_stack_0000008c;
  unsigned int uStack_60;
  unsigned char auStack_5c [92];
  
  pcVar2 = (char *)fn_8225F670();
  if (*pcVar2 != '\0') {
    iVar3 = fn_8225FDE0(0x5a,1);
    if ((iVar3 == 0) && (cVar4 = fn_82E1CAD0(0x5a), cVar4 != '\0')) {
      fn_82E1CD30();
      fn_82E1CB88(0xffffffff821a684c,param_3);
      uVar1 = fn_8225FD88(param_4);
      fn_82E1CB08(0xffffffff821a6874,uVar1,0);
      fn_82E1CB40(0xffffffff821a6abc,param_5);
      fn_82E1CB88(0xffffffff821a6a90,param_6);
      fn_82E1CC60(param_1,0xffffffff821a7550);
      fn_82E1CB88(0xffffffff821a7568,param_8);
      fn_82E1CB88(0xffffffff821a757c,param_9);
      fn_82E1CB88(0xffffffff821a7598,param_10);
      fn_82E1CB88(0xffffffff821a75ac,in_stack_00000054);
      fn_82E1CB40(0xffffffff821a6acc,in_stack_0000005f);
      fn_82E1CB88(0xffffffff821a6a9c,in_stack_00000064);
      fn_82E1CC60(param_2,0xffffffff821a75c8);
      fn_82E1CB88(0xffffffff821a75e0,in_stack_00000074);
      fn_82E1CB88(0xffffffff821a75f4,in_stack_0000007c);
      fn_82E1CB88(0xffffffff821a7610,in_stack_00000084);
      fn_82E1CB88(0xffffffff821a7624,in_stack_0000008c);
      iVar3 = fn_829C5988(&uStack_60,auStack_5c);
      if (iVar3 < 0) {
        fn_82E1CB88(0xffffffff821a6adc,0xffffffffffffffff);
      }
      else {
        fn_82E1CC18(0xffffffff821a6adc,uStack_60);
      }
      fn_82E1CCA8();
      fn_82E1CA30();
    }
  }
  fn_8225F6D0();
  return;
}

