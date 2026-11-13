#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_826E7468();


/* WARNING: Removing unreachable block (ram,0x8275d938) */
/* WARNING: Removing unreachable block (ram,0x8275d8f4) */
/* WARNING: Removing unreachable block (ram,0x8275d9b4) */

void fn_8275D3A8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char bVar8;
  unsigned char *puVar5;
  unsigned char *pbVar6;
  unsigned int uVar7;
  unsigned char uVar9;
  unsigned char bVar10;
  int iVar11;
  int *piVar12;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar7 = iVar2 + 1;
  bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 4));
  *(unsigned int *)(param_1 + 0x10) = uVar7;
  piVar12 = (int *)(param_1 + 4);
  if (7 < uVar7) {
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  uVar7 = *(unsigned int *)(param_1 + 0x10);
  if ((1 << (7U - iVar2 & 0x3f) & (unsigned int)bVar10) == 0) {
    if (uVar7 < 8) {
      if (uVar7 == 1) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 6;
        bVar10 = bVar10 >> 2 & 0x1f;
      }
      else if (uVar7 == 2) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 7;
        bVar10 = bVar10 >> 1 & 0x1f;
      }
      else if (uVar7 == 3) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 0;
        bVar10 = bVar10 & 0x1f;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar7 == 4) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 7;
          *(unsigned int *)(param_1 + 0x10) = 1;
          bVar8 = (bVar8 & 0xf) << 1;
        }
        else if (uVar7 == 5) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 6;
          *(unsigned int *)(param_1 + 0x10) = 2;
          bVar8 = (bVar8 & 7) << 2;
        }
        else if (uVar7 == 6) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 5;
          *(unsigned int *)(param_1 + 0x10) = 3;
          bVar8 = (bVar8 & 3) << 3;
        }
        else {
          if (uVar7 == 0) {
            bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(unsigned int *)(param_1 + 0x10) = 5;
            bVar10 = bVar10 >> 3;
            goto LAB_8275d560;
          }
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar8 = *pbVar6;
          bVar10 = pbVar6[1] >> 4;
          *(unsigned int *)(param_1 + 0x10) = 4;
          bVar8 = (bVar8 & 1) << 4;
        }
        *(int *)(param_1 + 0xc) = iVar2;
        bVar10 = bVar10 | bVar8;
      }
    }
    else {
      bVar10 = 0;
    }
