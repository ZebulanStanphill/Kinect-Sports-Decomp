extern int fn_82CE1258();
extern int memcpy();
extern int memset();


void fn_828EC900(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned char *puVar12;
  unsigned char *puVar13;
  unsigned int *puVar14;
  __int64 lVar15;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(char *)(param_1 + 0x1e1) == '\0') {
      if (*(char *)(param_1 + 0x1e2) != '\0') {
        if (*(int *)(param_1 + 0x224) == 1) {
          cVar1 = *(char *)(param_1 + 0x14e);
          cVar2 = *(char *)(param_1 + 0x14b);
          cVar3 = *(char *)(param_1 + 0x14a);
          cVar4 = *(char *)(param_1 + 0x148);
          cVar5 = *(char *)(param_1 + 0x14f);
          cVar6 = *(char *)(param_1 + 0x14d);
          cVar7 = *(char *)(param_1 + 0x14c);
          cVar8 = *(char *)(param_1 + 0x149);
          lVar15 = 8;
          puVar13 = (unsigned char *)(param_1 + 0x1e7);
          puVar12 = (unsigned char *)(param_1 + 0x13);
          do {
            puVar13 = puVar13 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *puVar13;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          memcpy(param_1 + 0x40,param_1 + 0x1f0,0x10);
          memcpy(param_1 + 0x1c,param_1 + 0x200,0x24);
          *(unsigned int *)(param_1 + 300) = 0;
          *(unsigned int *)(param_1 + 0x130) = 0;
          puVar14 = (unsigned int *)(param_1 + 0x58);
          lVar15 = 7;
          do {
            puVar14 = puVar14 + 1;
            *puVar14 = 0;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          iVar10 = fn_82CE1258(-(unsigned __int64)(cVar1 != '\0') & 0x200 |
                                     -(unsigned __int64)(cVar2 != '\0') & 0x20 |
                                     -(unsigned __int64)(cVar3 != '\0') & 8 |
                                     -(unsigned __int64)(cVar4 != '\0') & 2 |
                                     -(unsigned __int64)(cVar5 != '\0') & 0x400 |
                                     -(unsigned __int64)(cVar6 != '\0') & 0x100 |
                                     -(unsigned __int64)(cVar7 != '\0') & 0x10 |
                                     -(unsigned __int64)(cVar8 != '\0') & 4,
                                     *(unsigned int *)(param_1 + 0x1e4),
                                     *(unsigned int *)(param_1 + 0x150),
                                     *(unsigned int *)(param_1 + 0x154),param_1 + 0x50,param_1 + 0x14,
                                     param_1 + 0x5c,param_1 + 0x58);
          if (iVar10 == 0x3e5) {
            *(unsigned int *)(param_1 + 8) = 3;
            *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0x1e4);
            *(unsigned int *)(param_1 + 0x10) = 1;
            *(unsigned char *)(param_1 + 0x136) = *(unsigned char *)(param_1 + 0x148);
            *(unsigned char *)(param_1 + 0x137) = *(unsigned char *)(param_1 + 0x149);
            *(unsigned char *)(param_1 + 0x138) = *(unsigned char *)(param_1 + 0x14a);
            *(unsigned char *)(param_1 + 0x139) = *(unsigned char *)(param_1 + 0x14b);
            *(unsigned char *)(param_1 + 0x13a) = *(unsigned char *)(param_1 + 0x14c);
            *(unsigned char *)(param_1 + 0x13b) = *(unsigned char *)(param_1 + 0x14d);
            *(unsigned char *)(param_1 + 0x13c) = *(unsigned char *)(param_1 + 0x14e);
            *(unsigned char *)(param_1 + 0x13d) = *(unsigned char *)(param_1 + 0x14f);
            *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(param_1 + 0x150);
            *(unsigned int *)(param_1 + 0x144) = *(unsigned int *)(param_1 + 0x154);
            *(unsigned char *)(param_1 + 0x1e2) = 0;
            return;
          }
          *(int *)(param_1 + 300) = iVar10;
          uVar11 = thunk_FUN_82a2b798();
          *(unsigned int *)(param_1 + 0x130) = uVar11;
        }
        else if (*(int *)(param_1 + 0x224) == 2) {
          puVar13 = (unsigned char *)(param_1 + 0x1e7);
          puVar12 = (unsigned char *)(param_1 + 0x13);
          lVar15 = 8;
          do {
            puVar13 = puVar13 + 1;
            puVar12 = puVar12 + 1;
            *puVar12 = *puVar13;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          memcpy(param_1 + 0x40,param_1 + 0x1f0,0x10);
          memcpy(param_1 + 0x1c,param_1 + 0x200,0x24);
          puVar14 = (unsigned int *)(param_1 + 0x58);
          lVar15 = 7;
          do {
            puVar14 = puVar14 + 1;
            *puVar14 = 0;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          *(unsigned int *)(param_1 + 300) = 0;
          *(unsigned int *)(param_1 + 0x130) = 0;
          iVar10 = fn_82CE1258(0x20,*(unsigned int *)(param_1 + 0x1e4),
                                     *(unsigned int *)(param_1 + 0x150),
                                     *(unsigned int *)(param_1 + 0x154),param_1 + 0x50,param_1 + 0x14,
                                     param_1 + 0x5c,param_1 + 0x58);
          if (iVar10 == 0x3e5) {
            *(unsigned char *)(param_1 + 0x1e2) = 0;
            *(unsigned int *)(param_1 + 8) = 3;
            *(unsigned int *)(param_1 + 0x10) = 2;
            *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0x1e4);
            *(unsigned char *)(param_1 + 0x136) = 0;
            *(unsigned char *)(param_1 + 0x137) = 0;
            *(unsigned char *)(param_1 + 0x138) = 0;
            *(unsigned char *)(param_1 + 0x139) = 1;
            *(unsigned char *)(param_1 + 0x13a) = 0;
            *(unsigned char *)(param_1 + 0x13b) = 0;
            *(unsigned char *)(param_1 + 0x13c) = 0;
            *(unsigned char *)(param_1 + 0x13d) = 0;
            *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(param_1 + 0x150);
            *(unsigned int *)(param_1 + 0x144) = *(unsigned int *)(param_1 + 0x154);
            *(unsigned char *)(param_1 + 0x1e2) = 0;
            return;
          }
          *(int *)(param_1 + 300) = iVar10;
          uVar11 = thunk_FUN_82a2b798();
          *(unsigned char *)(param_1 + 0x1e2) = 0;
          *(unsigned int *)(param_1 + 0x130) = uVar11;
          *(unsigned char *)(param_1 + 0x1e2) = 0;
          return;
        }
        *(unsigned char *)(param_1 + 0x1e2) = 0;
      }
    }
    else {
      uVar9 = *(unsigned int *)(param_1 + 0x224);
      if (uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        memset(param_1 + 0x14,0,0x3c);
      }
      if (uVar9 == 1) {
                    /* WARNING: Subroutine does not return */
        memset(param_1 + 0x14,0,0x3c);
      }
      if (uVar9 < 3) {
                    /* WARNING: Subroutine does not return */
        memset(param_1 + 0x14,0,0x3c);
      }
      *(unsigned char *)(param_1 + 0x1e1) = 0;
    }
  }
  return;
}

