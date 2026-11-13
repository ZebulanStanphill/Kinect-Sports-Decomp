#define true 1
extern unsigned int lbl_83156E80;


unsigned __int64 fn_828242A8(char *param_1)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned char **ppuVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = 0;
  ppuVar4 = &lbl_83156E80;
  do {
    pcVar5 = *ppuVar4;
    pcVar6 = param_1;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return 1;
    }
    uVar3 = uVar3 + 4;
    ppuVar4 = ppuVar4 + 1;
    if (0x3b < uVar3) {
      return 0;
    }
  } while( true );
}

