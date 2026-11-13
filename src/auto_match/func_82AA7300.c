extern int fn_82AA6110();
extern int fn_82AA6150();
extern int fn_82AA6DC0();
extern int fn_82AA6EA0();
extern int fn_82AA6F30();
extern int fn_82AA7010();
extern int setjmp();
extern unsigned int iStack_30;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_24;
extern unsigned int uStack_28;


void fn_82AA7300(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  int iVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  int iStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  uStack0000004c = param_8;
  fn_82AA6110(param_2,&stack_pair_28.first);
  do {
    iStack_30 = fn_82AA6150(&stack_pair_28.first,in_stack_0000005c,in_stack_00000064);
    if (iStack_30 == 0) {
      iVar1 = setjmp((unsigned __int64)stack_pair_28.second + 0x470);
      if (iVar1 == 0) {
        fn_82AA6F30(stack_pair_28.second,in_stack_0000005c,in_stack_00000064);
        fn_82AA7010(stack_pair_28.second,uStack00000014,stack_pair_28.first,uStack00000024,uStack0000002c,
                      uStack00000034,uStack0000003c,uStack00000044);
        break;
      }
      iStack_30 = fn_82AA6DC0(&stack_pair_28.first);
    }
  } while (iStack_30 == 0);
  fn_82AA6EA0(&stack_pair_28.first,iStack_30);
  return;
}

