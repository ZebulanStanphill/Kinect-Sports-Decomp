extern int fn_828387E0();
extern int fn_82A94AA8();


void fn_8284DB80(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned short *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned short *puVar6;
  
  for (puVar6 = (unsigned short *)**(unsigned int **)(param_1 + 0x120); *(char *)(puVar6 + 1) != '\x1d';
      puVar6 = (unsigned short *)((unsigned int)*puVar6 + (int)puVar6)) {
    if (*(char *)(puVar6 + 1) == 'E') {
      iVar1 = *param_2;
      uVar5 = 0;
      puVar3 = puVar6;
      if (puVar6[4] != 0) {
        do {
          iVar2 = *(int *)(*(int *)(puVar3 + 6) * 4 + iVar1);
          if (iVar2 != 0) {
            iVar4 = fn_82A94AA8(*(unsigned short *)(iVar2 + 0x24),*(unsigned short *)(iVar2 + 0x26),0);
            if ((iVar4 == 0) || (*(char *)(iVar2 + 0x30) == '\x01')) {
              *(int *)(*(int *)(puVar3 + 8) * 4 + iVar1) = iVar2;
            }
            iVar4 = *(int *)(*(int *)(puVar3 + 8) * 4 + iVar1);
            if ((iVar4 != 0) && (*(char *)(iVar4 + 0x30) != *(char *)(iVar2 + 0x30))) {
              fn_828387E0(iVar4,iVar2);
            }
          }
          uVar5 = uVar5 + 1;
          puVar3 = puVar3 + 6;
        } while (uVar5 < puVar6[4]);
      }
    }
  }
  return;
}

