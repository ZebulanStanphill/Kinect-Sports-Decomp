extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F68CC0();


unsigned __int64 fn_82E47088(int param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  
  uVar4 = 0;
  if (param_2 == 0) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    puVar5 = (unsigned int *)(param_1 + 0x68);
    uVar3 = 3;
    if (*(unsigned int **)(param_1 + 0x74) != puVar5) {
      uVar3 = *puVar5;
    }
    if (uVar3 <= *(unsigned int *)(param_1 + 100)) {
      uVar3 = *(unsigned int *)(param_1 + 100) + 3;
      lVar2 = ((unsigned __int64)uVar3 & 0x3fffffff) << 2;
      if (0x3fffffff < uVar3) {
        lVar2 = -1;
      }
      lVar2 = fn_82E50BE8(lVar2,0,0,0,0);
      if (lVar2 == 0) {
        return 0xffffffff8007000e;
      }
      fn_82F68CC0(lVar2,*(unsigned int *)(param_1 + 0x74),*(int *)(param_1 + 100) << 2);
      if (*(unsigned int **)(param_1 + 0x74) != puVar5) {
        if (*(unsigned int **)(param_1 + 0x74) != (unsigned int *)0x0) {
          fn_82E4FE40();
        }
        *(unsigned int *)(param_1 + 0x74) = 0;
      }
      *(int *)(param_1 + 0x74) = (int)lVar2;
      *puVar5 = uVar3;
    }
    *(int *)(*(int *)(param_1 + 100) * 4 + *(int *)(param_1 + 0x74)) = param_2;
    iVar1 = *(int *)(param_1 + 100) * 4;
    (**(int (***)())(**(int **)(iVar1 + *(int *)(param_1 + 0x74)) + 4))
              (*(unsigned int *)(iVar1 + *(int *)(param_1 + 0x74)));
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  }
  return uVar4;
}

