typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDBE8();
extern int fn_82B80EF8();
extern unsigned int lbl_82005710;


void fn_82B82D28(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,int *param_4,unsigned int *param_5,
                  int param_6,int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  unsigned __int64 uVar9;
  int iVar12;
  unsigned __int64 uVar11;
  int *piVar13;
  double dVar14;
  double dVar15;
  
  uVar8 = (unsigned __int64)*param_1 & 0x1f;
  uVar11 = (unsigned __int64)((*param_1 >> 5 & 0xff) >> ((param_2 & 0x1f) << 1)) & 3;
  iVar12 = (int)uVar11;
  piVar5 = (int *)param_1[3];
  dVar15 = lbl_82005710;
  while ((uVar8 & param_8) == 0) {
    iVar12 = (int)uVar11;
    uVar10 = (unsigned int)piVar5[2] >> 7 & 0x7f;
    if (uVar10 == 3) {
      puVar7 = (unsigned int *)piVar5[0xb];
      cVar6 = fn_82ABDBE8(puVar7,piVar5[0xc]);
      if ((cVar6 == '\0') || (uVar10 = *puVar7, (uVar10 & 0x18) != 0)) break;
      if (((uVar10 & 2) == 0) || ((uVar8 & 1) == 0)) {
        if (((uVar10 & 4) == 0) || (bVar4 = false, (uVar8 & 1) == 0)) {
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
      }
      if ((!bVar4) ||
         ((param_7 != 0 &&
          (((*(unsigned int *)(*(int *)(puVar7[3] + 0x1c) + 0x4c) ^
            *(unsigned int *)(*(int *)(param_7 + 0x1c) + 0x4c)) & 0x7ffff) != 0)))) break;
      piVar13 = (int *)puVar7[3];
      uVar1 = (uVar10 >> 5 & 0xff) >> (int)(uVar11 << 1);
LAB_82b83120:
      uVar9 = (unsigned __int64)uVar10 & 0x1f;
      uVar11 = (unsigned __int64)uVar1 & 3;
      if (((uVar10 & 4) != 0) && ((uVar8 & 2) != 0)) {
        uVar9 = uVar9 - 4;
      }
      if ((uVar9 & uVar8 & 4) != 0) {
        uVar9 = uVar9 - 4;
        uVar8 = uVar8 - 4;
      }
      if (((uVar9 & 1) != 0) && ((uVar8 & 2) != 0)) {
        uVar8 = uVar8 - 2;
      }
LAB_82b83160:
      uVar8 = uVar9 | uVar8;
    }
    else {
      if (uVar10 == 0xd) {
        puVar7 = (unsigned int *)piVar5[0xc];
        puVar2 = (unsigned int *)piVar5[0xd];
        uVar10 = ((unsigned int *)piVar5[0xb])[3];
        if ((*(unsigned int *)(uVar10 + 8) & 0x3f80) == 16000) {
          uVar1 = *(unsigned int *)piVar5[0xb];
          iVar3 = (int)(uVar11 << 1);
          dVar14 = (double)fn_82B80EF8(uVar10,(uVar1 >> 5 & 0xff) >> iVar3 & 3,uVar1 & 0x1f);
          if (dVar14 != dVar15) {
            puVar7 = puVar2;
          }
          uVar10 = *puVar7;
          if ((uVar10 & 0x18) == 0) {
            if (((uVar10 & 2) == 0) || ((uVar8 & 1) == 0)) {
              if (((uVar10 & 4) == 0) || (bVar4 = false, (uVar8 & 1) == 0)) {
                bVar4 = true;
              }
            }
            else {
              bVar4 = false;
            }
            if ((bVar4) &&
               ((param_7 == 0 ||
                (((*(unsigned int *)(*(int *)(puVar7[3] + 0x1c) + 0x4c) ^
                  *(unsigned int *)(*(int *)(param_7 + 0x1c) + 0x4c)) & 0x7ffff) == 0)))) {
              piVar13 = (int *)puVar7[3];
              uVar1 = (uVar10 >> 5 & 0xff) >> iVar3;
              goto LAB_82b83120;
            }
          }
        }
        break;
      }
      if (uVar10 == 0x6e) {
        puVar7 = (unsigned int *)piVar5[iVar12 + 0xb];
        uVar10 = *puVar7;
        uVar9 = (unsigned __int64)uVar10 & 0x1f;
        if ((uVar10 & 0x18) == 0) {
          if (((uVar10 & 2) == 0) || ((uVar8 & 1) == 0)) {
            if (((uVar10 & 4) == 0) || (bVar4 = false, (uVar8 & 1) == 0)) {
              bVar4 = true;
            }
          }
          else {
            bVar4 = false;
          }
          if ((bVar4) &&
             ((param_7 == 0 ||
              (((*(unsigned int *)(*(int *)(puVar7[3] + 0x1c) + 0x4c) ^
                *(unsigned int *)(*(int *)(param_7 + 0x1c) + 0x4c)) & 0x7ffff) == 0)))) {
            uVar11 = (unsigned __int64)(uVar10 >> 5) & 3;
            if (((uVar10 & 4) != 0) && ((uVar8 & 2) != 0)) {
              uVar9 = uVar9 - 4;
            }
            if ((uVar9 & uVar8 & 4) != 0) {
              uVar9 = uVar9 - 4;
              uVar8 = uVar8 - 4;
            }
            if (((uVar9 & 1) != 0) && ((uVar8 & 2) != 0)) {
              uVar8 = uVar8 - 2;
            }
            piVar13 = (int *)puVar7[3];
            goto LAB_82b83160;
          }
        }
        break;
      }
      if ((uVar10 != 0x70) || (param_6 != 0)) break;
      puVar7 = (unsigned int *)*piVar5;
      if ((puVar7 == (unsigned int *)0x0) || (bVar4 = true, puVar7[1] == 0)) {
        bVar4 = false;
      }
      if (((bVar4) || (puVar7 == (unsigned int *)0x0)) || (piVar13 = (int *)puVar7[3], piVar5 == piVar13))
      break;
      uVar10 = *(unsigned int *)(piVar5[7] + 0x30);
      if ((*(unsigned int *)(((uVar10 >> 5 & 0x3fff) + 1) * 4 + *(int *)(piVar13[7] + 0x28)) &
          1 << (uVar10 & 0x1f)) != 0) break;
      uVar1 = *puVar7;
      uVar9 = (unsigned __int64)uVar1 & 0x1f;
      if ((((uVar1 & 0x18) == 0) || ((uVar8 & 0x18) == 0)) &&
         (((uVar1 & 2) == 0 || ((uVar8 & 1) == 0)))) {
        if (((uVar1 & 4) == 0) || (bVar4 = false, (uVar8 & 1) == 0)) {
          bVar4 = true;
        }
      }
      else {
        bVar4 = false;
      }
      if ((!bVar4) ||
         ((((param_7 != 0 &&
            (((*(unsigned int *)(*(int *)(param_7 + 0x1c) + 0x4c) ^ *(unsigned int *)(piVar13[7] + 0x4c)) & 0x7ffff)
             != 0)) || ((uVar10 >> 0x15 & 1) != 0)) || ((uVar10 >> 0x13 & 1) != 0)))) break;
      uVar11 = (unsigned __int64)(uVar1 >> 5) & 3;
      if (((uVar1 & 4) != 0) && ((uVar8 & 2) != 0)) {
        uVar9 = uVar9 - 4;
      }
      if ((uVar9 & uVar8 & 4) != 0) {
        uVar9 = uVar9 - 4;
        uVar8 = uVar8 - 4;
      }
      if (((uVar9 & 1) != 0) && ((uVar8 & 2) != 0)) {
        uVar8 = uVar8 - 2;
      }
      uVar8 = uVar8 | uVar9;
    }
    iVar12 = (int)uVar11;
    piVar5 = piVar13;
  }
  *param_3 = (unsigned int)piVar5;
  *param_4 = iVar12;
  *param_5 = (int)uVar8;
  return;
}

