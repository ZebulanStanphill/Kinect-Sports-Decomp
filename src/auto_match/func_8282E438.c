extern int fn_82820EF8();
extern int fn_82827750();


void fn_8282E438(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  unsigned int *puVar8;
  int iVar9;
  char *pcVar10;
  
  pcVar10 = (char *)0x0;
  puVar8 = (unsigned int *)(*(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8));
  puVar1 = (unsigned int *)**(int **)(param_1 + 0x2ec);
  puVar2 = (unsigned int *)*puVar1;
  *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
  if (*(char *)(param_1 + 0x3f2) == '\0') {
    iVar3 = *(int *)(param_1 + 0x24) * 4;
    iVar9 = *(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8);
    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + iVar3;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
    pcVar10 = (char *)0x0;
    for (; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
      *(char **)(puVar2[0x42] * 4 + iVar9 + -4) = pcVar10;
      cVar4 = fn_82827750(param_1);
      if (cVar4 != '\0') {
        fn_82820EF8(puVar2[0x42] * 4 + iVar9 + -4,4);
      }
      pcVar7 = (char *)(puVar2 + 2);
      do {
        cVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar4 != '\0');
      pcVar10 = pcVar7 + ((int)pcVar10 - (int)(puVar2 + 2));
    }
  }
  *puVar8 = pcVar10;
  cVar4 = fn_82827750(param_1);
  if (cVar4 != '\0') {
    fn_82820EF8(puVar8,4);
  }
  if (*(char *)(param_1 + 0x3f2) == '\0') {
    pcVar7 = (char *)(*(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8));
    puVar2 = *(unsigned int **)**(unsigned int **)(param_1 + 0x2ec);
    *(char **)(param_1 + 0x2d8) = pcVar10 + *(int *)(param_1 + 0x2d8);
    *(char **)(param_1 + 0x58) = pcVar10 + *(int *)(param_1 + 0x58);
    for (; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
      pcVar6 = (char *)(puVar2 + 2);
      pcVar10 = pcVar6;
      do {
        cVar4 = *pcVar10;
        pcVar10[(int)pcVar7 - (int)pcVar6] = cVar4;
        pcVar10 = pcVar10 + 1;
        pcVar5 = pcVar6;
      } while (cVar4 != '\0');
      do {
        cVar4 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar4 != '\0');
      pcVar7 = pcVar5 + ((int)pcVar7 - (int)pcVar6);
    }
  }
  return;
}

