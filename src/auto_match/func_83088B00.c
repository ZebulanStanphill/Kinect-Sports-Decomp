unsigned __int64 fn_83088B00(unsigned __int64 param_1,unsigned __int64 param_2,char *param_3,int param_4)

{
  char *pcVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  
  pcVar1 = param_3 + -4;
  puVar2 = (unsigned int *)(param_4 + 8);
  lVar3 = 8;
  do {
    puVar2[-2] = *(unsigned int *)(pcVar1 + 4);
    puVar2[-1] = *(unsigned int *)(pcVar1 + 8);
    *puVar2 = *(unsigned int *)(((int)param_3 - param_4) + (int)puVar2);
    pcVar1 = pcVar1 + 0x10;
    puVar2[1] = *(unsigned int *)pcVar1;
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*param_3 == '\0') {
    if (*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x28)) {
      *(int *)(param_4 + 0x28) = *(int *)(param_3 + 0x20);
      *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
      *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x20) * 0x50 + *(int *)(param_3 + 0x24);
      return 1;
    }
  }
  else if ((*param_3 == '\x01') && (*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x28))) {
    *(int *)(param_4 + 0x28) = *(int *)(param_3 + 0x20);
    param_3[0x30] = '\0';
    param_3[0x31] = '\0';
    param_3[0x32] = '\0';
    param_3[0x33] = '\0';
    *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x20) * 0x40 + *(int *)(param_3 + 0x24);
    return 1;
  }
  return 0;
}

