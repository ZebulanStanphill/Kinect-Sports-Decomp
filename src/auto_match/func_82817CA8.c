unsigned __int64
fn_82817CA8(int *param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned int *param_5,int (**param_6)())

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  *param_5 = 0;
  if ((((param_1 != (int *)0x0) && ((param_2 & 0xffffffff) != 0)) && (param_6 != (int (**)())0x0)) &&
     (piVar3 = (int *)param_1[1], piVar3 < piVar3 + *param_1 * 3)) {
    do {
      if (param_4 == 0) {
        iVar1 = piVar3[1];
LAB_82817d20:
        if ((iVar1 != 0) && (iVar1 = (*param_6)(iVar1,param_2), iVar1 == 0)) {
          if (param_3 == iVar2) {
            *param_5 = (unsigned int)piVar3;
            return 1;
          }
          iVar2 = iVar2 + 1;
        }
      }
      else if (param_4 == 1) {
        iVar1 = *piVar3;
        goto LAB_82817d20;
      }
      piVar3 = piVar3 + 3;
    } while (piVar3 < (int *)(*param_1 * 0xc + param_1[1]));
  }
  return 0;
}

