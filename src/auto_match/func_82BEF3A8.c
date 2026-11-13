extern int fn_82BE5340();
extern int fn_82BE5378();


unsigned __int64 fn_82BEF3A8(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  
  if ((*(int *)(param_1 + 0x34) == 2) || (*(unsigned int *)(param_1 + 0x58) < 2)) {
    fn_82BE5340(param_1 + 0x4c);
    if ((*(int *)(param_1 + 0x54) != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x2c) + 0x34);
      if (piVar3 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(int (***)())(*piVar3 + 4))();
      }
      piVar3 = (int *)fn_82BE5378(param_1 + 0x4c);
      if (*piVar3 != iVar2) goto LAB_82bef3d0;
    }
    uVar4 = 2;
    uVar1 = 0x195;
  }
  else {
LAB_82bef3d0:
    uVar4 = 0x10;
    uVar1 = 0;
  }
  *(unsigned int *)(param_1 + 0x10) = uVar4;
  return uVar1;
}

