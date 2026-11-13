extern unsigned int *auStack_30;


unsigned __int64 fn_82CF6F58(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_30 [4];
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar5 = (unsigned __int64)uVar1;
  if (uVar1 == 0) {
    uVar5 = (**(int (***)())(**(int **)(param_1 + 4) + 4))
                      (*(int **)(param_1 + 4),
                       *(unsigned int *)((int)((param_2 + 0x25 & 0xffffffff) << 2) + param_1));
  }
  else {
    if (3 < (int)uVar1) {
      uVar5 = 4;
    }
    (**(int (***)())(**(int **)(param_1 + 4) + 0x18))
              (*(int **)(param_1 + 4),auStack_30,uVar5,
               *(unsigned int *)((int)((param_2 + 0x25 & 0xffffffff) << 2) + param_1));
    param_1 = (int)((param_2 & 0xffffffff) << 3) + param_1;
    if (1 < (int)uVar5) {
      lVar4 = uVar5 - 1;
      puVar3 = auStack_30;
      do {
        puVar3 = puVar3 + 1;
        puVar2 = (unsigned int *)*puVar3;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        *puVar2 = *(unsigned int *)(param_1 + 0xc);
        *(unsigned int *)(param_1 + 0xc) = puVar2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar5 = (unsigned __int64)auStack_30[0];
  }
  return uVar5;
}