LAB_8275d560:
    if (bVar10 == 0) {
      *(unsigned char *)(param_1 + 0x20) = 1;
      if (*(int *)(param_1 + 0x4c) == 0) {
        return;
      }
      *(unsigned int *)(param_1 + 0x4c) = 0;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      return;
    }
    if ((bVar10 & 1) != 0) {
      *(unsigned char *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(unsigned int *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      uVar7 = *(unsigned int *)(param_1 + 0x10);
      if (uVar7 < 8) {
        if (uVar7 == 1) {
          bVar8 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          *(unsigned int *)(param_1 + 0x10) = 6;
          uVar7 = bVar8 >> 2 & 0x1f;
        }
        else if (uVar7 == 2) {
          bVar8 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          *(unsigned int *)(param_1 + 0x10) = 7;
          uVar7 = bVar8 >> 1 & 0x1f;
        }
        else if (uVar7 == 3) {
          bVar8 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          *(unsigned int *)(param_1 + 0x10) = 0;
          uVar7 = bVar8 & 0x1f;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
        else {
          if (uVar7 == 4) {
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (unsigned int)(pbVar6[1] >> 7);
            *(unsigned int *)(param_1 + 0x10) = 1;
            uVar3 = (bVar8 & 0xf) << 1;
          }
          else if (uVar7 == 5) {
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (unsigned int)(pbVar6[1] >> 6);
            *(unsigned int *)(param_1 + 0x10) = 2;
            uVar3 = (bVar8 & 7) << 2;
          }
          else if (uVar7 == 6) {
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (unsigned int)(pbVar6[1] >> 5);
            *(unsigned int *)(param_1 + 0x10) = 3;
            uVar3 = (bVar8 & 3) << 3;
          }
          else {
            if (uVar7 == 0) {
              bVar8 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
              *(unsigned int *)(param_1 + 0x10) = 5;
              uVar7 = (unsigned int)(bVar8 >> 3);
              goto LAB_8275d710;
            }
            iVar2 = *(int *)(param_1 + 0xc) + 1;
            pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            bVar8 = *pbVar6;
            uVar7 = (unsigned int)(pbVar6[1] >> 4);
            *(unsigned int *)(param_1 + 0x10) = 4;
            uVar3 = (bVar8 & 1) << 4;
          }
          *(int *)(param_1 + 0xc) = iVar2;
          uVar7 = uVar7 | uVar3;
        }
      }
      else {
        uVar7 = 0;
      }
LAB_8275d710:
      uVar1 = fn_826E7468(piVar12,uVar7);
      uVar3 = 1 << (uVar7 - 1 & 0x3f);
      if ((uVar1 & uVar3) != 0) {
        uVar1 = -1 << uVar7 | uVar1;
      }
      *(unsigned int *)(param_1 + 0x2c) = uVar1;
      uVar1 = fn_826E7468(piVar12,uVar7);
      if ((uVar1 & uVar3) != 0) {
        uVar1 = -1 << uVar7 | uVar1;
      }
      *(unsigned int *)(param_1 + 0x30) = uVar1;
    }
    if (((bVar10 & 2) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
      *(unsigned char *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(unsigned int *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      iVar2 = fn_826E7468(piVar12);
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0x34) + iVar2;
      }
      *(int *)(param_1 + 0x14) = iVar2;
    }
    if (((bVar10 & 4) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
      *(unsigned char *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(unsigned int *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      iVar2 = fn_826E7468(piVar12);
      if (0 < iVar2) {
        iVar2 = *(int *)(param_1 + 0x34) + iVar2;
      }
      *(int *)(param_1 + 0x18) = iVar2;
    }
    if (((bVar10 & 8) != 0) && (*(int *)(param_1 + 0x48) != 0)) {
      *(unsigned char *)(param_1 + 0x20) = 3;
      if (*(int *)(param_1 + 0x4c) != 0) {
        *(unsigned int *)(param_1 + 0x4c) = 0;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      iVar2 = fn_826E7468(piVar12);
      if (0 < iVar2) {
        iVar2 = *(int *)(param_1 + 0x38) + iVar2;
      }
      *(int *)(param_1 + 0x1c) = iVar2;
    }
    if ((bVar10 & 0x10) == 0) {
      return;
    }
    *(unsigned char *)(param_1 + 0x20) = 2;
    if (*(int *)(param_1 + 0x50) != 0) {
      *(unsigned int *)(param_1 + 0x50) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(unsigned int *)(param_1 + 0x4c) = 0;
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(unsigned int *)(param_1 + 0x1c) = 0;
    *(unsigned int *)(param_1 + 0x18) = 0;
    *(unsigned int *)(param_1 + 0x14) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
    bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
    uVar7 = (unsigned int)bVar10;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if ((bVar10 == 0xff) && ((*(unsigned char *)(param_1 + 0x70) & 4) != 0)) {
      *(unsigned int *)(param_1 + 0x10) = 0;
      puVar5 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
      uVar7 = (unsigned int)CONCAT11(puVar5[1],*puVar5);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    *(unsigned int *)(param_1 + 0x10) = 0;
    bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
    uVar3 = (unsigned int)bVar10;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    if (bVar10 == 0xff) {
      *(unsigned int *)(param_1 + 0x10) = 0;
      puVar5 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
      uVar3 = (unsigned int)CONCAT11(puVar5[1],*puVar5);
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
    }
    iVar2 = *(int *)(param_1 + 0x40);
    *(unsigned int *)(param_1 + 0x40) = iVar2 + uVar3;
    *(int *)(param_1 + 0x38) = iVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x3c);
    *(unsigned int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar7;
    uVar7 = *(unsigned int *)(param_1 + 0x10);
    if (uVar7 < 8) {
      if (uVar7 == 1) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 5;
        uVar7 = bVar10 >> 3 & 0xf;
      }
      else if (uVar7 == 2) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 6;
        uVar7 = bVar10 >> 2 & 0xf;
      }
      else if (uVar7 == 3) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 7;
        uVar7 = bVar10 >> 1 & 0xf;
      }
      else if (uVar7 == 4) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 0;
        uVar7 = bVar10 & 0xf;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar7 == 5) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 7) << 1;
          *(unsigned int *)(param_1 + 0x10) = 1;
          uVar3 = (unsigned int)(bVar10 >> 7);
        }
        else if (uVar7 == 6) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 3) << 2;
          *(unsigned int *)(param_1 + 0x10) = 2;
          uVar3 = (unsigned int)(bVar10 >> 6);
        }
        else {
          if (uVar7 == 0) {
            bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(unsigned int *)(param_1 + 0x10) = 4;
            uVar7 = (unsigned int)(bVar10 >> 4);
            goto LAB_8275db40;
          }
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 1) << 3;
          *(unsigned int *)(param_1 + 0x10) = 3;
          uVar3 = (unsigned int)(bVar10 >> 5);
        }
        *(int *)(param_1 + 0xc) = iVar2;
        uVar7 = uVar7 | uVar3;
      }
    }
    else {
      uVar7 = 0;
    }
