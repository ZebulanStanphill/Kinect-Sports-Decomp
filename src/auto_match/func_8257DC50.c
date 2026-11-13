extern int fn_8251E400();
extern int fn_8251FA58();
extern int fn_82522ED8();


void fn_8257DC50(int param_1)

{
  int iVar1;
  unsigned iVar2;
  unsigned int *puVar3;
  int lVar4;
  int *piVar5;
  unsigned int *puVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar4 = 0x24;
  piVar5 = (int *)(iVar1 + 4);
  do {
    while (iVar2 = *piVar5, iVar2 != 0) {
      puVar6 = (unsigned int *)(iVar2 + -0x10);
      if (iVar2 != 0) { puVar6 = (unsigned int *)(iVar2-16); } else { puVar6=0; }
      if (puVar6 != (unsigned int *)0x0) {
        (*(int (**)())*puVar6)(puVar6,1);
      }
    }
    lVar4 = lVar4 + -1;
    piVar5 = piVar5 + 2;
  } while (lVar4 != 0);
  while (iVar2 = *(int *)(iVar1 + 300), iVar2 != 0) {
    if(iVar2 != 0) puVar6=(unsigned int *)(iVar2-0x10); else puVar6=0;
    if (puVar6 != (unsigned int *)0x0) {
      (*(int (**)())*puVar6)(puVar6,1);
    }
  }
  while (iVar2 = *(int *)(iVar1 + 0x124), iVar2 != 0) {
    if(iVar2 != 0) puVar6=(unsigned int *)(iVar2-0x10); else puVar6=0;
    if (puVar6 != (unsigned int *)0x0) {
      (*(int (**)())*puVar6)(puVar6,1);
    }
  }
  fn_82522ED8(iVar1);
  puVar6 = *(unsigned int **)(param_1 + 8);
  puVar3 = *(unsigned int **)(param_1 + 0xc);
  for (; puVar6 < puVar3; puVar6 = puVar6 + 2) {
    fn_8251FA58(*puVar6);
  }
  fn_8251E400(param_1 + 8);
  if (*(unsigned *)(param_1 + 0x2c) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x2c));
  }
  if (*(unsigned *)(param_1 + 0x30) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x30));
  }
  if (*(unsigned *)(param_1 + 0x34) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x34));
  }
  if (*(unsigned *)(param_1 + 0x38) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x38));
  }
  if (*(unsigned *)(param_1 + 0x3c) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x3c));
  }
  piVar5 = (int *)(param_1 + 0x40);
  lVar4 = 10;
  do {
    if ((int *)*piVar5 != (int *)0x0) {
      (*(int (**)())(*(int *)*piVar5 + 8))((void *)*piVar5);
      puVar6 = (unsigned int *)*piVar5;
      if (puVar6 != (unsigned int *)0x0) {
        (*(int (**)())*puVar6)(puVar6,1);
      }
      *piVar5 = 0;
    }
    lVar4 = lVar4 + -1;
    piVar5++;
  } while (lVar4 != 0);
  if (*(unsigned *)(param_1 + 0x80) != 0) {
    fn_8251FA58(*(unsigned *)(param_1 + 0x80));
    *(unsigned int *)(param_1 + 0x80) = 0;
  }
  fn_82522ED8(param_1);
  return;
}

