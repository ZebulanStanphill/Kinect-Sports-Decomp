extern int fn_8281D460();
extern unsigned int lbl_821AAD20;


void fn_82862648(int param_1,char param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  __int64 lVar4;
  
  puVar2 = (unsigned int *)(*(int *)(param_1 + 0x10) + *(int *)(param_3 + 8));
  puVar1 = puVar2 + 3;
  if (param_2 == '\0') {
    puVar1 = (unsigned int *)0x0;
  }
  *puVar2 = lbl_821AAD20;
  if (param_2 != '\0') {
    puVar2[1] = puVar1;
  }
  iVar3 = 0;
  if ((unsigned __int64)*(unsigned short *)(param_1 + 10) != 0xfffffffffffffffe) {
    lVar4 = 0;
    do {
      fn_8281D460((unsigned __int64)(unsigned int)puVar2[1] + lVar4);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < (int)(*(unsigned short *)(param_1 + 10) + 2));
  }
  iVar3 = 0;
  *(unsigned short *)(puVar2 + 2) = 0;
  if (*(unsigned short *)(param_1 + 8) != 0) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 8));
  }
  return;
}

