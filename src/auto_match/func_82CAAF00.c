int * fn_82CAAF00(int *param_1,int *param_2,__int64 param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar4 = (int)param_3;
  piVar2 = (int *)param_1[3];
  iVar3 = piVar2[4];
  if ((iVar3 != 0) && (iVar4 <= iVar3 + -1)) {
    if ((-1 < iVar4) || (*param_1 == iVar3)) {
      *param_1 = *param_1 + -1;
    }
    if ((param_2 != (int *)0x0) && (*param_2 = 0, piVar2 != (int *)0x0)) {
      uVar1 = piVar2[4];
      if (iVar4 < (int)uVar1) {
        if (iVar4 == 0) {
          piVar6 = (int *)*piVar2;
          iVar3 = *piVar6;
          *piVar2 = iVar3;
          if (iVar3 == 0) {
            piVar2[1] = 0;
          }
        }
        else if ((iVar4 == -1) && (uVar1 == 1)) {
          piVar6 = (int *)piVar2[1];
          *piVar2 = 0;
        }
        else {
          if (iVar4 == -1) {
            param_3 = (unsigned __int64)uVar1 - 1;
          }
          piVar5 = (int *)*piVar2;
          param_3 = param_3 + -1;
          if (0 < param_3) {
            do {
              piVar5 = (int *)*piVar5;
              param_3 = param_3 + -1;
            } while (param_3 != 0);
          }
          piVar6 = (int *)*piVar5;
          *piVar5 = *piVar6;
          if (iVar4 == -1) {
            piVar2[1] = (int)piVar5;
          }
        }
        *param_2 = piVar6[1];
        *piVar6 = piVar2[2];
        piVar2[2] = (int)piVar6;
        if (piVar2[3] == 0) {
          piVar2[3] = (int)piVar6;
        }
        piVar2[4] = piVar2[4] + -1;
        return (int *)0x1;
      }
    }
    return (int *)0x0;
  }
  *param_2 = 0;
  return piVar2;
}

