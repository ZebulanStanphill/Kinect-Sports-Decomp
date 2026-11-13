#define true 1
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();


int fn_82BEEFF0(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned short uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    fn_82BE5240(param_1,0x193,0xffffffff820eb180,*(unsigned int *)(param_1 + 0x14));
    iVar1 = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if (((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0x2c), iVar1 == 0)) ||
       (*(int **)(iVar1 + 0x34) == (int *)0x0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x34) + 4))();
    }
    iVar4 = param_1 + 0x4c;
    fn_82BE5340(iVar4);
    uVar3 = 1;
    if ((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
      if (*(int *)(param_1 + 0x58) == 0) {
        return 0;
      }
    }
    else {
      while( true ) {
        if ((*(int *)(param_1 + 0x54) == 0) || (*(unsigned short *)(param_1 + 0x48) <= uVar3))
        goto LAB_82bef140;
        piVar2 = (int *)fn_82BE5378(iVar4);
        if (*piVar2 == iVar1) break;
        fn_82BE5350();
        uVar3 = uVar3 + 1;
      }
      if (**(int **)(param_1 + 0x54) == 0) {
        fn_82BE5340(iVar4);
      }
      else {
        fn_82BE5350();
      }
      iVar1 = fn_82BE5378(iVar4);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        piVar2 = (int *)fn_82BE5378(iVar4);
        iVar1 = *piVar2;
      }
      if (iVar1 != 0) {
        return iVar1;
      }
LAB_82bef140:
      if (*(int *)(param_1 + 0x58) == 0) {
        return 0;
      }
      fn_82BE5340(iVar4);
    }
    iVar1 = fn_82BE5378(iVar4);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      piVar2 = (int *)fn_82BE5378(iVar4);
      iVar1 = *piVar2;
    }
  }
  return iVar1;
}

