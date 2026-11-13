extern int fn_82527DF8();
extern int fn_82528210();


void fn_82527438(int param_1)

{
  short sVar1;
  unsigned char *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = *(unsigned char **)(param_1 + 0x1b8);
  if (puVar2 != (unsigned char *)0x0) {
    if ((*(int *)(puVar2 + 0xc) != 0) && (puVar2 != (unsigned char *)0x0)) {
      *puVar2 = puVar2[1];
      fn_82528210(param_1,*(unsigned int *)(puVar2 + 0xc));
      *(unsigned int *)(puVar2 + 0xc) = 0;
    }
    sVar1 = *(short *)(puVar2 + 0x90);
    if ((sVar1 != 0) && (sVar1 != 0)) {
      for (piVar4 = *(int **)(*(int *)(param_1 + 0x4c) + 0x310);
          piVar4 < *(int **)(*(int *)(param_1 + 0x4c) + 0x314); piVar4 = piVar4 + 2) {
        iVar3 = *piVar4;
        if (*(short *)(iVar3 + 0x8b8) == sVar1) goto LAB_825274cc;
      }
      iVar3 = 0;
LAB_825274cc:
      if (iVar3 != 0) {
        fn_82527DF8(param_1,iVar3,*(unsigned short *)(puVar2 + 0x92));
      }
    }
  }
  return;
}

