void fn_8281FD48(int param_1,char *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  unsigned int uVar7;
  
  uVar3 = 0;
  *param_3 = 0;
  uVar7 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x1c) + 0x51);
  if (uVar7 != 0) {
    do {
      pcVar5 = (char *)(*(int *)(*(int *)(param_1 + 0x30) + uVar3 * 0x21) + *(int *)(param_1 + 0x34)
                       );
      pcVar4 = param_2;
      if (*pcVar5 != '\0') {
        do {
          cVar1 = *pcVar5;
          cVar2 = *pcVar4;
          if (cVar1 == '\0') break;
          pcVar5 = pcVar5 + 1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          iVar6 = *(int *)(param_1 + 0x30) + uVar3 * 0x21;
          *param_3 = *(int *)(iVar6 + 0x11) + *(int *)(iVar6 + 0xd);
          return;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < uVar7);
  }
  return;
}

