extern int fn_8242D3A8();
extern int fn_8242DE00();
extern int fn_82451278();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;
extern unsigned int uStack_24;


void fn_82449228(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar4 = 0;
  iVar1 = *(int *)(*(int *)(**(int **)(param_1 + 0x40) + 0x174) + 0x9c);
  puVar5 = *(unsigned int **)(iVar1 + 0x310);
  puVar2 = *(unsigned int **)(iVar1 + 0x314);
  if (puVar5 < puVar2) {
    puVar3 = &uStack_24;
    do {
      if (1 < iVar4) break;
      if (puVar5[1] == 0x2a) {
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar5;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 < puVar2);
  }
  if (iStack_20 != 0) {
    *(int *)(*(int *)(param_1 + 0x48) + 0x1c) = iStack_20;
  }
  if (iStack_1c != 0) {
    *(int *)(*(int *)(param_1 + 0x48) + 0x20) = iStack_1c;
  }
  *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x14) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x48) + 0x18) = 0;
  fn_82451278(param_1);
  fn_8242DE00(**(unsigned int **)(param_1 + 0x40),(*(unsigned int **)(param_1 + 0x40))[0x45]);
  fn_8242D3A8(**(unsigned int **)(param_1 + 0x40),0xffffffff821b9120,1);
  fn_8242D3A8(**(unsigned int **)(param_1 + 0x40),0xffffffff821b9170,1);
  *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x44) + 0x14) + 0x90) = 1;
  return;
}

