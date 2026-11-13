extern unsigned int lbl_8200D940;


void fn_826EF9A8(unsigned int *param_1,unsigned int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  param_1[1] = param_2;
  pcVar2 = (char *)0x0;
  *(unsigned char *)(param_1 + 2) = 0;
  *param_1 = &lbl_8200D940;
  param_1[3] = param_3;
  pcVar3 = param_3;
  if (param_3 != (char *)0x0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar2 = pcVar3 + (-1 - (int)param_3);
  }
  param_1[4] = pcVar2;
  return;
}

