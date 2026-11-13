extern int fn_82CF6C78();
extern unsigned int lbl_821327E4;


void fn_82CF7478(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  puVar3 = param_1 + 2;
  *param_1 = &lbl_821327E4;
  uVar2 = 0;
  lVar4 = 0x11;
  do {
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  iVar1 = fn_82CF6C78();
  if (param_2 != 0) {
    *(int *)(iVar1 + 4) = param_2;
    *(unsigned int *)(iVar1 + 8) = 8;
    return;
  }
  *(unsigned int *)(iVar1 + 4) = uVar2;
  return;
}

