#define true 1
extern int fn_82F672D8();
extern unsigned char lbl_83156AF0[];


unsigned int fn_828004B0(unsigned __int64 param_1,unsigned int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  unsigned int uVar5;
  
  uVar5 = 0;
  do {
    pcVar4 = lbl_83156AF0 + uVar5 * 0x24;
    pcVar3 = "";
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      fn_82F672D8(lbl_83156AF0 + uVar5 * 0x24,param_1,0x15);
      *(unsigned int *)(uVar5 * 0x24 + -0x7cea94f8) = param_2;
      return uVar5;
    }
    uVar5 = uVar5 + 1 & 0xffff;
    if (7 < uVar5) {
      return 0;
    }
  } while( true );
}

