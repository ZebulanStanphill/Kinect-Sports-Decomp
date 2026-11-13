extern unsigned int lbl_831BC680;


void fn_82FA7468(int *param_1,__int64 *param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_2 = (unsigned __int64)lbl_831BC680 << 0x20;
  if (*(int *)param_2 == 0) {
    return;
  }
  do {
    piVar1 = *(int **)param_2;
    if (piVar1 + 1 == param_1) {
      return;
    }
    *(int **)((int)param_2 + 4) = piVar1;
    iVar2 = *piVar1;
    *(int *)param_2 = iVar2;
  } while (iVar2 != 0);
  return;
}

