extern int fn_822BDF10();


void fn_82366540(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0xa0) == 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar3 = (**(int (***)())(**(int **)(iVar1 + 0x3ec) + 0xc))();
    fn_822BDF10(param_2,*(unsigned int *)(iVar2 + 0x210),iVar2 + 0x214,iVar2 + 0x6b0,
                      iVar2 + 0x820,uVar3,iVar2 + 0x798,iVar2 + 0x858);
  }
  else {
    dVar5 = (double)*(float *)(**(int **)(param_1 + 8) + 0x160);
    dVar4 = (double)*(float *)(**(int **)(param_1 + 8) + 0x15c);
    uVar3 = (**(int (***)())(**(int **)(iVar1 + 0x3ec) + 0xc))();
    iVar2 = *(int *)(param_1 + 4);
    fn_822BDF10(param_2,*(unsigned int *)(iVar2 + 0x210),iVar2 + 0x214,iVar2 + 0x6b0,
                      iVar2 + 0x820,uVar3,iVar1 + 0x798,iVar1 + 0x858);
    *(float *)(param_2 + 0x4e0) = (float)dVar4;
    *(float *)(param_2 + 0x4e8) = (float)dVar4;
    *(float *)(param_2 + 0x4e4) = (float)dVar5;
  }
  return;
}

