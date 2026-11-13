extern int fn_82381BC0();
extern int fn_82A4AAA8();


__int64 fn_8289F020(int param_1)

{
  int iVar1;
  __int64 lVar2;
  int aiStack_20 [2];
  
  lVar2 = 0;
  aiStack_20[0] = **(int **)(param_1 + 0x220);
  if ((int *)aiStack_20[0] != *(int **)(param_1 + 0x220)) {
    do {
      if (*(char *)((int)*(int **)(aiStack_20[0] + 0x10) + 0x26) == '\x01') {
LAB_8289f07c:
        lVar2 = lVar2 + 1;
      }
      else {
        (**(int (***)())(**(int **)(aiStack_20[0] + 0x10) + 0xc))();
        iVar1 = fn_82A4AAA8();
        if (iVar1 != 2) goto LAB_8289f07c;
      }
      fn_82381BC0(aiStack_20);
    } while (aiStack_20[0] != *(int *)(param_1 + 0x220));
  }
  return lVar2;
}

