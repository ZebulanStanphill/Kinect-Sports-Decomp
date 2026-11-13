extern int fn_82F63108();


void fn_8289AC08(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)param_1[0xe];
  if (piVar1 != (int *)param_1[0xe]) {
    do {
      if (piVar1[6] == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(int (***)())(*(int *)piVar1[6] + 4))((int *)piVar1[6],param_1,param_2,param_3,param_4,param_5)
      ;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)param_1[0xe]);
  }
  piVar1 = (int *)param_1[8];
  if ((int)param_3 == 0) {
    if ((int)param_2 == 1) {
      if ((piVar1 == (int *)0x0) || (iVar2 = (**(int (***)())(*piVar1 + 0x14))(), iVar2 == 0)) {
        (**(int (***)())(*param_1 + 0x28))(param_1);
      }
      else {
        (**(int (***)())(*param_1 + 0x2c))(param_1,param_5);
      }
    }
    else {
      if ((piVar1 == (int *)0x0) || (iVar2 = (**(int (***)())(*(int *)param_1[8] + 0x10))(), iVar2 == 0)
         ) {
        (**(int (***)())(*param_1 + 0x18))(param_1);
      }
      else {
        (**(int (***)())(*param_1 + 0x1c))(param_1,param_5);
      }
      if ((int)param_4 == 1) {
        if (((int *)param_1[8] == (int *)0x0) ||
           (iVar2 = (**(int (***)())(*(int *)param_1[8] + 0x10))(), iVar2 == 0)) {
          (**(int (***)())(*param_1 + 8))(param_1);
        }
        else {
          (**(int (***)())(*param_1 + 0xc))(param_1,param_5);
        }
      }
    }
  }
  else if ((int)param_2 == 1) {
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(int (***)())(*(int *)param_1[8] + 0x14))(), iVar2 == 0))
    {
      (**(int (***)())(*param_1 + 0x30))(param_1);
    }
    else {
      (**(int (***)())(*param_1 + 0x34))(param_1,param_5);
    }
  }
  else {
    if ((piVar1 == (int *)0x0) || (iVar2 = (**(int (***)())(*(int *)param_1[8] + 0x10))(), iVar2 == 0))
    {
      (**(int (***)())(*param_1 + 0x20))(param_1);
    }
    else {
      (**(int (***)())(*param_1 + 0x24))(param_1,param_5);
    }
    if ((int)param_4 == 1) {
      if (((int *)param_1[8] == (int *)0x0) ||
         (iVar2 = (**(int (***)())(*(int *)param_1[8] + 0x10))(), iVar2 == 0)) {
        (**(int (***)())(*param_1 + 0x10))(param_1);
      }
      else {
        (**(int (***)())(*param_1 + 0x14))(param_1,param_5);
      }
    }
  }
  return;
}

