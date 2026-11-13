extern int fn_822AF138();
extern int fn_82320BE0();
extern int fn_82321138();
extern int fn_8232B210();
extern int fn_82F63108();
extern unsigned int ltcg_pool_0_0f;


void fn_822C04D0(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = ltcg_pool_0_0f;
  if (*(int *)(param_1 + 0x788) == 2) {
    *(unsigned int *)(param_1 + 0x4ec) = ltcg_pool_0_0f;
    *(unsigned int *)(param_1 + 0x4f0) = uVar1;
    fn_82321138(param_1 + 0x528,param_1);
  }
  else if (*(int *)(param_1 + 0x788) == 3) {
    *(unsigned int *)(param_1 + 0x4e8) = *(unsigned int *)(param_1 + 0x4e0);
    *(unsigned int *)(param_1 + 0x4ec) = uVar1;
    *(unsigned int *)(param_1 + 0x7c4) = 0;
  }
  if (param_2 == 0) {
    uVar2 = 2;
  }
  else {
    if (param_2 != 1) {
      if (param_2 < 3) {
        fn_82321138(param_1 + 0x518,param_1);
        *(unsigned int *)(param_1 + 0x500) = 0;
        *(unsigned int *)(param_1 + 0x4f0) = *(unsigned int *)(*(int *)(param_1 + 0x504) + 0x18);
        if (*(int *)(param_1 + 0x7d4) != 0) {
          fn_82320BE0(*(int *)(param_1 + 0x7d4),0);
        }
        fn_8232B210(param_1 + 0x5c0);
        if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        (**(int (***)())(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
        *(unsigned int *)(param_1 + 0x7a0) = 0;
      }
      else {
        if (param_2 == 3) {
          uVar2 = 4;
          *(int *)(param_1 + 0x78c) = *(int *)(param_1 + 0x78c) + 1;
          *(int *)(param_1 + 0x790) = *(int *)(param_1 + 0x790) + 1;
          if (*(int *)(param_1 + 0x24) == 0) {
            uVar2 = 5;
          }
                    /* WARNING: Subroutine does not return */
          fn_822AF138(*(unsigned int *)(param_1 + 0x110),uVar2);
        }
        if (param_2 < 5) {
                    /* WARNING: Subroutine does not return */
          fn_822AF138(*(unsigned int *)(param_1 + 0x110),1);
        }
      }
      *(unsigned int *)(param_1 + 0x788) = param_2;
      return;
    }
    uVar2 = 3;
  }
                    /* WARNING: Subroutine does not return */
  fn_822AF138(*(unsigned int *)(param_1 + 0x110),uVar2);
}

