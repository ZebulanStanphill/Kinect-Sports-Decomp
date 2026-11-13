extern int fn_82AA6110();
extern int fn_82AA6150();
extern int fn_82AA6210();
extern int fn_82AA6DC0();
extern int fn_82AA6EA0();
extern int fn_82AA6F30();
extern int fn_82AA71F8();
extern int setjmp();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int iStack_34;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82AA7460(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                  unsigned int param_5,unsigned int param_6,unsigned int param_7)

{
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned int *puStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  int (**pcStack_38)();
  int iStack_34;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned char uStack_28;
  int iStack_24;
  int iStack_20;

  pcStack_38 = fn_82AA6210;
  puStack00000034 = &stack_pair_40.first;
  iStack_34 = 0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  uStack0000003c = param_6;
  uStack00000044 = param_7;
  stack_pair_40.first = param_5;
  stack_pair_40.second = param_6;
  fn_82AA6110(param_3,&stack_pair_30.first);
  do {
    iStack_34 = fn_82AA6150(&stack_pair_30.first,puStack00000034,pcStack_38);
    if (iStack_34 == 0) {
      iStack_24 = setjmp((unsigned __int64)stack_pair_30.second + 0x470);
      iStack_20 = iStack_24;
      if (iStack_24 == 0) {
        uStack_28 = 1;
        fn_82AA6F30(stack_pair_30.second,puStack00000034,pcStack_38);
        fn_82AA71F8(stack_pair_30.second,uStack00000014,uStack0000001c,stack_pair_30.first,uStack0000002c,
                      uStack00000044);
        break;
      }
      iStack_34 = fn_82AA6DC0(&stack_pair_30.first);
    }
  } while (iStack_34 == 0);
  fn_82AA6EA0(&stack_pair_30.first,iStack_34);
  return;
}
