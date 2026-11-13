extern int fn_82FB7980();
extern int fn_82FB8288();


void fn_82FB8358(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  
  sVar3 = 0;
  for (piVar4 = *(int **)(*(int *)(param_2 + 4) + 0x10);
      (piVar4 != *(int **)(*(int *)(param_2 + 4) + 0x14) && (*piVar4 != param_2));
      piVar4 = piVar4 + 1) {
    sVar3 = sVar3 + 1;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 8) + -0xc) + 0x1c);
  if ((iVar2 == 1) || (iVar2 == 3)) {
    iVar2 = fn_82FB7980();
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 8) + -4);
  }
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + -0xc);
    if (((*(unsigned short *)(param_1 + 0x28) & 0x8000) != 0) && (iVar2 == *(int *)(iVar1 + 0x20))) {
      fn_82FB8288(param_1,iVar1,iVar2);
    }
    *(short *)(iVar2 + 0xe) = sVar3;
  }
  return;
}

