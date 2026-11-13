#define true 1


unsigned __int64 fn_82967708(int param_1,int param_2,int *param_3,__int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  double dVar7;
  double dVar8;
  
  uVar4 = (unsigned int)param_4;
  uVar5 = 1;
  if (1 < uVar4) {
    iVar1 = *(int *)(*param_3 * 4 + *(int *)(param_1 + 0x14));
    piVar6 = param_3;
    do {
      piVar6 = piVar6 + 1;
      iVar2 = *(int *)(*piVar6 * 4 + *(int *)(param_1 + 0x14));
      if ((*(unsigned int *)(iVar2 + 0x3c) & 0x80000) == 0) {
        dVar8 = *(double *)(iVar2 + 0x20);
      }
      else {
        dVar8 = -*(double *)(iVar2 + 0x20);
      }
      dVar7 = *(double *)(iVar1 + 0x20);
      if ((*(unsigned int *)(iVar1 + 0x3c) & 0x80000) != 0) {
        dVar7 = -dVar7;
      }
      if (dVar8 != dVar7) {
        uVar5 = 0;
        if (uVar4 == 0) {
          return 0;
        }
        do {
          uVar3 = 0;
          do {
            iVar1 = *(int *)(((uVar3 + uVar5) * 4 & 0xc) + param_2);
            if (iVar1 != -1) {
              iVar2 = *(int *)(*param_3 * 4 + *(int *)(param_1 + 0x14));
              if ((*(unsigned int *)(iVar2 + 0x3c) & 0x80000) == 0) {
                dVar8 = *(double *)(iVar2 + 0x20);
              }
              else {
                dVar8 = -*(double *)(iVar2 + 0x20);
              }
              iVar2 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x14));
              dVar7 = *(double *)(iVar2 + 0x20);
              if ((*(unsigned int *)(iVar2 + 0x3c) & 0x80000) != 0) {
                dVar7 = -dVar7;
              }
              if (dVar8 == dVar7) {
                *param_3 = iVar1;
                break;
              }
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < 4);
          uVar5 = uVar5 + 1;
          param_3 = param_3 + 1;
          if (uVar4 <= uVar5) {
            return 0;
          }
        } while( true );
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar5 = 0;
  do {
    uVar3 = (uVar5 - 1) * 4 & 0xc;
    iVar1 = *(int *)(uVar3 + param_2);
    if (iVar1 != -1) {
      iVar2 = *(int *)(*param_3 * 4 + *(int *)(param_1 + 0x14));
      if ((*(unsigned int *)(iVar2 + 0x3c) & 0x80000) == 0) {
        dVar8 = *(double *)(iVar2 + 0x20);
      }
      else {
        dVar8 = -*(double *)(iVar2 + 0x20);
      }
      iVar1 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x14));
      dVar7 = *(double *)(iVar1 + 0x20);
      if ((*(unsigned int *)(iVar1 + 0x3c) & 0x80000) != 0) {
        dVar7 = -dVar7;
      }
      if (dVar8 == dVar7) {
        if (uVar4 == 0) {
          return 0;
        }
        param_3 = param_3 + -1;
        do {
          param_3 = param_3 + 1;
          *param_3 = *(int *)(uVar3 + param_2);
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    if (3 < uVar5) {
      return 0;
    }
  } while( true );
}

