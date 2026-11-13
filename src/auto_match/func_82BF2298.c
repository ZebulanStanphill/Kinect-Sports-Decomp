extern int fn_82BE6268();
extern int fn_82BE6BD8();
extern int fn_82F67FE8();
extern int memset();


unsigned __int64 fn_82BF2298(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_3) {
    piVar3 = (int *)(param_1 + 0x38);
    do {
      iVar2 = *piVar3;
      if ((iVar2 == 0) || (*(int *)(param_1 + 0x3c) == iVar2)) {
        iVar2 = fn_82F67FE8((char *)(iVar4 + param_2),0xffffffff820eb6bc,piVar3);
        if (iVar2 == -1) {
          return 0;
        }
        cVar1 = *(char *)(iVar4 + param_2);
        while ((cVar1 != '\n' && (iVar4 < param_3))) {
          iVar4 = iVar4 + 1;
          cVar1 = *(char *)(iVar4 + param_2);
        }
        iVar4 = iVar4 + 1;
        if (param_3 < iVar4) {
          return 0;
        }
        *(unsigned int *)(param_1 + 0x3c) = 0;
        *(int *)(param_1 + 0x40) = *piVar3 + *(int *)(param_1 + 0x40);
        if (*piVar3 == 0) {
          fn_82BE6BD8(*(unsigned int *)(param_1 + 4));
          *(unsigned int *)(param_1 + 0x30) = 0;
          *(unsigned int *)(param_1 + 8) = 0;
                    /* WARNING: Subroutine does not return */
          memset(*(unsigned int *)(param_1 + 0x20),0,*(unsigned int *)(param_1 + 0x2c));
        }
      }
      else {
        iVar2 = iVar2 - *(int *)(param_1 + 0x3c);
        if (param_3 - iVar4 < iVar2) {
          iVar2 = param_3 - iVar4;
        }
        fn_82BE6268(*(unsigned int *)(param_1 + 4),iVar4 + param_2,iVar2);
        iVar4 = iVar2 + iVar4;
        iVar2 = *(int *)(param_1 + 0x3c) + iVar2;
        *(int *)(param_1 + 0x3c) = iVar2;
        if ((iVar2 == *piVar3) && (iVar4 = iVar4 + 2, param_3 < iVar4)) {
          return 0;
        }
      }
    } while (iVar4 < param_3);
  }
  return 0;
}

