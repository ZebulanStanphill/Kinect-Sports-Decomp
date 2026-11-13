typedef unsigned char bool;
#define true 1


void fn_82C31808(int param_1,int param_2)

{
  unsigned short uVar1;
  short *psVar2;
  bool bVar3;
  int *piVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar13;
  
  bVar3 = true;
  if (*(int *)(param_1 + 0xb0) == 0) {
    if (*(int *)(param_1 + 0x3c) < 3) {
      iVar9 = *(int *)(param_1 + 0x140);
      iVar7 = 0;
      uVar1 = *(unsigned short *)(param_1 + 0x22);
      bVar3 = **(char **)(*(int *)(iVar9 + 0x1a8) + 0x10) != '\0';
      if (uVar1 != 0) {
        iVar10 = 0;
        iVar13 = iVar9;
        do {
          piVar4 = (int *)(iVar13 + 0x28);
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 0x6f0;
          iVar13 = iVar10 + iVar9;
          bVar3 = (bool)(*piVar4 != 0 & bVar3);
        } while (iVar7 < (int)(unsigned int)uVar1);
      }
      if ((bVar3) && (iVar7 = 0, uVar1 != 0)) {
        iVar10 = 0;
        bVar3 = true;
        iVar13 = iVar9;
        do {
          piVar4 = (int *)(iVar13 + 0x30);
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 0x6f0;
          iVar13 = iVar10 + iVar9;
          bVar3 = (bool)(*piVar4 == 0 & bVar3);
        } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
      }
    }
    *(unsigned int *)(param_1 + 0x4c) = 0;
    if (*(int *)(param_1 + 0x3c) < 3) {
      if (bVar3) {
        iVar9 = *(int *)(param_1 + 0x1d0);
      }
      else {
        psVar2 = *(short **)(*(int *)(*(int *)(param_1 + 0x140) + 0x1a8) + 8);
        sVar8 = psVar2[-1];
        sVar5 = *psVar2;
        if (*(int *)(param_1 + 0x1bc) == 0) {
          if (*(int *)(param_1 + 0x1c0) != 0) {
            uVar11 = (unsigned int)(short)*(unsigned int *)(param_1 + 0x1c8);
            sVar5 = (short)((int)sVar5 << (uVar11 & 0x3f));
            sVar8 = (short)((int)sVar8 << (uVar11 & 0x3f));
          }
        }
        else {
          uVar11 = (unsigned int)(short)*(unsigned int *)(param_1 + 0x1c8);
          sVar5 = (short)((int)sVar5 >> (uVar11 & 0x3f));
          sVar8 = (short)((int)sVar8 >> (uVar11 & 0x3f));
        }
        if (sVar8 < sVar5) {
          uVar12 = (int)sVar5 - (int)sVar8;
          uVar11 = (int)sVar8 + (int)sVar5;
          sVar6 = (short)((int)uVar12 >> 1) + (unsigned short)((int)uVar12 < 0 && (uVar12 & 1) != 0);
          sVar8 = (short)((int)uVar11 >> 1) + (unsigned short)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        }
        else {
          sVar6 = 0;
          sVar8 = sVar5;
        }
        if ((*(int *)(param_1 + 0x8c) == 1) && (*(int *)(param_1 + 0x94) == 0)) {
          uVar11 = (int)sVar6 + (int)sVar8;
          sVar8 = (short)((int)uVar11 >> 1) + (unsigned short)((int)uVar11 < 0 && (uVar11 & 1) != 0);
        }
        uVar11 = *(unsigned int *)(param_1 + 0x1d4);
        *(unsigned int *)(param_1 + 0x4c) = 1;
        iVar9 = ((((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0)) -
                (((int)sVar5 >> 1) + (unsigned int)(sVar5 < 0 && ((int)sVar5 & 1U) != 0))) + (int)sVar8;
      }
      iVar7 = 0;
      if (*(short *)(param_1 + 0x22) != 0) {
        iVar13 = 0;
        do {
          iVar7 = iVar7 + 1;
          *(int *)(iVar13 + *(int *)(param_1 + 0x168)) = iVar9;
          iVar13 = iVar13 + 4;
        } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
      }
    }
    else if (*(int *)(param_1 + 0x174) == 0) {
      iVar9 = 0;
      if (param_2 == 0) {
        iVar7 = 0;
        if (*(unsigned short *)(param_1 + 0x22) != 0) {
          iVar10 = 0;
          iVar13 = *(int *)(param_1 + 0x140);
          iVar9 = 0;
          do {
            sVar8 = **(short **)(*(int *)(iVar13 + 0x1a8) + 8);
            iVar13 = (int)sVar8;
            if (*(int *)(param_1 + 0x1bc) == 0) {
              if (*(int *)(param_1 + 0x1c0) != 0) {
                iVar13 = (int)sVar8 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
              }
            }
            else {
              iVar13 = (int)sVar8 >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
            }
            if (iVar9 < iVar13) {
              iVar9 = iVar13;
            }
            iVar7 = iVar7 + 1;
            iVar10 = iVar10 + 0x6f0;
            iVar13 = iVar10 + *(int *)(param_1 + 0x140);
          } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
        }
      }
      else {
        iVar9 = -*(int *)(param_1 + 0x1d4);
      }
      iVar7 = 0;
      if (*(short *)(param_1 + 0x22) != 0) {
        iVar13 = 0;
        do {
          iVar7 = iVar7 + 1;
          uVar11 = *(int *)(param_1 + 0x1d4) + iVar9;
          *(unsigned int *)(iVar13 + *(int *)(param_1 + 0x168)) =
               ((int)uVar11 >> 1) + (unsigned int)((int)uVar11 < 0 && (uVar11 & 1) != 0);
          iVar13 = iVar13 + 4;
        } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
      }
    }
    else {
      iVar9 = 0;
      if (*(short *)(param_1 + 0x22) != 0) {
        iVar7 = 0;
        do {
          if (*(int *)(param_1 + 0x1bc) == 0) {
            uVar11 = *(unsigned int *)(param_1 + 0x178);
            if (*(int *)(param_1 + 0x1c0) != 0) {
              uVar11 = uVar11 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
            }
          }
          else {
            uVar11 = *(unsigned int *)(param_1 + 0x178) >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
          }
          iVar9 = iVar9 + 1;
          *(unsigned int *)(iVar7 + *(int *)(param_1 + 0x168)) = uVar11;
          iVar7 = iVar7 + 4;
        } while (iVar9 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
      }
    }
    if (*(int *)(param_1 + 0x48) == 3) {
      *(unsigned int *)(param_1 + 0x48) = 1;
    }
  }
  return;
}

