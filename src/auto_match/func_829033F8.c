typedef unsigned char bool;
#define true 1
#define false 0


bool fn_829033F8(int param_1,int *param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_3 == 2) {
    if ((__int64)(int)param_4 * (__int64)(int)param_5 == 0) {
LAB_82903420:
      bVar1 = false;
    }
    else {
      uVar6 = 0;
      if (param_5 != 0) {
        piVar9 = param_2;
        do {
          uVar5 = 0;
          iVar7 = *(int *)(*piVar9 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
          if (param_4 != 0) {
            piVar8 = piVar9;
            do {
              iVar4 = *(int *)(*piVar8 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
              if (*(int *)(iVar7 + 4) != *(int *)(iVar4 + 4)) goto LAB_829035d0;
              if ((*(unsigned int *)(*(int *)(*(int *)(iVar7 + 4) * 4 +
                                     *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4) & 0x40) == 0) {
                iVar3 = *(int *)(iVar7 + 0x48);
                iVar4 = *(int *)(iVar4 + 0x48);
              }
              else {
                if ((uVar5 >> 2) + *(int *)(iVar7 + 0xc) != *(int *)(iVar4 + 0xc))
                goto LAB_829035d0;
                iVar4 = *(int *)(iVar4 + 0x10);
                iVar3 = (uVar5 & 3) + *(int *)(iVar7 + 0x10);
              }
              if (iVar3 != iVar4) goto LAB_829035d0;
              uVar5 = uVar5 + 1;
              piVar8 = piVar8 + param_5;
            } while (uVar5 < param_4);
          }
          uVar6 = uVar6 + 1;
          piVar9 = piVar9 + 1;
        } while (uVar6 < param_5);
      }
      uVar6 = 0;
      if (param_4 != 0) {
        iVar7 = 0;
        piVar9 = param_2;
        do {
          uVar5 = 0;
          iVar4 = *(int *)(*piVar9 * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
          if (param_5 != 0) {
            do {
              iVar3 = *(int *)(param_2[iVar7 + uVar5] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
              if (*(int *)(iVar4 + 4) != *(int *)(iVar3 + 4)) goto LAB_82903420;
              if ((*(unsigned int *)(*(int *)(*(int *)(iVar4 + 4) * 4 +
                                     *(int *)(*(int *)(param_1 + 8) + 0x10)) + 4) & 0x40) == 0) {
                iVar2 = *(int *)(iVar4 + 0x48);
                iVar3 = *(int *)(iVar3 + 0x48);
              }
              else {
                if ((uVar5 >> 2) + *(int *)(iVar4 + 0xc) != *(int *)(iVar3 + 0xc))
                goto LAB_82903420;
                iVar3 = *(int *)(iVar3 + 0x10);
                iVar2 = (uVar5 & 3) + *(int *)(iVar4 + 0x10);
              }
              if (iVar2 != iVar3) goto LAB_82903420;
              uVar5 = uVar5 + 1;
            } while (uVar5 < param_5);
          }
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + param_5;
          piVar9 = piVar9 + param_5;
        } while (uVar6 < param_4);
      }
LAB_829035d0:
      bVar1 = true;
    }
  }
  else {
    bVar1 = param_4 == 1;
  }
  return bVar1;
}

