extern unsigned int *auStack_24;
extern unsigned int uStack_10;
extern unsigned int uStack_28;


void fn_82496ED8(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uStack_28;
  unsigned int auStack_24 [5];
  unsigned int uStack_10;
  
  iVar1 = *(int *)(param_1 + 0x54);
  *(unsigned int *)(param_1 + 0x58) = 0;
  uVar2 = *(unsigned int *)(iVar1 + 0x100);
  if (*(int *)(iVar1 + 0x188) == 0) {
    uStack_10 = 0;
  }
  else {
    puVar3 = &uStack_28;
    puVar4 = (unsigned int *)(iVar1 + 0x188);
    lVar5 = 5;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uStack_10 = 1;
    *(unsigned int *)(iVar1 + 0x188) = 0;
  }
  *(unsigned int *)(param_1 + 8) = 0xffffffff;
  puVar4 = &uStack_28;
  puVar3 = (unsigned int *)(param_1 + 0xc);
  *(unsigned int *)(param_1 + 0xc) = uVar2;
  lVar5 = 5;
  do {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar4;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(unsigned int *)(param_1 + 0x24) = uStack_10;
  return;
}

