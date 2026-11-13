typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82E1F690();
extern int fn_82F66368();
extern int fn_82F668D8();
extern unsigned int lbl_8323FDEC;
extern unsigned int lbl_8323FDF0;


void fn_82E20100(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char acStack_121 [273];
  
  if (param_1 != (char *)0x0) {
    iVar4 = 0;
    bVar2 = false;
    acStack_121[1] = 0;
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    for (pcVar3 = pcVar3 + (-1 - (int)param_1); (char *)0x2 < pcVar3;
        pcVar3 = pcVar3 + ((-1 - (int)param_1) - iVar4)) {
      if (param_1[iVar4] == ':') {
        bVar2 = true;
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = param_1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
    }
    pcVar3 = param_1;
    if (!bVar2) {
      iVar4 = lbl_8323FDEC;
      if (param_2 != '\0') {
        iVar4 = lbl_8323FDF0;
      }
      if (iVar4 != 0) {
        fn_82F66368(acStack_121 + 1,0x104,iVar4,0x103);
      }
      pcVar5 = acStack_121 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if ((pcVar5 + (-1 - (int)(acStack_121 + 1)) != (char *)0x0) &&
         (acStack_121[(int)(pcVar5 + (-1 - (int)(acStack_121 + 1)))] != '\\')) {
        fn_82F668D8(acStack_121 + 1,0x104,0xffffffff821c5510,1);
      }
    }
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    fn_82F668D8(acStack_121 + 1,0x104,param_1,pcVar3 + (-1 - (int)param_1));
    fn_82E1F690(acStack_121 + 1);
  }
  return;
}

