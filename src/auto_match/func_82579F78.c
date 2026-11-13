typedef unsigned char bool;
#define true 1
extern int fn_82579DB0();
extern int fn_82F65AC0();


bool fn_82579F78(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar3 = (char *)fn_82579DB0();
  pcVar5 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    if (((int)pcVar5 - (int)pcVar3 != 1) &&
       (iVar4 = fn_82F65AC0(0xffffffff82196f18,pcVar3), iVar4 != 0)) {
      pcVar5 = "1";
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar3;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 == cVar2);
      return cVar1 == cVar2;
    }
  }
  return true;
}

