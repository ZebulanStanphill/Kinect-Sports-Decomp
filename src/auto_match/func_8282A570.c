extern int fn_828223C8();
extern int fn_82826498();


void fn_8282A570(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char *pcVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  int aiStack_40;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    *(unsigned char *)(param_1 + 0x3ec) = 1;
    iVar2 = param_1 + 0x2fc;
LAB_8282a61c:
    fn_828223C8(iVar2,&aiStack_40);
    if (aiStack_40 != 0) {
      puVar4 = (unsigned int *)(aiStack_40 + 0x48);
      uVar5 = 0;
      uVar1 = ((*(int **)(aiStack_40 + 0x48))[1] - **(int **)(aiStack_40 + 0x48)) / 0x14;
      iVar2 = aiStack_40;
      if (uVar1 != 0) {
        pcVar3 = (char *)(aiStack_40 + 0x54);
        iVar6 = 0;
        do {
          iVar2 = aiStack_40;
          if (*pcVar3 == '\0') break;
          iVar2 = *(int *)*puVar4 + iVar6;
          fn_82826498(param_1,(unsigned __int64)**(unsigned int **)(param_1 + 0x388) +
                                ((unsigned __int64)*(unsigned int *)(iVar2 + 4) & 0x7ffffff) * 0x20,
                        *(unsigned int *)(iVar2 + 8),0xffffffff8282a428);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x14;
          iVar2 = aiStack_40;
        } while (uVar5 < uVar1);
      }
      goto LAB_8282a61c;
    }
  }
  return;
}

