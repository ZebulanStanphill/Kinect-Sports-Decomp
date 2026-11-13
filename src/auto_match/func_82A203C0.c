typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A20370();
extern int tolower();
extern unsigned int iStack0000002c;
extern unsigned int stack0x00000024;
extern unsigned int stack0x0000002c;


bool fn_82A203C0(char *param_1,char *param_2,unsigned char *param_3,int param_4)

{
  char cVar1;
  unsigned char uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  unsigned char *puStack00000024;
  int iStack0000002c;
  
  pcVar5 = param_1;
  if (param_2 == (char *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_2 = pcVar5 + (-1 - (int)param_1);
  }
  pcVar5 = param_1;
  puStack00000024 = param_3;
  iStack0000002c = param_4;
  do {
    while( true ) {
      if (param_1 + (int)param_2 <= pcVar5) {
        return param_4 == 0;
      }
      cVar1 = *pcVar5;
      pcVar6 = pcVar5 + 1;
      if (cVar1 == '*') break;
      if (param_4 == 0) {
        return false;
      }
      uVar2 = *param_3;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
      pcVar5 = pcVar6;
      puStack00000024 = param_3;
      iStack0000002c = param_4;
      if (cVar1 != '?') {
        iVar3 = tolower(uVar2);
        iVar4 = tolower(cVar1);
        if (iVar3 != iVar4) {
          return false;
        }
      }
    }
    if (pcVar6 == param_1 + (int)param_2) {
      return true;
    }
    pcVar5 = pcVar5 + 2;
    if (*pcVar6 != '.') {
      return false;
    }
    iVar3 = fn_82A20370(&stack0x00000024,&stack0x0000002c,0x2e);
    param_4 = iStack0000002c;
    param_3 = puStack00000024;
  } while (iVar3 != 0);
  return false;
}

