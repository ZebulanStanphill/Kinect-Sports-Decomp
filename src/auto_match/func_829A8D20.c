extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;


unsigned __int64 fn_829A8D20(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int uVar12;
  unsigned int auStack_f0 [20];
  unsigned int auStack_a0 [40];
  
  if (param_2 == (unsigned int *)0x0) {
LAB_829a8d40:
    uVar5 = 1;
  }
  else {
    uVar7 = *param_2;
    uVar9 = uVar7 & 0xfff00000;
    if (((uVar7 & 0xfff00000) != 0) && (uVar9 != 0x20700000)) {
      uVar3 = (unsigned __int64)uVar7 & 0xfffff;
      uVar10 = param_2[1] / uVar3;
      trapWord(6,uVar3,0);
      if ((uVar9 == 0x70500000) || ((uVar9 == 0x70600000 || (uVar9 == 0x70700000)))) {
        uVar10 = 2;
      }
      if (1 < uVar10) {
        iVar1 = param_1[0x20];
        iVar6 = param_1[0x22];
        iVar2 = param_1[0x1f];
        auStack_f0[iVar1] = 0;
        auStack_f0[iVar6] = 0;
        auStack_a0[iVar1] = 1;
        uVar9 = 0;
        auStack_a0[iVar6] = 3;
        uVar12 = 0;
        auStack_f0[iVar2] = 0;
        auStack_a0[iVar2] = 1;
        if (uVar10 != 0) {
          lVar4 = ((unsigned __int64)uVar7 & 0xfffff) * 4;
          lVar11 = 0;
          do {
            iVar1 = *(int *)(*(int *)((int)lVar11 + param_2[2]) * 4 + param_1[5]);
            uVar7 = *(unsigned int *)(*(int *)(*(int *)(iVar1 + 4) * 4 + param_1[4]) + 4);
            if (((uVar7 & 0x200) == 0) || ((uVar7 & 0x80) != 0)) {
              if ((uVar7 & 0x80) == 0) {
                if ((((uVar7 & 0x10) == 0) || ((uVar7 & 0x200) != 0)) ||
                   (iVar6 = (**(int (***)())(*param_1 + 0x70))(param_1,*(unsigned int *)(iVar1 + 0x6c)),
                   iVar6 == 0xffff)) {
                  iVar6 = param_1[0x22];
                }
                else {
                  iVar6 = param_1[0x20];
                }
              }
              else {
                iVar6 = param_1[0x25];
              }
            }
            else {
              iVar6 = param_1[0x1f];
            }
            uVar7 = 0;
            if (uVar12 != 0) {
              lVar8 = 0;
              do {
                iVar2 = *(int *)(*(int *)((int)lVar8 + param_2[2]) * 4 + param_1[5]);
                if (((*(int *)(iVar1 + 4) == *(int *)(iVar2 + 4)) &&
                    (*(int *)(iVar1 + 8) == *(int *)(iVar2 + 8))) &&
                   (*(int *)(iVar1 + 0xc) == *(int *)(iVar2 + 0xc))) break;
                uVar7 = uVar7 + 1;
                lVar8 = lVar4 + lVar8;
              } while (uVar7 < uVar12);
            }
            if (uVar7 == uVar12) {
              uVar7 = auStack_f0[iVar6];
              auStack_f0[iVar6] = uVar7 + 1;
              if (uVar7 + 1 <= auStack_a0[iVar6]) goto LAB_829a8f28;
LAB_829a8f68:
              if (param_3 != (unsigned int *)0x0) {
                *param_3 = uVar12;
              }
              goto LAB_829a8d40;
            }
LAB_829a8f28:
            if (((0x1ff < *(unsigned short *)((int)param_1 + 0xca)) && (param_1[0x1f] == iVar6)) &&
               (uVar9 = uVar9 + 1, 2 < uVar9)) goto LAB_829a8f68;
            uVar12 = uVar12 + 1;
            lVar11 = lVar4 + lVar11;
          } while (uVar12 < uVar10);
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

