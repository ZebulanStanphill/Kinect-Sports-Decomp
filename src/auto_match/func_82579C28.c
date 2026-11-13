extern int fn_82230300();
extern int fn_822DB718();
extern int fn_82587028();
extern int fn_8265CA20();
extern int fn_82F63CA0();


/* WARNING: Removing unreachable block (ram,0x82579d00) */

void fn_82579C28(unsigned int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  for (piVar2 = (int *)*param_1; piVar3 = (int *)param_1[1], piVar2 != piVar3; piVar2 = piVar2 + 1)
  {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x30) != 0) {
        fn_8265CA20();
      }
      *(unsigned int *)(iVar1 + 0x30) = 0;
      *(unsigned int *)(iVar1 + 0x34) = 0;
      *(unsigned int *)(iVar1 + 0x38) = 0;
      if (*(int *)(iVar1 + 0x20) != 0) {
        fn_8265CA20();
      }
      *(unsigned int *)(iVar1 + 0x20) = 0;
      *(unsigned int *)(iVar1 + 0x24) = 0;
      *(unsigned int *)(iVar1 + 0x28) = 0;
      fn_82230300(iVar1 + 4,1,0);
      fn_8265CA20(iVar1);
    }
  }
  piVar2 = (int *)*param_1;
  if (piVar2 != piVar3) {
    fn_82F63CA0(piVar2,piVar3,0);
    param_1[1] = piVar2;
  }
  iVar1 = param_1[4];
  if (iVar1 != param_1[5]) {
    fn_822DB718(iVar1,param_1[5],param_1 + 7);
    param_1[5] = iVar1;
  }
  piVar2 = (int *)param_1[9];
  piVar3 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *(unsigned int *)(param_1[9] + 4) = param_1[9];
  param_1[10] = 0;
  if (piVar3 != (int *)param_1[9]) {
    do {
      piVar2 = (int *)*piVar3;
      fn_82230300(piVar3 + 9,1,0);
      fn_82230300(piVar3 + 2,1,0);
      fn_8265CA20(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)param_1[9]);
  }
  fn_82587028(param_1 + 8,8);
  param_1[0x13] = 0;
  return;
}

