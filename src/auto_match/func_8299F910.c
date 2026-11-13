typedef unsigned char bool;
#define true 1
#define false 0


int fn_8299F910(int param_1,int *param_2,unsigned int param_3,int *param_4,unsigned __int64 param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int *piVar8;
  unsigned int uVar9;
  int *piVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  
  uVar9 = 0;
  piVar8 = param_2;
  if (param_3 != 0) {
    do {
      iVar1 = *piVar8;
      if ((iVar1 != 0) &&
         (uVar11 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc), (param_5 & 0xffffffff) <= uVar11)) {
        bVar5 = true;
        if ((int)param_5 == 0) {
LAB_8299fa48:
          return param_2[uVar9];
        }
        uVar12 = param_5;
        piVar10 = param_4;
        do {
          iVar2 = *piVar10;
          uVar6 = 0;
          iVar3 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
          if (param_6 == 0) {
            if (uVar11 != 0) {
              iVar7 = 0;
              do {
                iVar4 = *(int *)(*(int *)(iVar1 + 0x10) + iVar7);
                if (((iVar4 == iVar2) && (*(int *)(iVar3 + 0x3c) == 0)) ||
                   ((iVar4 == *(int *)(iVar3 + 0x38) &&
                    (*(int *)(*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x14)) + 0x3c) == 0)))) break;
                uVar6 = uVar6 + 1;
                iVar7 = iVar7 + 4;
              } while ((uVar6 & 0xffffffff) < uVar11);
            }
            bVar5 = (bool)(uVar11 != uVar6 & bVar5);
          }
          else {
            if (uVar11 != 0) {
              iVar7 = 0;
              do {
                iVar4 = *(int *)(*(int *)(iVar1 + 0x10) + iVar7);
                if ((iVar4 == iVar2) || (iVar4 == *(int *)(iVar3 + 0x38))) break;
                uVar6 = uVar6 + 1;
                iVar7 = iVar7 + 4;
              } while ((uVar6 & 0xffffffff) < uVar11);
            }
            if ((uVar6 & 0xffffffff) == uVar11) {
              bVar5 = false;
            }
          }
          piVar10 = piVar10 + 1;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        if (bVar5) goto LAB_8299fa48;
      }
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar9 < param_3);
  }
  return 0;
}

