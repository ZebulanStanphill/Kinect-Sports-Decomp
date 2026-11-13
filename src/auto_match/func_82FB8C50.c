extern int fn_82F68B70();
extern int fn_82F68B7C();
extern int fn_82FB7980();
extern int fn_82FB8288();


void fn_82FB8C50(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  unsigned int *puVar6;
  
  uVar2 = *(unsigned int *)(*(int *)((int)param_2 + 4) + 0x1c);
  if (3 < uVar2) {
    return;
  }
  if ((uVar2 != 0) && (uVar2 != 1)) {
    fn_82F68B70();
    return;
  }
  iVar3 = fn_82F68B7C();
  iVar4 = *(int *)((int)param_2 + 4);
  sVar5 = 0;
  for (puVar6 = *(unsigned int **)(iVar4 + 0x10);
      (puVar6 != *(unsigned int **)(iVar4 + 0x14) && ((unsigned __int64)*puVar6 != (param_2 & 0xffffffff)));
      puVar6 = puVar6 + 1) {
    sVar5 = sVar5 + 1;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 8) + -0xc) + 0x1c);
  if ((iVar4 == 1) || (iVar4 == 3)) {
    iVar4 = fn_82FB7980();
  }
  else {
    iVar4 = *(int *)(*(int *)(iVar3 + 8) + -4);
  }
  if (iVar4 != 0) {
    iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
    if (((*(unsigned short *)(iVar3 + 0x28) & 0x8000) != 0) && (iVar4 == *(int *)(iVar1 + 0x20))) {
      fn_82FB8288(iVar3,iVar1,iVar4);
    }
    *(short *)(iVar4 + 0xe) = sVar5;
  }
  return;
}

