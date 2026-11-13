extern unsigned int lbl_821CA460;


void fn_822A9580(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = param_1 + 0x20;
  pcVar3 = param_1;
  do {
    if (pcVar4 <= pcVar3) break;
    cVar1 = pcVar3[param_2 - (int)param_1];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == pcVar4) {
    pcVar3[-1] = '\0';
  }
  iVar2 = (param_2 + 0x20) - (int)pcVar4;
  do {
    if (param_1 + 0x40 <= pcVar4) break;
    cVar1 = pcVar4[iVar2];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_1 + 0x40) {
    pcVar4[-1] = '\0';
  }
  pcVar3 = param_1 + 0x54;
  iVar2 = (param_2 + 0x50) - (int)pcVar3;
  *(unsigned int *)(param_1 + 0x40) = lbl_821CA460;
  *(unsigned int *)(param_1 + 0x44) = *(unsigned int *)(param_2 + 0x40);
  *(unsigned int *)(param_1 + 0x48) = *(unsigned int *)(param_2 + 0x44);
  *(unsigned int *)(param_1 + 0x4c) = *(unsigned int *)(param_2 + 0x48);
  *(unsigned int *)(param_1 + 0x50) = *(unsigned int *)(param_2 + 0x4c);
  do {
    if (param_1 + 0x74 <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == param_1 + 0x74) {
    pcVar3[-1] = '\0';
  }
  pcVar3 = param_1 + 0x74;
  iVar2 = (param_2 + 0x70) - (int)pcVar3;
  do {
    if (param_1 + 0x94 <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == param_1 + 0x94) {
    pcVar3[-1] = '\0';
  }
  *(unsigned int *)(param_1 + 0x94) = *(unsigned int *)(param_2 + 0x90);
  *(unsigned int *)(param_1 + 0x98) = *(unsigned int *)(param_2 + 0x94);
  *(unsigned int *)(param_1 + 0x9c) = *(unsigned int *)(param_2 + 0x98);
  return;
}

