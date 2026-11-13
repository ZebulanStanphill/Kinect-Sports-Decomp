typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_ac;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b4;
extern unsigned int *auStack_b8;
extern int fn_82ABE250();
extern int fn_82ACB8B8();
extern int fn_82AD6090();
extern int fn_82ADD198();
extern int fn_82B4B048();
extern int fn_82B82D28();
extern unsigned int iStack_bc;
extern unsigned int uStack_a4;
extern unsigned int uStack_c0;


unsigned __int64 fn_82AD7330(int param_1,int param_2,int param_3,char param_4,int *param_5)

{
  unsigned int uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  unsigned int *puVar6;
  char cVar9;
  int iVar7;
  int iVar8;
  int *piVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  int *piVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned int uStack_c0;
  int iStack_bc;
  unsigned char auStack_b8 [4];
  unsigned char auStack_b4 [4];
  unsigned char auStack_b0 [4];
  unsigned char auStack_ac [8];
  unsigned int uStack_a4;
  int aiStack_a0 [4];
  
  if (((((*(unsigned int *)(param_2 + 0x30) & 0x10000000) != 0) ||
       ((*(unsigned int *)(param_3 + 0x30) & 0x10000000) != 0)) ||
      ((*(unsigned int *)(param_2 + 0x44) & 0x80000000) != 0)) ||
     (((*(unsigned int *)(param_3 + 0x44) & 0x80000000) != 0 ||
      (((*(unsigned int *)(param_2 + 0x4c) ^ *(unsigned int *)(param_3 + 0x4c)) & 0x7ffff) != 0)))) {
    return 0;
  }
  for (uVar1 = *(unsigned int *)(param_2 + 0x24); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    uVar13 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
    if ((uVar13 != 0x5a) && (uVar13 != 0x40)) {
      return 0;
    }
  }
  uVar12 = 1;
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,0x24);
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)(puVar6 + 1) | 1;
  for (uVar1 = *(unsigned int *)(param_3 + 0x14); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) != 0x3800) goto LAB_82ad7758;
  }
  for (uVar1 = *(unsigned int *)(param_3 + 0x1c); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x3700) {
      uVar13 = 0;
      puVar16 = &uStack_a4;
      piVar15 = (int *)(uVar1 + 0x2c);
      for (uVar17 = 0; uVar14 = *(unsigned int *)(uVar1 + 8) >> 0x13 & 7, uVar17 < uVar14;
          uVar17 = uVar17 + 1) {
        if ((*(unsigned int *)(*(int *)(*piVar15 + 0xc) + 8) & 0x3f80) == 0x3800) {
          fn_82B82D28(*piVar15,0,&uStack_c0,auStack_b4,auStack_b8,0,uVar1,0);
          uVar13 = uVar13 + 1;
          puVar16 = puVar16 + 1;
          *puVar16 = uStack_c0;
        }
        piVar15 = piVar15 + 1;
      }
      uVar14 = uVar14 - uVar13;
      uVar17 = 0;
      if (uVar13 != 0) {
        piVar15 = aiStack_a0;
        do {
          iVar8 = *piVar15;
          uVar11 = 0;
          if (uVar17 != 0) {
            piVar10 = aiStack_a0;
            do {
              if (iVar8 == *piVar10) break;
              uVar11 = uVar11 + 1;
              piVar10 = piVar10 + 1;
            } while (uVar11 < uVar17);
          }
          if (uVar11 == uVar17) {
            uVar14 = (*(unsigned int *)(iVar8 + 8) >> 0xe & 7) + uVar14;
            cVar9 = fn_82ACB8B8(puVar6,iVar8);
            if (cVar9 != '\0') goto LAB_82ad7758;
            if ((puVar6[1] & 1) == 0) {
              uVar11 = *puVar6 & 0xfffffffe;
              iVar7 = uVar11 - 4;
              if ((iVar7 == 0) || (*(unsigned int *)(uVar11 + 8) < *(int *)(uVar11 + 4) + 1U))
              goto LAB_82ad757c;
            }
            else {
LAB_82ad757c:
              iVar7 = fn_82AD6090(puVar6,1);
            }
            iVar2 = *(int *)(iVar7 + 8);
            *(int *)(iVar7 + 8) = iVar2 + 1;
            *(int *)((iVar2 + 4) * 4 + iVar7) = iVar8;
          }
          uVar17 = uVar17 + 1;
          piVar15 = piVar15 + 1;
        } while (uVar17 < uVar13);
      }
      if (4 < uVar14) goto LAB_82ad7758;
      for (uVar17 = *(unsigned int *)(param_2 + 0x1c); ((uVar17 & 1) == 0 && (uVar17 != 0));
          uVar17 = *(unsigned int *)((uVar17 & 0xfffffffe) + 0x28)) {
        if ((*(unsigned int *)(uVar17 + 8) & 0x3f80) == 0x3700) {
          bVar5 = false;
          piVar15 = (int *)(uVar17 + 0x2c);
          for (uVar14 = 0; uVar14 < (*(unsigned int *)(uVar17 + 8) >> 0x13 & 7); uVar14 = uVar14 + 1) {
            iVar8 = *piVar15;
            fn_82B82D28(iVar8,0,&iStack_bc,auStack_ac,auStack_b0,0,uVar17,0);
            uVar11 = 0;
            if (uVar13 != 0) {
              piVar10 = aiStack_a0;
              do {
                if (iStack_bc == *piVar10) goto LAB_82ad7758;
                uVar11 = uVar11 + 1;
                piVar10 = piVar10 + 1;
              } while (uVar11 < uVar13);
            }
            iVar8 = *(int *)(iVar8 + 0xc);
            if ((*(unsigned int *)(iVar8 + 8) & 0x3f80) == 0x3800) {
              iVar8 = fn_82ADD198(param_1,*(unsigned short *)(iVar8 + 0x12));
              piVar10 = (int *)(uVar1 + 0x2c);
              for (uVar11 = 0; uVar11 < (*(unsigned int *)(uVar1 + 8) >> 0x13 & 7); uVar11 = uVar11 + 1) {
                piVar3 = *(int **)(*piVar10 + 0xc);
                if ((piVar3[2] & 0x3f80U) == 0x3800) {
                  if (param_4 != '\0') {
                    if ((*piVar3 == 0) || (bVar4 = true, *(int *)(*piVar3 + 4) == 0)) {
                      bVar4 = false;
                    }
                    if (bVar4) goto LAB_82ad76f0;
                  }
                  iVar7 = fn_82ADD198(param_1,*(unsigned short *)((int)piVar3 + 0x12));
                  if (iVar7 == iVar8) {
                    bVar5 = true;
                  }
                }
LAB_82ad76f0:
                piVar10 = piVar10 + 1;
              }
            }
            piVar15 = piVar15 + 1;
          }
          if (bVar5) {
            *param_5 = *param_5 + 1;
          }
        }
      }
    }
  }
LAB_82ad775c:
  fn_82B4B048(puVar6);
  *puVar6 = *(unsigned int *)(param_1 + 0x3d0);
  *(unsigned int **)(param_1 + 0x3d0) = puVar6;
  return uVar12;
LAB_82ad7758:
  uVar12 = 0;
  goto LAB_82ad775c;
}

