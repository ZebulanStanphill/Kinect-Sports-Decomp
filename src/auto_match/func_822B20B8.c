typedef unsigned char bool;
extern int fn_822B2618();
extern int fn_8288B760();
extern int fn_828AB870();
extern int fn_82F63108();


unsigned __int64 fn_822B20B8(int param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  char cVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    uVar2 = (**(int (***)())(**(int **)(param_1 + 0x28) + 4))();
  }
  if ((param_2 & 0xffffffff) == (uVar2 & 0xffffffff)) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      iVar4 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      iVar4 = (**(int (***)())(**(int **)(param_1 + 0x28) + 4))();
    }
    for (piVar7 = *(int **)(param_1 + 300);
        (piVar7 != *(int **)(param_1 + 0x130) && (*piVar7 != iVar4)); piVar7 = piVar7 + 1) {
    }
    bVar1 = *(char *)(param_1 + 0x13c) == '\0';
    if (piVar7 == *(int **)(param_1 + 0x130)) {
      if (bVar1) {
        if (*(int *)(param_1 + 0x28) == 0) {
          uVar2 = 0;
        }
        else {
          if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F63108();
          }
          uVar2 = (**(int (***)())(**(int **)(param_1 + 0x28) + 4))();
        }
      }
      else {
        uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x140);
      }
      iVar4 = param_1 + 0x84;
      fn_822B2618(iVar4,uVar2,0);
      fn_822B2618(iVar4,1,1);
      fn_822B2618(iVar4,1,2);
      cVar6 = fn_8288B760(*(unsigned int *)(param_1 + 0x10));
      if (cVar6 != '\0') {
        fn_828AB870(param_1 + 0xd8,param_2);
      }
    }
    else if (bVar1) {
      *(unsigned char *)(param_1 + 0x13c) = 1;
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar5 = 0;
      }
      else {
        if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63108();
        }
        uVar5 = (**(int (***)())(**(int **)(param_1 + 0x28) + 4))();
      }
      *(unsigned int *)(param_1 + 0x140) = uVar5;
    }
    uVar3 = 1;
  }
  return uVar3;
}

