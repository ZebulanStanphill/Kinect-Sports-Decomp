extern int fn_82880608();
extern int fn_82880618();
extern int fn_828EA790();
extern unsigned int lbl_83213E4C;
extern unsigned int lbl_83213E50;


void fn_82888448(void)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int aiStack_20 [2];
  
  puVar4 = (unsigned int *)0x83212a4c;
  lVar5 = 0x33;
  do {
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  iVar1 = fn_82880608();
  aiStack_20[0] = **(int **)(iVar1 + 4);
  if ((int *)aiStack_20[0] != *(int **)(iVar1 + 4)) {
    do {
      iVar2 = fn_82880618(*(unsigned int *)(aiStack_20[0] + 0x10));
      puVar4 = (unsigned int *)(iVar2 + -4);
      lVar5 = 0x33;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      fn_828EA790(aiStack_20);
    } while (aiStack_20[0] != *(int *)(iVar1 + 4));
  }
  uVar3 = (unsigned __int64)lbl_83213E4C;
  iVar1 = lbl_83213E50;
  if (0 < (int)lbl_83213E4C) {
    do {
      puVar4 = (unsigned int *)(iVar1 + -4);
      lVar5 = 0x33;
      do {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      uVar3 = uVar3 - 1;
      iVar1 = iVar1 + 0x13ec;
    } while (uVar3 != 0);
  }
  return;
}

