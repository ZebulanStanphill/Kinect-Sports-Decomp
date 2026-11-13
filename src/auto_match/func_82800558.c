#define true 1
extern unsigned int lbl_8201DECC;
extern unsigned char lbl_83156AF0[];
extern unsigned int uRam83156b08;


unsigned __int64 fn_82800558(char *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = param_1;
  pcVar4 = lbl_83156AF0;
code_r0x82800568:
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 != '\0') {
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
      if (cVar1 == cVar2) goto code_r0x82800568;
    }
    pcVar3 = param_1;
    pcVar4 = lbl_83156AF0;
    if (cVar1 == cVar2) {
      uRam83156b08 = 0;
      lbl_83156AF0[0] = lbl_8201DECC;
      return 0;
    }
  } while( true );
}

