#define true 1
extern int fn_82F66368();


int * fn_825FD848(int *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  
  do {
    do {
      pcVar1 = (char *)*param_1;
      pcVar3 = pcVar1;
      if (param_1[2] <= (int)pcVar1 - param_1[1]) {
        return (int *)0x0;
      }
      while ((*pcVar3 != '\0' && (pcVar3 = (char *)*param_1, *pcVar3 != '\n'))) {
        if (param_1[2] <= (int)pcVar3 - param_1[1]) {
          return (int *)0x0;
        }
        *param_1 = (int)(pcVar3 + 1);
        pcVar3 = pcVar3 + 1;
      }
      piVar5 = param_1 + 3;
      iVar6 = *param_1 - (int)pcVar1;
      iVar2 = fn_82F66368(piVar5,0x100,pcVar1,iVar6);
      *(char *)((int)piVar5 + iVar6) = '\0';
      if (iVar2 != 0) {
        *(unsigned char *)((int)param_1 + 0x10b) = 0;
      }
      *(char *)((int)piVar5 + iVar6) = '\0';
      if ((*(char *)*param_1 == '\n') && (0 < iVar6)) {
        *(unsigned char *)((int)param_1 + iVar6 + 0xb) = 0;
      }
      iVar2 = *param_1;
      pcVar3 = (char *)(iVar2 + 1);
      *param_1 = (int)pcVar3;
    } while (*(char *)piVar5 == '#');
    pcVar4 = pcVar1;
    if (pcVar1 < (char *)(iVar2 + 1U)) {
      do {
        if (' ' < *pcVar4) break;
        pcVar4 = pcVar4 + 1;
      } while (pcVar4 < (char *)*param_1);
    }
    if ((-(unsigned int)(pcVar3 != pcVar4) & (unsigned int)pcVar1) != 0) {
      return piVar5;
    }
  } while( true );
}

