extern int fn_82A9A6F8();
extern int fn_82F68CC0();


int fn_82A9ECB8(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar5 = -1;
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar2 = *(int *)(param_1 + 0x30);
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = ((int)pcVar3 - (int)param_2) + iVar2;
    if (*(unsigned int *)(param_1 + 0x34) < uVar4) {
      fn_82A9A6F8((int *)(param_1 + 0x2c),uVar4,(int *)(param_1 + 0x90));
    }
    *(unsigned int *)(param_1 + 0x30) = uVar4;
    if (-1 < *(int *)(param_1 + 0x90)) {
      fn_82F68CC0(*(int *)(param_1 + 0x2c) + iVar2,param_2,(int)pcVar3 - (int)param_2);
      iVar5 = iVar2;
    }
  }
  return iVar5;
}

