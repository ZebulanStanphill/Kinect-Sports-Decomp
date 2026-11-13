extern int fn_82EE00A8();
extern int fn_83143A60();


void fn_82F339C0(int param_1,int *param_2,unsigned int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  if (((int)param_5 != 0) && (param_2 != (int *)0x0)) {
    uVar2 = (unsigned __int64)param_3 / (param_5 & 0xffffffff);
    trapWord(6,param_5,0);
    if ((param_4 & 0x100) == 0) {
      if ((param_4 & 0x200) == 0) {
        if ((param_4 & 0x400) == 0) {
          if ((param_4 & 0x800) == 0) {
            if (((param_4 & 0x20) != 0) && (piVar1 = *(int **)(param_1 + -4), piVar1 != (int *)0x0))
            {
              for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                (**(int (***)())(*piVar1 + 0x10))(piVar1,param_2);
                param_2 = (int *)((int)param_2 + (int)param_5);
              }
            }
          }
          else {
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
              fn_83143A60(param_2);
              param_2 = param_2 + 4;
            }
          }
        }
        else {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            if ((int *)*param_2 != (int *)0x0) {
              (**(int (***)())(*(int *)*param_2 + 8))();
            }
            param_2 = param_2 + 1;
          }
        }
      }
      else {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          if ((int *)*param_2 != (int *)0x0) {
            (**(int (***)())(*(int *)*param_2 + 8))();
          }
          param_2 = param_2 + 1;
        }
      }
    }
    else if (uVar2 != 0) {
      param_2 = param_2 + -1;
      do {
        param_2 = param_2 + 1;
        fn_82EE00A8(*param_2);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  return;
}

