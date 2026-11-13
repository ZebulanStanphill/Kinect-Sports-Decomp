unsigned int fn_8281FDF0(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x1c) + 0x51);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      pcVar6 = (char *)(*(int *)(uVar4 * 0x21 + *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x34)
                       );
      pcVar5 = param_2;
      if (*pcVar6 != '\0') {
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          return uVar4 + 1 & 0xff;
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar3);
  }
  return 0;
}

