extern int fn_82CF7138();


void fn_82CF74E8(int param_1)

{
  int *piVar1;
  int lVar2;
  
  lVar2 = 0x10;
  piVar1 = (int *)(param_1 + 0x90);
  do {
    if (*piVar1 != 0) {
      fn_82CF7138(param_1,lVar2);
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + -2;
  } while (lVar2 >= 0);
  return;
}

