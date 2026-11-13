extern int fn_82F63C78();
extern int free();
extern int fn_82F64818();
extern int fn_82F664B0();
extern int malloc();
extern int fn_82F71CD0();
extern int fn_82F78020();
extern unsigned int iStack00000014;


unsigned int fn_82F646C8(int param_1,int param_2)

{
  char cVar1;
  char *pcVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar2;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iStack00000014;
  
  if (*(int *)(param_1 + 4) == 0) {
    iStack00000014 = param_1;
    pcVar3 = (char *)fn_82F78020(0,param_1 + 9,0,0xffffffff82f68bf0,0xffffffff82f641f8,0x2800);
    pcVar6 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      return 0;
    }
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + (-1 - (int)pcVar3);
    while ((pcVar6 != (char *)0x0 && (pcVar7 = pcVar6 + -1, pcVar3[(int)pcVar7] == ' '))) {
      pcVar3[(int)pcVar7] = '\0';
      pcVar6 = pcVar7;
    }
    fn_82F71CD0(0xe);
    if ((*(int *)(param_1 + 4) == 0) &&
       (puVar4 = (unsigned int *)malloc(8), puVar4 != (unsigned int *)0x0)) {
      uVar2 = malloc(pcVar6 + 1);
      *(int *)(param_1 + 4) = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        free(puVar4);
      }
      else {
        iVar5 = fn_82F664B0(uVar2,pcVar6 + 1,pcVar3);
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82F63C78(0,0,0,0,0);
        }
        *puVar4 = *(unsigned int *)(param_1 + 4);
        puVar4[1] = *(unsigned int *)(param_2 + 4);
        *(unsigned int **)(param_2 + 4) = puVar4;
      }
    }
    free(pcVar3);
    fn_82F64818();
  }
  return *(unsigned int *)(param_1 + 4);
}