LAB_8275db40:
    *(unsigned int *)(param_1 + 0x44) = uVar7;
    uVar7 = *(unsigned int *)(param_1 + 0x10);
    if (uVar7 < 8) {
      if (uVar7 == 1) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 5;
        uVar7 = bVar10 >> 3 & 0xf;
      }
      else if (uVar7 == 2) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 6;
        uVar7 = bVar10 >> 2 & 0xf;
      }
      else if (uVar7 == 3) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 7;
        uVar7 = bVar10 >> 1 & 0xf;
      }
      else if (uVar7 == 4) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 0;
        uVar7 = bVar10 & 0xf;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar7 == 5) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 7) << 1;
          *(unsigned int *)(param_1 + 0x10) = 1;
          uVar3 = (unsigned int)(bVar10 >> 7);
        }
        else if (uVar7 == 6) {
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 3) << 2;
          *(unsigned int *)(param_1 + 0x10) = 2;
          uVar3 = (unsigned int)(bVar10 >> 6);
        }
        else {
          if (uVar7 == 0) {
            bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(unsigned int *)(param_1 + 0x10) = 4;
            uVar7 = (unsigned int)(bVar10 >> 4);
            goto LAB_8275dc78;
          }
          iVar2 = *(int *)(param_1 + 0xc) + 1;
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 1) << 3;
          *(unsigned int *)(param_1 + 0x10) = 3;
          uVar3 = (unsigned int)(bVar10 >> 5);
        }
        *(int *)(param_1 + 0xc) = iVar2;
        uVar7 = uVar7 | uVar3;
      }
    }
    else {
      uVar7 = 0;
    }
LAB_8275dc78:
    *(unsigned int *)(param_1 + 0x48) = uVar7;
    return;
  }
  bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
  *(unsigned int *)(param_1 + 0x10) = uVar7 + 1;
  if (7 < uVar7 + 1) {
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  uVar3 = *(unsigned int *)(param_1 + 0x10);
  if ((1 << (7 - uVar7 & 0x3f) & (unsigned int)bVar10) == 0) {
    if (uVar3 < 8) {
      if (uVar3 == 1) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 5;
        uVar7 = bVar10 >> 3 & 0xf;
      }
      else if (uVar3 == 2) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 6;
        uVar7 = bVar10 >> 2 & 0xf;
      }
      else if (uVar3 == 3) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 7;
        uVar7 = bVar10 >> 1 & 0xf;
      }
      else if (uVar3 == 4) {
        bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        *(unsigned int *)(param_1 + 0x10) = 0;
        uVar7 = bVar10 & 0xf;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar3 == 5) {
          pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
          bVar10 = pbVar6[1];
          uVar7 = (*pbVar6 & 7) << 1;
          *(unsigned int *)(param_1 + 0x10) = 1;
          bVar10 = bVar10 >> 7;
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
        }
        else {
          if (uVar3 == 6) {
            iVar2 = *(int *)(param_1 + 0xc);
            uVar4 = 2;
            uVar7 = (*(unsigned char *)(iVar2 + *piVar12) & 3) << 2;
            bVar10 = ((unsigned char *)(iVar2 + *piVar12))[1] >> 6;
          }
          else {
            if (uVar3 == 0) {
              bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
              *(unsigned int *)(param_1 + 0x10) = 4;
              uVar7 = (unsigned int)(bVar10 >> 4);
              goto LAB_8275de14;
            }
            iVar2 = *(int *)(param_1 + 0xc);
            uVar4 = 3;
            uVar7 = (*(unsigned char *)(iVar2 + *piVar12) & 1) << 3;
            bVar10 = ((unsigned char *)(iVar2 + *piVar12))[1] >> 5;
          }
          *(unsigned int *)(param_1 + 0x10) = uVar4;
          *(int *)(param_1 + 0xc) = iVar2 + 1;
        }
        uVar7 = uVar7 | bVar10;
      }
    }
    else {
      uVar7 = 0;
    }
