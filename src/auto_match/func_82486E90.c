void fn_82486E90(int param_1,unsigned int param_2)

{
  int *piVar1;
  __int64 lVar2;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + 0x838);
  lVar2 = 4;
  do {
    if (((*piVar1 == 0) || (*piVar1 == 1)) && (piVar1[1] == param_2)) {
      *piVar1 = 4;
    }
    piVar1 = piVar1 + 0x108;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

