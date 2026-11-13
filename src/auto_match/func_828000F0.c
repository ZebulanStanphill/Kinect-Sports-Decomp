#define true 1
extern unsigned char lbl_83156AF0[];


unsigned int fn_828000F0(char *param_1)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = 0;
  do {
    pcVar5 = lbl_83156AF0 + uVar3 * 0x24;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar5;
      cVar2 = *pcVar4;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return uVar3;
    }
    uVar3 = uVar3 + 1 & 0xffff;
    if (7 < uVar3) {
      return 0;
    }
  } while( true );
}

