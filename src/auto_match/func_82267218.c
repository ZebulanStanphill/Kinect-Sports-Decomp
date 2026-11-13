extern int fn_82267628();
extern int fn_82A1DD38();


void fn_82267218(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  __int64 lVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  
  iVar6 = *(int *)(param_1 + 0x5d8);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    iVar7 = iVar6 * 0x48;
    lVar5 = 0;
    puVar8 = (unsigned int *)(param_1 + 0xd4);
    do {
      if (iVar6 < *(int *)(param_1 + 0x474)) {
        puVar8[-1] = *(unsigned int *)(*(int *)(param_1 + 0x470) + iVar7 + 0x40);
        *puVar8 = *(unsigned int *)(*(int *)(param_1 + 0x470) + iVar7 + 0x44);
        if ((unsigned __int64)*(unsigned int *)(param_1 + 0x5dc) != 0) {
          fn_82A1DD38(puVar8 + -0xc,lVar5 + (unsigned __int64)*(unsigned int *)(param_1 + 0x5dc),0x24);
        }
        pcVar3 = (char *)(puVar8 + -0x35);
        pcVar2 = (char *)(*(int *)(param_1 + 0x470) + iVar7 + -1);
        do {
          if (puVar8 + -0x25 <= pcVar3) break;
          pcVar2 = pcVar2 + 1;
          cVar1 = *pcVar2;
          *pcVar3 = cVar1;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        if (pcVar3 == (char *)(puVar8 + -0x25)) {
          pcVar3[-1] = '\0';
        }
        fn_82267628(*(unsigned int *)(param_1 + 0x5c0));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x24;
      puVar8 = puVar8 + 0x38;
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x48;
    } while (iVar4 < *(int *)(param_1 + 0x478));
  }
  return;
}

