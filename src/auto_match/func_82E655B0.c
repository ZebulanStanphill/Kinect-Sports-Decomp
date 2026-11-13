unsigned __int64 fn_82E655B0(int param_1,int *param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (param_2 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
    *param_2 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      (*(int (**)())(*piVar1 + 4))(piVar1);
    }
  }
  return uVar2;
}

