extern int fn_829EC340();
extern int fn_82A28568();
extern int fn_82F664B0();
extern unsigned int lbl_832179FC;


__int64 fn_829EC420(char *param_1,int param_2,__int64 param_3,unsigned int param_4)

{
  char cVar1;
  int iVar3;
  __int64 lVar2;
  int *piVar4;
  char *pcVar5;
  unsigned int uVar6;
  
  if (((param_2 != 0) && (param_3 != 0)) && (iVar3 = fn_829EC340(), iVar3 == 0)) {
    uVar6 = 0;
    piVar4 = (int *)0x83218a3c;
    do {
      if ((piVar4[-1] == 0) && (pcVar5 = param_1, *piVar4 == 0)) {
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        iVar3 = (int)pcVar5 - (int)param_1;
        lVar2 = fn_82A28568(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,iVar3 + 1);
        if (lVar2 != 0) {
          fn_82F664B0(lVar2,iVar3,param_1);
          iVar3 = uVar6 * 0x20;
          *(int *)(iVar3 + -0x7cde75c8) = (int)lVar2;
          *(__int64 *)(iVar3 + -0x7cde75b8) = param_3;
          *(int *)(iVar3 + -0x7cde75b0) = param_2;
          *(unsigned int *)(iVar3 + -0x7cde75c0) = param_4;
          *(int *)(iVar3 + -0x7cde75c4) = *(int *)(iVar3 + -0x7cde75c4) + 1;
          return lVar2;
        }
        return 0;
      }
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar6 < 10);
  }
  return 0;
}