LAB_8275de14:
    iVar2 = uVar7 + 2;
    uVar3 = fn_826E7468(piVar12,iVar2);
    uVar7 = 1 << uVar7 + 1;
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    *(unsigned int *)(param_1 + 0x5c) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar2);
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    *(unsigned int *)(param_1 + 0x60) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar2);
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    *(unsigned int *)(param_1 + 0x54) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar2);
    if ((uVar3 & uVar7) != 0) {
      uVar3 = -1 << iVar2 | uVar3;
    }
    uVar9 = 0x85;
    *(unsigned int *)(param_1 + 0x58) = uVar3;
    goto LAB_8275e120;
  }
  if (uVar3 < 8) {
    if (uVar3 == 1) {
      bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(unsigned int *)(param_1 + 0x10) = 5;
      uVar7 = bVar10 >> 3 & 0xf;
    }
    else if (uVar3 == 2) {
      bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(unsigned int *)(param_1 + 0x10) = 6;
      uVar7 = bVar10 >> 2 & 0xf;
    }
    else if (uVar3 == 3) {
      bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(unsigned int *)(param_1 + 0x10) = 7;
      uVar7 = bVar10 >> 1 & 0xf;
    }
    else if (uVar3 == 4) {
      bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
      *(unsigned int *)(param_1 + 0x10) = 0;
      uVar7 = bVar10 & 0xf;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    else {
      if (uVar3 == 5) {
        pbVar6 = (unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
        bVar10 = pbVar6[1];
        uVar7 = (*pbVar6 & 7) << 1;
        *(unsigned int *)(param_1 + 0x10) = 1;
        bVar10 = bVar10 >> 7;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      }
      else {
        if (uVar3 == 6) {
          iVar2 = *(int *)(param_1 + 0xc);
          uVar4 = 2;
          uVar7 = (*(unsigned char *)(iVar2 + *piVar12) & 3) << 2;
          bVar10 = ((unsigned char *)(iVar2 + *piVar12))[1] >> 6;
        }
        else {
          if (uVar3 == 0) {
            bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
            *(unsigned int *)(param_1 + 0x10) = 4;
            uVar7 = (unsigned int)(bVar10 >> 4);
            goto LAB_8275dff4;
          }
          iVar2 = *(int *)(param_1 + 0xc);
          uVar4 = 3;
          uVar7 = (*(unsigned char *)(iVar2 + *piVar12) & 1) << 3;
          bVar10 = ((unsigned char *)(iVar2 + *piVar12))[1] >> 5;
        }
        *(unsigned int *)(param_1 + 0x10) = uVar4;
        *(int *)(param_1 + 0xc) = iVar2 + 1;
      }
      uVar7 = uVar7 | bVar10;
    }
  }
  else {
    uVar7 = 0;
  }
LAB_8275dff4:
  iVar2 = *(int *)(param_1 + 0x10);
  iVar11 = uVar7 + 2;
  bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (7 < iVar2 + 1U) {
    *(unsigned int *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  *(unsigned int *)(param_1 + 100) = 0;
  *(unsigned int *)(param_1 + 0x68) = 0;
  if ((1 << (7U - iVar2 & 0x3f) & (unsigned int)bVar10) == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    uVar3 = iVar2 + 1;
    bVar10 = *(unsigned char *)(*(int *)(param_1 + 0xc) + *piVar12);
    *(unsigned int *)(param_1 + 0x10) = uVar3;
    if (7 < uVar3) {
      *(unsigned int *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    if ((1 << (7U - iVar2 & 0x3f) & (unsigned int)bVar10) != 0) {
      uVar3 = fn_826E7468(piVar12,iVar11);
      uVar7 = 1 << uVar7 + 1 & uVar3;
      goto joined_r0x8275e108;
    }
    uVar3 = fn_826E7468(piVar12,iVar11);
    if ((1 << uVar7 + 1 & uVar3) != 0) {
      uVar3 = -1 << iVar11 | uVar3;
    }
    *(unsigned int *)(param_1 + 100) = uVar3;
  }
  else {
    uVar3 = fn_826E7468(piVar12,iVar11);
    uVar7 = 1 << uVar7 + 1;
    if ((uVar7 & uVar3) != 0) {
      uVar3 = -1 << iVar11 | uVar3;
    }
    *(unsigned int *)(param_1 + 100) = uVar3;
    uVar3 = fn_826E7468(piVar12,iVar11);
    uVar7 = uVar7 & uVar3;
joined_r0x8275e108:
    if (uVar7 != 0) {
      uVar3 = -1 << iVar11 | uVar3;
    }
    *(unsigned int *)(param_1 + 0x68) = uVar3;
  }
  uVar9 = 0x84;
LAB_8275e120:
  *(unsigned char *)(param_1 + 0x20) = uVar9;
  return;
}

