extern unsigned int *auStack_20;
extern int fn_8267BED0();


void fn_82726250(int param_1,int param_2)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int auStack_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    auStack_20[0] = 0x146;
    iVar1 = fn_8267BED0(param_1,0x54,auStack_20);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      puVar2 = (unsigned char *)(param_2 + -4);
      puVar3 = (unsigned int *)(iVar1 + 8);
      lVar4 = 5;
      do {
        puVar3[-2] = *(unsigned int *)(puVar2 + 4);
        puVar3[-1] = *(unsigned int *)(puVar2 + 8);
        *puVar3 = *(unsigned int *)((param_2 - iVar1) + (int)puVar3);
        puVar2 = puVar2 + 0x10;
        *(unsigned char *)(puVar3 + 1) = *puVar2;
        puVar3 = puVar3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *(unsigned char *)(iVar1 + 0x50) = *(unsigned char *)(param_2 + 0x50);
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  else {
    puVar2 = (unsigned char *)(param_2 + -4);
    puVar3 = (unsigned int *)(iVar1 + 4);
    lVar4 = 5;
    do {
      puVar3[-1] = *(unsigned int *)(puVar2 + 4);
      *puVar3 = *(unsigned int *)((param_2 - iVar1) + (int)puVar3);
      puVar3[1] = *(unsigned int *)(puVar2 + 0xc);
      puVar2 = puVar2 + 0x10;
      *(unsigned char *)(puVar3 + 2) = *puVar2;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(unsigned char *)(iVar1 + 0x50) = *(unsigned char *)(param_2 + 0x50);
  }
  return;
}

