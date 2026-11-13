unsigned __int64 fn_83089260(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3,int param_4)

{
  unsigned char bVar1;
  unsigned char *pbVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  
  pbVar2 = param_3 + -4;
  puVar3 = (unsigned int *)(param_4 + 8);
  lVar4 = 8;
  do {
    puVar3[-2] = *(unsigned int *)(pbVar2 + 4);
    puVar3[-1] = *(unsigned int *)(pbVar2 + 8);
    *puVar3 = *(unsigned int *)(((int)param_3 - param_4) + (int)puVar3);
    pbVar2 = pbVar2 + 0x10;
    puVar3[1] = *(unsigned int *)pbVar2;
    puVar3 = puVar3 + 4;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  bVar1 = *param_3;
  if (bVar1 < 5) {
    if (bVar1 == 0) {
      if (*(int *)(param_3 + 0x34) < *(int *)(param_3 + 0x3c)) {
        *(int *)(param_4 + 0x3c) = *(int *)(param_3 + 0x34);
        *(int *)(param_3 + 0x3c) = *(int *)(param_3 + 0x3c) - *(int *)(param_3 + 0x34);
        *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x34) * 0x30 + *(int *)(param_3 + 0x38);
        return 1;
      }
    }
    else if (bVar1 == 1) {
      if (*(int *)(param_3 + 0x24) < *(int *)(param_3 + 0x2c)) {
        *(int *)(param_4 + 0x2c) = *(int *)(param_3 + 0x24);
        *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) - *(int *)(param_3 + 0x24);
        *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x24) * 0x20 + *(int *)(param_3 + 0x28);
        return 1;
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 == 3) {
        if (*(int *)(param_3 + 0x30) < *(int *)(param_3 + 0x38)) {
          *(int *)(param_4 + 0x38) = *(int *)(param_3 + 0x30);
          *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) - *(int *)(param_3 + 0x30);
          *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x30) * 0x50 + *(int *)(param_3 + 0x34);
          return 1;
        }
      }
      else if (*(int *)(param_3 + 0x20) < *(int *)(param_3 + 0x28)) {
        *(int *)(param_4 + 0x28) = *(int *)(param_3 + 0x20);
        *(int *)(param_3 + 0x28) = *(int *)(param_3 + 0x28) - *(int *)(param_3 + 0x20);
        *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x20) * 0x30 + *(int *)(param_3 + 0x24);
        return 1;
      }
    }
  }
  return 0;
}

