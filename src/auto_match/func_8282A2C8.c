extern int fn_828223C8();
extern int fn_82826498();


void fn_8282A2C8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  int aiStack_30;
  
  iVar1 = param_1 + 0x2fc;
  while (fn_828223C8(iVar1,&aiStack_30), aiStack_30 != 0) {
    iVar1 = aiStack_30;
    if ((*(int *)(aiStack_30 + 0xc) != *(int *)(param_1 + 0x3d8)) &&
       (*(char *)(aiStack_30 + 0x54) != '\0')) {
      puVar2 = (unsigned int *)(aiStack_30 + 0x48);
      iVar3 = ((*(int **)(aiStack_30 + 0x48))[1] - **(int **)(aiStack_30 + 0x48)) / 0x14;
      lVar4 = (__int64)iVar3;
      if (iVar3 != 0) {
        iVar3 = 0;
        do {
          iVar1 = *(int *)*puVar2 + iVar3;
          fn_82826498(param_1,((unsigned __int64)*(unsigned int *)(iVar1 + 4) & 0x7ffffff) * 0x20 +
                                (unsigned __int64)**(unsigned int **)(param_1 + 0x388),*(unsigned int *)(iVar1 + 8),
                        0xffffffff8282a170);
          lVar4 = lVar4 + -1;
          iVar3 = iVar3 + 0x14;
          iVar1 = aiStack_30;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}

