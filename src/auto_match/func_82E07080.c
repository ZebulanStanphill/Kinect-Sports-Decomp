extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82E07698();


void fn_82E07080(int param_1,int param_2,int *param_3)

{
  unsigned __int64 uVar1;
  char cVar4;
  int iVar2;
  int iVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar9;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int *piVar10;
  int iVar12;
  __int64 lVar11;
  int iVar13;
  
  if ((param_2 != *(int *)(param_1 + 0x44)) ||
     (cVar4 = fn_82E07698(param_3,param_1 + 0x5c), cVar4 == '\0')) {
    piVar10 = (int *)(param_1 + 0x5c);
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0xc) = 0;
    iVar3 = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned int *)(param_1 + 0x3c) = 0;
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned int *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x50) = 0;
    *(unsigned int *)(param_1 + 0x54) = 0;
    *(unsigned int *)(param_1 + 0x58) = 0;
    if (0 < param_3[1]) {
      iVar13 = 0;
      do {
        iVar12 = *param_3 + iVar13;
        iVar2 = fn_82CE5410();
        if (*(unsigned int *)(param_1 + 0x60) == (*(unsigned int *)(param_1 + 100) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar2 + 0x10),piVar10,0xc);
        }
        puVar9 = (unsigned int *)(*(int *)(param_1 + 0x60) * 0xc + *piVar10);
        if (puVar9 != (unsigned int *)0x0) {
          *puVar9 = 0;
          *(unsigned short *)(puVar9 + 1) = 0;
          *(unsigned short *)((int)puVar9 + 6) = 0;
          puVar9[2] = 0;
        }
        iVar2 = *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x60) = iVar2 + 1;
        puVar9 = (unsigned int *)(iVar2 * 0xc + *piVar10);
        *(unsigned short *)(puVar9 + 1) = *(unsigned short *)(iVar12 + 4);
        *(unsigned short *)((int)puVar9 + 6) = *(unsigned short *)(iVar12 + 6);
        uVar5 = (unsigned int)*(unsigned short *)(iVar12 + 4);
        if (uVar5 - 1 < 7) {
          if (uVar5 == 2) {
            *puVar9 = *(unsigned int *)(param_1 + 0x54);
            *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 4;
          }
          else if (uVar5 == 3) {
            *puVar9 = *(unsigned int *)(param_1 + 0x50);
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 4;
          }
          else if (uVar5 == 4) {
            *puVar9 = *(unsigned int *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 4;
          }
          else if (uVar5 == 5) {
            *puVar9 = *(unsigned int *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 8;
          }
          else if ((uVar5 == 6) || (uVar5 != 1)) {
            *puVar9 = *(unsigned int *)(param_1 + 0x48);
            *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 0x10;
          }
          else {
            *puVar9 = *(unsigned int *)(param_1 + 0x58);
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 4;
          }
        }
        iVar3 = iVar3 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar3 < param_3[1]);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      iVar13 = 0;
      do {
        uVar5 = (unsigned int)*(unsigned short *)(iVar13 + *piVar10 + 4);
        if (uVar5 - 1 < 7) {
          if (uVar5 == 2) {
            uVar6 = *(unsigned int *)(param_1 + 0x54);
          }
          else if (uVar5 == 3) {
            uVar6 = *(unsigned int *)(param_1 + 0x50);
          }
          else if ((uVar5 == 4) || (uVar5 == 5)) {
            uVar6 = *(unsigned int *)(param_1 + 0x4c);
          }
          else if ((uVar5 == 6) || (uVar5 != 1)) {
            uVar6 = *(unsigned int *)(param_1 + 0x48);
          }
          else {
            uVar6 = *(unsigned int *)(param_1 + 0x58);
          }
          *(unsigned int *)(iVar13 + *piVar10 + 8) = uVar6;
        }
        iVar3 = iVar3 + 1;
        iVar13 = iVar13 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 0x60));
    }
    *(int *)(param_1 + 0x44) = param_2;
    lVar11 = (__int64)*(int *)(param_1 + 0x58) * (__int64)param_2;
    iVar3 = fn_82CE5410();
    iVar13 = (int)lVar11;
    if ((int)(*(unsigned int *)(param_1 + 0x40) & 0x3fffffff) < iVar13) {
      lVar7 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x40) & 0x3fffffff) << 1;
      if ((int)lVar7 <= iVar13) {
        lVar7 = lVar11;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1 + 0x38,lVar7,1);
    }
    *(int *)(param_1 + 0x3c) = iVar13;
    uVar1 = ((__int64)*(int *)(param_1 + 0x54) * (__int64)param_2 & 0xffffffffU) >> 1;
    iVar3 = fn_82CE5410();
    uVar5 = (unsigned int)uVar1;
    if ((*(unsigned int *)(param_1 + 0x34) & 0x3fffffff) < uVar5) {
      uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x34) & 0x3fffffff) << 1;
      if ((unsigned int)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1 + 0x2c,uVar8,2);
    }
    *(unsigned int *)(param_1 + 0x30) = uVar5;
    uVar1 = ((__int64)*(int *)(param_1 + 0x50) * (__int64)param_2 & 0xffffffffU) >> 2;
    iVar3 = fn_82CE5410();
    uVar5 = (unsigned int)uVar1;
    if ((*(unsigned int *)(param_1 + 0x28) & 0x3fffffff) < uVar5) {
      uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) & 0x3fffffff) << 1;
      if ((unsigned int)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1 + 0x20,uVar8,4);
    }
    *(unsigned int *)(param_1 + 0x24) = uVar5;
    uVar1 = ((__int64)*(int *)(param_1 + 0x4c) * (__int64)param_2 & 0xffffffffU) >> 2;
    iVar3 = fn_82CE5410();
    uVar5 = (unsigned int)uVar1;
    if ((*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff) < uVar5) {
      uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff) << 1;
      if ((unsigned int)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1 + 0x14,uVar8,4);
    }
    *(unsigned int *)(param_1 + 0x18) = uVar5;
    uVar1 = ((__int64)*(int *)(param_1 + 0x48) * (__int64)param_2 & 0xffffffffU) >> 4;
    iVar3 = fn_82CE5410();
    uVar5 = (unsigned int)uVar1;
    if ((*(unsigned int *)(param_1 + 0x10) & 0x3fffffff) < uVar5) {
      uVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x3fffffff) << 1;
      if ((unsigned int)uVar8 <= uVar5) {
        uVar8 = uVar1;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_1 + 8,uVar8,0x10);
    }
    *(unsigned int *)(param_1 + 0xc) = uVar5;
  }
  return;
}

