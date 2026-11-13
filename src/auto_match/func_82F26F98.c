void fn_82F26F98(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6,
                  unsigned int param_7,int param_8)

{
  int (**pcVar1)();
  unsigned char *puVar2;
  unsigned char *puVar3;
  int iVar4;
  __int64 lVar5;
  
  param_2 = ((int)param_7 >> 2) * param_3 + ((int)param_6 >> 2) + param_2;
  if (((param_6 & 3) == 0) && ((param_7 & 3) == 0)) {
    puVar3 = (unsigned char *)(param_2 + -1);
    puVar2 = (unsigned char *)(param_4 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    param_2 = param_2 + param_3;
    puVar2 = (unsigned char *)(param_4 + param_5 + -1);
    puVar3 = (unsigned char *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = param_4 + param_5 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (unsigned char *)(iVar4 + -1);
    puVar3 = (unsigned char *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (unsigned char *)(iVar4 + -1);
    puVar3 = (unsigned char *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (unsigned char *)(iVar4 + -1);
    puVar3 = (unsigned char *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (unsigned char *)(iVar4 + -1);
    puVar3 = (unsigned char *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar4 = iVar4 + param_5;
    param_2 = param_2 + param_3;
    puVar2 = (unsigned char *)(iVar4 + -1);
    puVar3 = (unsigned char *)(param_2 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    puVar3 = (unsigned char *)(param_2 + param_3 + -1);
    puVar2 = (unsigned char *)(iVar4 + param_5 + -1);
    lVar5 = 8;
    do {
      puVar3 = puVar3 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return;
  }
  if (param_8 == 1) {
    pcVar1 = *(int (***)())(param_1 + 0xa5c);
  }
  else {
    pcVar1 = *(int (***)())(param_1 + 0xa60);
  }
  (*pcVar1)();
  return;
}

