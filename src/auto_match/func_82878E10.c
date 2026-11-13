extern int fn_82F63CA0();


unsigned __int64 fn_82878E10(int param_1,int param_2)

{
  int *piVar2;
  unsigned __int64 uVar1;
  
  for (piVar2 = *(int **)(param_1 + 0x7c);
      (piVar2 != *(int **)(param_1 + 0x80) && (*piVar2 != param_2)); piVar2 = piVar2 + 1) {
  }
  if (piVar2 == *(int **)(param_1 + 0x80)) {
    uVar1 = 0xffffffffa0200000;
  }
  else {
    fn_82F63CA0(piVar2,piVar2 + 1,(*(int *)(param_1 + 0x80) - (int)(piVar2 + 1) >> 2) << 2);
    uVar1 = 0x20200000;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -4;
  }
  return uVar1;
}

