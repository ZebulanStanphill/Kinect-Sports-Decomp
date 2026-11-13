typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_9c;
extern int fn_82A9FA30();
extern int fn_82C47D90();
extern int fn_82C4D2F0();
extern int fn_82C4E1D0();
extern int fn_82C52CF8();
extern int fn_82C7BE90();
extern int fn_82C7BFB8();
extern int memcpy();
extern unsigned int iStack_a0;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;


unsigned __int64
fn_82C7C118(int param_1,unsigned short *param_2,unsigned char *param_3,int *param_4,unsigned int *param_5,int *param_6)

{
  unsigned char bVar1;
  unsigned short uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  unsigned short *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned short uVar10;
  unsigned int uVar9;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned short *puVar15;
  unsigned short *puVar16;
  unsigned short *puVar17;
  unsigned char *pbVar18;
  int iVar19;
  unsigned short *puStack0000001c;
  unsigned char *pbStack00000024;
  unsigned int *puStack00000034;
  int iStack_a0;
  unsigned int auStack_9c [39];
  
  iStack_a0 = *param_6;
  puVar15 = *(unsigned short **)(param_1 + 0x5608);
  iVar13 = *(int *)(param_1 + 0x5604);
  *(unsigned int *)(param_1 + 0x5620) = 0;
  uVar14 = 0;
  bVar3 = false;
  *(unsigned int *)(*(int *)(param_1 + 0x50) + 0x20) = 1;
  bVar4 = false;
  bVar5 = false;
  *(unsigned int *)(param_1 + 0x5624) = 0;
  uVar12 = 0;
  puStack0000001c = param_2;
  pbStack00000024 = param_3;
  puStack00000034 = param_5;
  if (*(int *)(param_1 + 0xe94) == 0) {
    auStack_9c[0] = 0;
    uVar7 = fn_82C47D90(param_1,0,auStack_9c,0,*(unsigned int *)(param_1 + 0x5620));
    if ((int)uVar7 != 0) {
      return uVar7;
    }
  }
  if (((puStack0000001c == (unsigned short *)0x0) || (param_4 == (int *)0x0)) || (param_5 == (unsigned int *)0x0)) {
    uVar12 = 0xfffffffffffffffd;
  }
  else {
    pbVar18 = (unsigned char *)0x0;
    if (pbStack00000024 < (unsigned char *)0x4) {
      memcpy(puVar15,puStack0000001c,pbStack00000024);
      pbVar18 = pbStack00000024;
    }
    if (*(unsigned char **)(param_1 + 0x560c) < pbVar18 + (int)pbStack00000024) {
      uVar7 = fn_82C7BFB8(param_1,pbVar18);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      puVar15 = *(unsigned short **)(param_1 + 0x5608);
      iVar13 = *(int *)(param_1 + 0x5604);
    }
    while (pbStack00000024 < (unsigned char *)0x4) {
      if (iStack_a0 == 0) goto LAB_82c7c2e4;
      fn_82A9FA30(*(unsigned int *)(param_1 + 0xd30),0,&stack0x0000001c,4,&stack0x00000024,&iStack_a0
                  );
      *(int *)(*(int *)(param_1 + 0x50) + 0x18) = iStack_a0;
      if (*(unsigned char **)(param_1 + 0x560c) < pbVar18 + (int)pbStack00000024) {
        uVar7 = fn_82C7BFB8(param_1,pbVar18);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        puVar15 = *(unsigned short **)(param_1 + 0x5608);
        iVar13 = *(int *)(param_1 + 0x5604);
      }
      memcpy(pbVar18 + (int)puVar15,puStack0000001c,pbStack00000024);
      pbVar18 = pbVar18 + (int)pbStack00000024;
      puStack0000001c = puVar15;
      pbStack00000024 = pbVar18;
    }
    if (((*(unsigned char *)puStack0000001c != 0) || ((unsigned char)*puStack0000001c != 0)) ||
       (iVar8 = 0, *(unsigned char *)(puStack0000001c + 1) != 1)) {
LAB_82c7c2e4:
      iVar8 = 1;
    }
    *(int *)(param_1 + 0x55ec) = iVar8;
    *(unsigned int *)(param_1 + 0x561c) = 0;
    if (iVar8 == 0) {
joined_r0x82c7c320:
      if ((pbStack00000024 < (unsigned char *)0x4) || (bVar3)) {
        if (*(unsigned int *)(param_1 + 0x560c) <= uVar14) {
          return 1;
        }
        if ((iStack_a0 != 0) && (!bVar5)) {
          iVar8 = iVar13 + uVar14;
          if ((uVar14 < 3) ||
             (((*(char *)(iVar8 + -1) != '\x01' || (*(char *)(iVar8 + -2) != '\0')) ||
              (*(char *)(iVar8 + -3) != '\0')))) {
            if (((uVar14 < 2) || (*(char *)(iVar8 + -1) != '\0')) || (*(char *)(iVar8 + -2) != '\0')
               ) {
              if ((uVar14 == 0) || (*(char *)(iVar8 + -1) != '\0')) {
                *(unsigned int *)(param_1 + 0x55f4) = 0;
              }
              else {
                *(unsigned char *)(param_1 + 0x5600) = 0;
                *(unsigned int *)(param_1 + 0x55f4) = 1;
              }
            }
            else {
              *(unsigned char *)(param_1 + 0x5600) = 0;
              *(unsigned int *)(param_1 + 0x55f4) = 2;
              *(unsigned char *)(param_1 + 0x5601) = 0;
            }
          }
          else {
            *(unsigned char *)(param_1 + 0x5600) = 0;
            *(unsigned int *)(param_1 + 0x55f4) = 3;
            *(unsigned char *)(param_1 + 0x5601) = 0;
            *(unsigned char *)(param_1 + 0x5602) = 1;
          }
          uVar14 = uVar14 - *(int *)(param_1 + 0x55f4);
        }
        *param_4 = iVar13;
        *param_5 = uVar14;
        *param_6 = iStack_a0;
        return uVar12;
      }
      do {
        puVar6 = puStack0000001c;
        bVar3 = false;
        puVar17 = puStack0000001c + 2;
        bVar1 = *(unsigned char *)((int)puStack0000001c + 3);
        if ((unsigned char *)0x7 < pbStack00000024) {
          puVar16 = puStack0000001c + 3;
          pbVar18 = (unsigned char *)0x6;
          uVar10 = *puVar17;
          if ((unsigned char *)0x6 < pbStack00000024 + -1) {
            do {
              uVar2 = *puVar16;
              if ((uVar10 & uVar2) == 0) {
                if ((uVar10 == 0) && ((uVar2 & 0xff00) == 0x100)) {
                  puVar16 = puVar16 + -1;
                }
                else {
                  if (((uVar10 & 0xff) != 0) || ((uVar2 != 1 || (pbStack00000024 <= pbVar18 + 2))))
                  goto LAB_82c7c3a8;
                  puVar16 = (unsigned short *)((int)puVar16 + -1);
                }
                if (puVar16 != (unsigned short *)0x0) goto LAB_82c7c3dc;
                break;
              }
LAB_82c7c3a8:
              pbVar18 = pbVar18 + 2;
              puVar16 = puVar16 + 1;
              uVar10 = uVar2;
            } while (pbVar18 < pbStack00000024 + -1);
          }
        }
        puVar16 = (unsigned short *)((int)puStack0000001c + (int)pbStack00000024);
        bVar3 = true;
LAB_82c7c3dc:
        uVar9 = (unsigned int)bVar1;
        *(unsigned int *)(param_1 + 22000) = uVar9;
        if (((bVar1 == 0xd) || (bVar1 == 0xc)) || (bVar1 == 0xb)) {
          bVar4 = true;
        }
        if (((!bVar3) || (bVar4)) || (iStack_a0 != 1)) goto LAB_82c7c4b4;
        iVar8 = (int)puVar16 - (int)puStack0000001c;
        memcpy(puVar15,puStack0000001c,iVar8);
        fn_82A9FA30(*(unsigned int *)(param_1 + 0xd30),0,&stack0x0000001c,4,&stack0x00000024,
                     &iStack_a0);
        *(int *)(*(int *)(param_1 + 0x50) + 0x18) = iStack_a0;
        if (*(unsigned char **)(param_1 + 0x560c) < pbStack00000024 + iVar8) {
          uVar7 = fn_82C7BFB8(param_1,iVar8);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          puVar15 = *(unsigned short **)(param_1 + 0x5608);
          iVar13 = *(int *)(param_1 + 0x5604);
        }
        memcpy((unsigned char *)(iVar8 + (int)puVar15),puStack0000001c,pbStack00000024);
        pbStack00000024 = pbStack00000024 + iVar8;
        puStack0000001c = puVar15;
      } while( true );
    }
    *param_5 = (unsigned int)pbStack00000024;
    uVar12 = 0;
    *param_4 = (int)puStack0000001c;
    *param_6 = iStack_a0;
  }
  return uVar12;
LAB_82c7c4b4:
  if ((iStack_a0 != 0) && (bVar3)) {
    uVar11 = (int)puVar16 - (int)puVar17;
    if ((uVar11 < 3) ||
       (((*(unsigned char *)((int)puVar16 + -1) != 1 || (*(unsigned char *)(puVar16 + -1) != 0)) ||
        (*(unsigned char *)((int)puVar16 + -3) != 0)))) {
      if (((uVar11 < 2) || (*(unsigned char *)((int)puVar16 + -1) != 0)) || (*(unsigned char *)(puVar16 + -1) != 0)) {
        if ((uVar11 == 0) || (*(unsigned char *)((int)puVar16 + -1) != 0)) {
          *(unsigned int *)(param_1 + 0x55f4) = 0;
        }
        else {
          *(unsigned char *)(param_1 + 0x5600) = 0;
          *(unsigned int *)(param_1 + 0x55f4) = 1;
        }
      }
      else {
        *(unsigned char *)(param_1 + 0x5600) = 0;
        *(unsigned int *)(param_1 + 0x55f4) = 2;
        *(unsigned char *)(param_1 + 0x5601) = 0;
      }
    }
    else {
      *(unsigned char *)(param_1 + 0x5600) = 0;
      *(unsigned int *)(param_1 + 0x55f4) = 3;
      *(unsigned char *)(param_1 + 0x5601) = 0;
      *(unsigned char *)(param_1 + 0x5602) = 1;
    }
    bVar5 = true;
    puVar16 = (unsigned short *)((uVar11 - *(int *)(param_1 + 0x55f4)) + (int)puVar17);
  }
  if (((bVar1 == 0xd) || (bVar1 == 0xc)) || (bVar1 == 0xb)) {
    uVar9 = (int)puVar16 - (int)puVar17;
    if (uVar9 != 0) {
      pbVar18 = (unsigned char *)(uVar9 + (int)puVar17);
      do {
        pbVar18 = pbVar18 + -1;
        if (*pbVar18 != 0) break;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (*(int *)(param_1 + 0xe94) == 0) {
      if (bVar1 == 0xc) {
        *(unsigned int *)(param_1 + 0x55cc) = uVar9;
        *(unsigned int *)(param_1 + 0x5624) = uVar14;
        *(unsigned int *)(param_1 + 0x5620) = 1;
        *(unsigned int *)(param_1 + 0x55c0) = *(unsigned int *)(param_1 + 0x55bc);
      }
      if (bVar1 == 0xd) {
        *(unsigned int *)(param_1 + 0x55c8) = uVar9;
        *(int *)(param_1 + 0x55e8) = *(int *)(param_1 + 0x55e8) + 1;
      }
      if (bVar1 == 0xb) {
        if (uVar9 < 2) {
          if ((iStack_a0 == 1) && (*(unsigned int *)(param_1 + 0x561c) = 1, uVar9 == 1)) {
            iVar8 = *(int *)(param_1 + 0x55f4);
            if (2 < iVar8) {
              return 1;
            }
            if (iVar8 != 0) {
              iVar19 = iVar8;
              do {
                *(unsigned char *)(param_1 + 0x5600 + iVar8) =
                     *(unsigned char *)(param_1 + 0x55ff + iVar8);
                iVar8 = iVar8 + -1;
                iVar19 = iVar19 + -1;
              } while (iVar19 != 0);
            }
            uVar9 = 0;
            *(unsigned char *)(param_1 + 0x5600) = *(unsigned char *)puVar17;
            *(int *)(param_1 + 0x55f4) = *(int *)(param_1 + 0x55f4) + 1;
          }
        }
        else {
          auStack_9c[0] =
               (unsigned int)(*(unsigned char *)((int)puStack0000001c + 5) >> 7) + (unsigned int)*(unsigned char *)puVar17 * 2;
          pbVar18 = (unsigned char *)((int)puStack0000001c + 5);
          uVar7 = fn_82C47D90(param_1,1,auStack_9c,uVar9,*(unsigned int *)(param_1 + 0x5620));
          iVar8 = (int)uVar7;
          param_5 = puStack00000034;
          if (iVar8 != 0) {
            if (iVar8 != 1) {
              if (iVar8 == -1) {
                return 1;
              }
              return uVar7;
            }
            if (*(int *)(param_1 + 0x560c) - 2U < uVar14) {
              return uVar7;
            }
            uVar12 = 1;
            uVar9 = uVar9 - 2;
            *(char *)(iVar13 + uVar14) = (char)(auStack_9c[0] >> 1);
            puVar17 = puVar6 + 3;
            *(unsigned char *)(iVar13 + uVar14 + 1) = *pbVar18 & 0x7f;
            uVar14 = uVar14 + 2;
          }
        }
      }
    }
    if (uVar14 < *(unsigned int *)(param_1 + 0x560c)) {
      memcpy(iVar13 + uVar14,puVar17,uVar9);
    }
    uVar14 = uVar9 + uVar14;
    goto LAB_82c7c8c0;
  }
  iVar8 = (int)puVar16 - (int)puVar17;
  if (uVar9 < 0x1d) {
    if (uVar9 == 0x1c) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,7,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
    if (uVar9 < 0x10) {
      if (uVar9 == 0xf) {
        fn_82C4E1D0(*(unsigned int *)(param_1 + 0x50),puVar17,iVar8,0,
                      *(int *)(param_1 + 0x3cb0) == 7);
        uVar7 = fn_82C52CF8(param_1,1);
        if ((int)uVar7 != 0) {
          *(unsigned int *)(param_1 + 0xe94) = 1;
          return uVar7;
        }
        goto LAB_82c7c8c0;
      }
      if (uVar9 == 10) {
        *(unsigned int *)(param_1 + 0xe98) = 1;
        goto LAB_82c7c8c0;
      }
      if (uVar9 == 0xe) {
        fn_82C4E1D0(*(unsigned int *)(param_1 + 0x50),puVar17,iVar8,0,
                      *(int *)(param_1 + 0x3cb0) == 7);
        if (*(int *)(param_1 + 0xe94) != 0) {
          return 1;
        }
        uVar7 = fn_82C4D2F0(param_1);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        goto LAB_82c7c8c0;
      }
    }
    else if (uVar9 == 0x1b) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,8,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
  }
  else if (uVar9 < 0x20) {
    if (uVar9 == 0x1f) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,4,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
    if (uVar9 == 0x1d) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,6,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
    if (uVar9 == 0x1e) {
      if ((iStack_a0 != 1) || (uVar7 = 1, !bVar3)) {
        uVar7 = 0;
      }
      fn_82C7BE90(param_1,5,puVar17,iVar8,uVar7);
      goto LAB_82c7c8c0;
    }
  }
  else if ((0x1f < uVar9) && (uVar9 < 0x41)) goto LAB_82c7c8c0;
  uVar12 = 1;
LAB_82c7c8c0:
  pbStack00000024 = (unsigned char *)((int)puStack0000001c + ((int)pbStack00000024 - (int)puVar16));
  puStack0000001c = puVar16;
  goto joined_r0x82c7c320;
}

