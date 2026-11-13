extern int fn_825A27B8();


int * fn_82602F00(unsigned __int64 param_1,unsigned int param_2,int *param_3)

{
  unsigned char *pbVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  if ((param_2 != 0) && (piVar2 = (int *)fn_825A27B8(), piVar2 != (int *)0x0)) {
    piVar3 = piVar2 + 2;
    iVar6 = *piVar2;
    iVar5 = 0;
    piVar2 = piVar3;
    if (param_3 != (int *)0x0) {
      piVar7 = piVar3;
      if (0 < iVar6) {
        do {
          if (piVar7 == param_3) break;
          pbVar1 = (unsigned char *)((int)piVar7 + 1);
          piVar7 = (int *)((unsigned int)*pbVar1 + (int)piVar7);
          if (*pbVar1 == 0) {
            piVar7 = (int *)0x0;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
      piVar2 = (int *)((unsigned int)*(unsigned char *)((int)piVar7 + 1) + (int)piVar7);
      if (*(unsigned char *)((int)piVar7 + 1) == 0) {
        piVar2 = (int *)0x0;
      }
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar5;
    if (iVar6 <= iVar5) {
      iVar4 = iVar6;
    }
    for (; iVar5 < iVar6; iVar5 = iVar5 + 1) {
      if ((((1 << ((int)(short)*piVar2 & 0x3fU) & param_2) != 0) && (*(short *)(piVar2 + 2) != -1))
         && (*(char *)piVar2 == '\0')) {
        return piVar2;
      }
      pbVar1 = (unsigned char *)((int)piVar2 + 1);
      piVar2 = (int *)((unsigned int)*pbVar1 + (int)piVar2);
      if (*pbVar1 == 0) {
        piVar2 = (int *)0x0;
      }
    }
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        if ((((1 << ((int)(short)*piVar3 & 0x3fU) & param_2) != 0) && (*(short *)(piVar3 + 2) != -1)
            ) && (*(char *)piVar3 == '\0')) {
          return piVar3;
        }
        pbVar1 = (unsigned char *)((int)piVar3 + 1);
        piVar3 = (int *)((unsigned int)*pbVar1 + (int)piVar3);
        if (*pbVar1 == 0) {
          piVar3 = (int *)0x0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
  }
  return (int *)0x0;
}

