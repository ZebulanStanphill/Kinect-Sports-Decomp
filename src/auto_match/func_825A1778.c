extern int fn_82522ED8();
extern int fn_82553980();


void fn_825A1778(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (param_1[1] != 0) {
    iVar4 = 0;
    if (0 < param_1[1]) {
      iVar6 = 0;
      do {
        fn_82553980(*(unsigned int *)(param_2 + 0x1a8),*(unsigned int *)(iVar6 + param_1[2]));
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < param_1[1]);
    }
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    fn_82522ED8();
    param_1[2] = 0;
  }
  piVar5 = (int *)(*param_1 + 0x98);
  if ((piVar5 != (int *)0x0) &&
     (uVar1 = *(unsigned int *)(*param_1 + 0x9c), uVar2 = (unsigned __int64)uVar1, 0 < (int)uVar1)) {
    iVar4 = 0;
    do {
      puVar3 = (unsigned int *)(iVar4 + *piVar5);
      if (puVar3[7] == 0) {
        fn_825A1778((unsigned __int64)*puVar3 + 0x11c,param_2);
      }
      uVar2 = uVar2 - 1;
      iVar4 = iVar4 + 0x1a0;
    } while (uVar2 != 0);
  }
  return;
}

