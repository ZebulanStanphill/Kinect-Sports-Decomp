#define true 1
extern int stricmp();


unsigned __int64 fn_82935C18(unsigned int *param_1,char *param_2,unsigned int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar4;
  unsigned __int64 uVar3;
  char *pcVar5;
  char *pcVar6;
  unsigned int uVar7;
  
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  do {
    pcVar2 = (char *)param_1[1];
    pcVar6 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      uVar7 = 0xffffffff;
      uVar3 = 0xffffffff80004005;
LAB_82935ca8:
      *param_3 = uVar7;
      return uVar3;
    }
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((pcVar6 + (-1 - (int)pcVar2) == pcVar5 + (-1 - (int)param_2)) &&
       (iVar4 = stricmp(param_2), iVar4 == 0)) {
      uVar7 = *param_1;
      uVar3 = 0;
      goto LAB_82935ca8;
    }
    param_1 = param_1 + 2;
  } while( true );
}

