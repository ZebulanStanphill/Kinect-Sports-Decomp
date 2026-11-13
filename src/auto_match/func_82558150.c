extern int fn_82586A48();


void fn_82558150(unsigned short *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  *param_1 = 0x98;
  iVar2 = fn_82586A48(0);
  pcVar3 = (char *)(param_1 + 1);
  iVar2 = iVar2 - (int)pcVar3;
  do {
    if (param_1 + 0x21 <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == (char *)(param_1 + 0x21)) {
    pcVar3[-1] = '\0';
  }
  pcVar3 = (char *)(param_1 + 0x21);
  iVar2 = (int)"objDefId_null" - (int)pcVar3;
  do {
    if (param_1 + 0x41 <= pcVar3) break;
    cVar1 = pcVar3[iVar2];
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 == (char *)(param_1 + 0x41)) {
    pcVar3[-1] = '\0';
  }
  *(unsigned int *)(param_1 + 0x42) = 0;
  *(unsigned int *)(param_1 + 0x4a) = 0;
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x46) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  return;
}

