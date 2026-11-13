#define true 1
extern int fn_82A1BB18();
extern int fn_82A1F2F8();
extern int fn_82E2D9C0();
extern int fn_82E58CA8();
extern int fn_82E660E0();
extern int fn_82F65320();
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


unsigned __int64 fn_82EE8A38(int param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int * apiStack_120;
  struct { unsigned int first; unsigned int second; } stack_pair_110;

  unsigned int uStack_108;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  
  piVar1 = *(int **)(param_1 + 0x20);
  stack_pair_110.first = 0;
  stack_pair_110.second = 0;
  uStack_108 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  uVar2 = fn_82A1BB18();
  *(unsigned int *)(param_1 + 0x14) = uVar2;
  (**(int (***)())(*piVar1 + 4))(piVar1);
  fn_82E58CA8(&stack_pair_110.first,4,0);
  (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x1c))();
  fn_82A1F2F8();
  fn_82F65320();
  do {
    (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x10))(*(int **)(param_1 + 0x1c),&apiStack_120);
    if (apiStack_120 != (int *)0x0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(int (***)())(*apiStack_120 + 8))();
        apiStack_120 = (int *)0x0;
LAB_82ee8b74:
        (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x20))();
        (**(int (***)())(*piVar1 + 8))(piVar1);
        thunk_FUN_82e58aac(&stack_pair_110.first);
        fn_82E2D9C0(&stack_pair_110.first);
        return 0;
      }
      if (apiStack_120[6] == 0) {
        fn_82E660E0();
      }
      else {
        (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x18))(*(int **)(param_1 + 0x1c),apiStack_120);
      }
      (**(int (***)())(*apiStack_120 + 8))();
      apiStack_120 = (int *)0x0;
    }
    if ((*(int *)(param_1 + 0x18) != 0) ||
       ((**(int (***)())(**(int **)(param_1 + 0x1c) + 0x34))(*(int **)(param_1 + 0x1c),&stack_pair_110.first),
       *(int *)(param_1 + 0x18) != 0)) goto LAB_82ee8b74;
  } while( true );
}

