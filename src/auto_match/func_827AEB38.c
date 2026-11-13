typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8278FDC8();


void fn_827AEB38(int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  bool bVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  
  param_1[5] = 0;
  param_1[4] = 0;
  if (param_2 != 0) {
    param_1[4] = *(int *)(param_2 + 0x30);
    iVar7 = fn_8278FDC8(param_2 + 0x14);
    param_1[5] = iVar7;
  }
  uVar8 = (unsigned __int64)(unsigned int)param_1[1];
  *(unsigned char *)(param_1 + 6) = 0;
  *(unsigned char *)((int)param_1 + 0x19) = 0;
  if (uVar8 != 0) {
    iVar7 = 0;
    do {
      puVar9 = (unsigned int *)(iVar7 + *param_1);
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      puVar9[3] = uVar1;
      puVar9[4] = uVar2;
      uVar3 = param_1[5];
      if (uVar3 != 0) {
        uVar4 = param_1[4];
        if (((uVar2 == 0) || (uVar4 < uVar1)) || (bVar6 = true, uVar2 + uVar1 <= uVar4)) {
          bVar6 = false;
        }
        if (bVar6) {
          uVar5 = puVar9[2];
          if ((int)uVar5 < 0) {
            puVar9[4] = uVar3 + uVar2;
          }
          else {
LAB_827aec14:
            puVar9[3] = uVar5 + uVar1;
          }
        }
        else {
          uVar5 = uVar3;
          if (uVar4 < uVar1) goto LAB_827aec14;
        }
      }
      iVar7 = iVar7 + 0x28;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}

