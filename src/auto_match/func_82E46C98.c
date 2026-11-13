unsigned __int64 fn_82E46C98(int param_1,int *param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  int aiStack_40;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = 0;
    aiStack_40 = 0;
    iVar3 = 0;
    uVar4 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x74) + iVar5);
        uVar2 = (**(int (***)())(*piVar1 + 0x14))(piVar1,&aiStack_40);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 4;
        iVar3 = aiStack_40 + iVar3;
      } while (uVar4 < *(unsigned int *)(param_1 + 100));
    }
    *param_2 = iVar3;
  }
  return uVar2;
}

