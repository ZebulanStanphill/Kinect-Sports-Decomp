unsigned __int64 fn_829335D0(int param_1,int param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == *(int *)(param_1 + 4))) {
    pbVar4 = (unsigned char *)(param_2 + 0x10);
    pbVar5 = (unsigned char *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
      do {
        bVar1 = *pbVar5;
        bVar2 = *pbVar4;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar5 = pbVar5 + 1;
        pbVar4 = pbVar4 + 1;
      } while (pbVar5 != (unsigned char *)(param_1 + 0x20));
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x10) == 4) {
        if (*(unsigned int **)(param_1 + 0x18) == (unsigned int *)0x0) {
          uVar3 = (unsigned int)LZCOUNT(*(unsigned int *)(param_2 + 0x18)) >> 5;
        }
        else {
          uVar3 = (**(int (***)())**(unsigned int **)(param_1 + 0x18))();
        }
        if (uVar3 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

