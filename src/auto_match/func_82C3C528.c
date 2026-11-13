extern unsigned int *auStack_90;
extern int fn_82A6CF00();
extern int fn_82A6D200();
extern int fn_82A75410();
extern int fn_82BA02A8();
extern int fn_82C30370();
extern int fn_82C398E0();
extern int fn_82C3B788();


unsigned __int64 fn_82C3C528(int *param_1,int param_2)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned char *pbVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned short *puVar17;
  __int64 lVar16;
  int *piVar18;
  unsigned int auStack_90;
  
  uVar5 = param_1[0xe];
  iVar2 = *(int *)(param_2 + 0x18);
  iVar3 = *param_1;
  uVar14 = param_1[0x41];
  piVar18 = param_1 + 0x38;
  uVar4 = param_1[0x42];
  iVar7 = param_1[0x40];
  uVar8 = 0;
  pbVar12 = (unsigned char *)param_1[0x3f];
  uVar10 = param_1[0x44];
  uVar9 = param_1[0x43];
  if (6 < uVar5) {
    return 0;
  }
  if (uVar5 == 0) {
LAB_82c3c5f0:
    uVar15 = (unsigned __int64)uVar4;
    uVar5 = 0x17;
    uVar13 = (unsigned __int64)uVar10;
    if (uVar15 < 0x17) {
      if (uVar13 != 0) {
        uVar11 = 0x20 - uVar15;
        if (uVar13 <= (0x20 - uVar15 & 0xffffffff)) {
          uVar11 = uVar13;
        }
        uVar10 = uVar10 - (unsigned int)uVar11;
        uVar14 = uVar14 << ((unsigned int)uVar11 & 0x3f) | uVar9 >> (uVar10 & 0x3f);
        uVar9 = (1 << (uVar10 & 0x3f)) - 1U & uVar9;
        uVar15 = uVar11 + uVar15;
      }
      uVar13 = (unsigned __int64)uVar14;
      if ((int (**)())param_1[0x4d] == fn_82BA02A8) {
        for (; ((uVar15 & 0xffffffff) < 0x19 && (uVar14 = (unsigned int)uVar13, iVar7 != 0));
            iVar7 = iVar7 + -1) {
          uVar15 = uVar15 + 8;
          uVar13 = (uVar13 & 0xffffff) << 8 | (unsigned __int64)*pbVar12;
          uVar14 = (unsigned int)uVar13;
          pbVar12 = pbVar12 + 1;
        }
      }
      else {
        for (; ((uVar15 & 0xffffffff) < 0x19 && (uVar14 = (unsigned int)uVar13, iVar7 != 0));
            iVar7 = iVar7 + -1) {
          uVar11 = (*(int (**)())param_1[0x4d])(*pbVar12);
          uVar15 = uVar15 + 8;
          uVar13 = (uVar13 & 0xffffff) << 8 | uVar11 & 0xffffffff000000ff;
          uVar14 = (unsigned int)uVar13;
          pbVar12 = pbVar12 + 1;
        }
      }
      if ((uVar15 & 0xffffffff) < 0x17) {
        param_1[0x41] = uVar14;
        param_1[0x42] = (int)uVar15;
        param_1[0x40] = iVar7;
        param_1[0x3f] = (int)pbVar12;
        param_1[0x44] = uVar10;
        param_1[0x43] = uVar9;
        uVar8 = fn_82A6CF00(piVar18,1,0x17);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        uVar15 = (unsigned __int64)(unsigned int)param_1[0x42];
        uVar14 = param_1[0x41];
        iVar7 = param_1[0x40];
        pbVar12 = (unsigned char *)param_1[0x3f];
        uVar10 = param_1[0x44];
        uVar9 = param_1[0x43];
        if (uVar15 < 0x17) {
          uVar5 = param_1[0x42];
        }
      }
    }
    uVar5 = (uVar14 >> ((int)(short)((short)uVar15 - (short)uVar5) & 0x3fU)) <<
            (0x20 - uVar5 & 0x3f);
    puVar17 = (unsigned short *)(iVar2 + (uVar5 >> 0x1d & 6));
    uVar1 = *puVar17;
    uVar13 = (unsigned __int64)uVar1;
    if ((uVar1 & 0x8000) == 0) {
      uVar11 = (unsigned __int64)uVar5;
      puVar17 = puVar17 + (uVar5 >> 0x1c & 3) + (unsigned int)uVar1;
      uVar1 = *puVar17;
      uVar13 = (unsigned __int64)uVar1;
      if ((uVar1 & 0x8000) == 0) {
        puVar17 = puVar17 + (int)((uVar11 & 0xfffffff) >> 0x1a) + (unsigned int)uVar1;
        uVar1 = *puVar17;
        uVar13 = (unsigned __int64)uVar1;
        if ((uVar1 & 0x8000) == 0) {
          puVar17 = puVar17 + (uVar5 >> 0x18 & 3) + (unsigned int)uVar1;
          uVar1 = *puVar17;
          uVar13 = (unsigned __int64)uVar1;
          if ((uVar1 & 0x8000) == 0) {
            puVar17 = puVar17 + (int)((uVar11 & 0xffffff) >> 0x16) + (unsigned int)uVar1;
            uVar1 = *puVar17;
            uVar13 = (unsigned __int64)uVar1;
            if ((uVar1 & 0x8000) == 0) {
              puVar17 = puVar17 + (int)((uVar11 & 0x3fffff) >> 0x14) + (unsigned int)uVar1;
              uVar1 = *puVar17;
              uVar13 = (unsigned __int64)uVar1;
              if ((uVar1 & 0x8000) == 0) {
                puVar17 = puVar17 + (int)((uVar11 & 0xfffff) >> 0x12) + (unsigned int)uVar1;
                uVar1 = *puVar17;
                uVar13 = (unsigned __int64)uVar1;
                if ((uVar1 & 0x8000) == 0) {
                  puVar17 = puVar17 + (uVar5 >> 0x10 & 3) + (unsigned int)uVar1;
                  uVar1 = *puVar17;
                  uVar13 = (unsigned __int64)uVar1;
                  if ((uVar1 & 0x8000) == 0) {
                    puVar17 = puVar17 + (int)((uVar11 & 0xffff) >> 0xf) + (unsigned int)uVar1;
                    uVar1 = *puVar17;
                    uVar13 = (unsigned __int64)uVar1;
                    if ((uVar1 & 0x8000) == 0) {
                      puVar17 = puVar17 + (int)((uVar11 & 0x7fff) >> 0xe) + (unsigned int)uVar1;
                      uVar1 = *puVar17;
                      uVar13 = (unsigned __int64)uVar1;
                      if ((uVar1 & 0x8000) == 0) {
                        puVar17 = puVar17 + (int)((uVar11 & 0x3fff) >> 0xd) + (unsigned int)uVar1;
                        uVar1 = *puVar17;
                        uVar13 = (unsigned __int64)uVar1;
                        if ((uVar1 & 0x8000) == 0) {
                          uVar6 = (uVar11 & 0x1fff) << 0x13;
                          puVar17 = puVar17 + (int)((uVar11 & 0x1fff) >> 0xc) + (unsigned int)uVar1;
                          uVar1 = *puVar17;
                          uVar13 = (unsigned __int64)uVar1;
                          if ((uVar1 & 0x8000) == 0) {
                            puVar17 = puVar17 + (int)((uVar6 & 0x7fffffff) >> 0x1e) + (unsigned int)uVar1;
                            uVar1 = *puVar17;
                            uVar13 = (unsigned __int64)uVar1;
                            if ((uVar1 & 0x8000) == 0) {
                              puVar17 = puVar17 + ((unsigned int)((uVar6 & 0x7fffffff) >> 0x1d) & 1) +
                                                  (unsigned int)uVar1;
                              uVar1 = *puVar17;
                              uVar13 = (unsigned __int64)uVar1;
                              if ((uVar1 & 0x8000) == 0) {
                                puVar17 = puVar17 + uVar1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar6 = uVar13 >> 10 & 0x1f;
    uVar11 = uVar13 & 0x3ff;
    auStack_90 = (unsigned int)uVar6;
    if (0x3fb < uVar11) {
      uVar11 = (unsigned __int64)puVar17[((unsigned int)uVar13 & 3) + 1];
    }
    iVar2 = uVar5 << auStack_90;
    param_1[0x41] = uVar14;
    param_1[0x42] = (int)uVar15;
    param_1[0x40] = iVar7;
    param_1[0x3f] = (int)pbVar12;
    param_1[0x44] = uVar10;
    param_1[0x43] = uVar9;
    if ((uVar15 & 0xffffffff) < uVar6) {
      uVar8 = fn_82A6D200(piVar18);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      uVar15 = (unsigned __int64)(unsigned int)param_1[0x42];
    }
    else {
      uVar15 = uVar15 - uVar6;
    }
    param_1[0x42] = (int)uVar15;
    if (uVar11 != 0) {
      if (uVar11 == 1) {
        *(unsigned int *)(iVar3 + 0x14) = 0;
        *(int *)(iVar3 + 0x10) =
             (int)(short)(((short)*(unsigned int *)(param_2 + 0x24) - *(short *)(iVar3 + 0xca)) + -1);
        return uVar8;
      }
      if ((uVar15 & 0xffffffff) == 0) {
        uVar8 = fn_82A6D200(piVar18,1);
        if ((int)uVar8 < 0) {
          return uVar8;
        }
        iVar7 = param_1[0x42];
      }
      else {
        iVar7 = (int)uVar15 + -1;
      }
      param_1[0x42] = iVar7;
      iVar7 = (int)((uVar11 - 2 & 0xffffffff) << 1);
      *(unsigned int *)(iVar3 + 0x10) = (unsigned int)*(unsigned short *)(*(int *)(param_2 + 0x1c) + iVar7);
      uVar1 = *(unsigned short *)(*(int *)(param_2 + 0x20) + iVar7);
      *(int *)(iVar3 + 0x18) = -1 - (iVar2 >> 0x1f);
      *(unsigned int *)(iVar3 + 0x14) = (unsigned int)uVar1;
      return uVar8;
    }
    iVar2 = *(int *)(iVar3 + 0x3c);
    param_1[0xe] = 5;
    if (2 < iVar2) {
      *(unsigned int *)(iVar3 + 0x18) = 0;
    }
  }
  else {
    if (uVar5 == 1) {
      return 0;
    }
    if (uVar5 == 2) {
      return 0;
    }
    if (uVar5 == 3) {
      return 0;
    }
    if (uVar5 == 4) {
      uVar8 = fn_82C30370(piVar18,1,&auStack_90);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      fn_82C398E0(param_1,param_2,auStack_90 & 0xffff);
      param_1[0xe] = 0;
      uVar14 = param_1[0x41];
      uVar4 = param_1[0x42];
      iVar7 = param_1[0x40];
      pbVar12 = (unsigned char *)param_1[0x3f];
      uVar10 = param_1[0x44];
      uVar9 = param_1[0x43];
      goto LAB_82c3c5f0;
    }
    if (uVar5 != 5) goto LAB_82c3cb54;
  }
  if (*(int *)(iVar3 + 0x3c) < 3) {
    uVar8 = fn_82C30370(piVar18,*(unsigned int *)(iVar3 + 0x34) & 0xffff,&auStack_90);
    if ((int)uVar8 < 0) {
      return uVar8;
    }
    *(unsigned int *)(iVar3 + 0x14) = auStack_90;
    param_1[0xe] = 6;
  }
  else {
    if (*(int *)(iVar3 + 0x18) == 0) {
      lVar16 = 0;
      uVar8 = fn_82A75410(piVar18,4,&auStack_90);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
      *(unsigned int *)(iVar3 + 0x14) = 0;
      *(unsigned int *)(iVar3 + 0x18) = 4;
      if ((auStack_90 & 0x80000000) != 0) {
        *(unsigned int *)(iVar3 + 0x18) = 8;
        lVar16 = 1;
        *(unsigned int *)(iVar3 + 0x14) = 0x10;
        uVar5 = auStack_90 & 0x40000000;
        while (uVar5 != 0) {
          uVar5 = *(unsigned int *)(iVar3 + 0x18);
          lVar16 = lVar16 + 1;
          *(unsigned int *)(iVar3 + 0x18) = uVar5 + 8;
          *(int *)(iVar3 + 0x14) = (1 << (uVar5 & 0x3f)) + *(int *)(iVar3 + 0x14);
          uVar5 = 0x80000000U >> ((unsigned int)lVar16 & 0x3f) & auStack_90;
        }
      }
      uVar8 = fn_82A6D200(piVar18,lVar16 + 1);
      if ((int)uVar8 < 0) {
        return uVar8;
      }
    }
    uVar8 = fn_82C30370(piVar18,(unsigned __int64)*(unsigned int *)(iVar3 + 0x18) + 1,&auStack_90);
    if ((int)uVar8 < 0) {
      return uVar8;
    }
    *(unsigned int *)(iVar3 + 0x14) = (auStack_90 >> 1) + *(int *)(iVar3 + 0x14) + 1;
    *(unsigned int *)(iVar3 + 0x18) = (auStack_90 & 1) - 1;
    param_1[0xe] = 6;
  }
LAB_82c3cb54:
  if (*(int *)(iVar3 + 0x3c) < 3) {
    uVar8 = fn_82C30370(piVar18,*(int *)(iVar3 + 0xf8) + 1U & 0xffff,&auStack_90);
    if (-1 < (int)uVar8) {
      iVar2 = *(int *)(*param_1 + 0xf8);
      *(unsigned int *)(iVar3 + 0x18) = (auStack_90 & 1) - 1;
      *(unsigned int *)(iVar3 + 0x10) =
           (int)(short)((unsigned short)(0xffffffff >> (0x20 - (iVar2 + 1U & 0xffff) & 0x3f)) &
                       (unsigned short)auStack_90) >> 1 & 0x7fffffff;
      param_1[0xe] = 0;
    }
  }
  else {
    uVar8 = fn_82C3B788(&auStack_90,*(unsigned short *)(param_1 + 0x4e),piVar18);
    if (-1 < (int)uVar8) {
      *(int *)(iVar3 + 0x10) = (int)(short)auStack_90;
      if ((short)auStack_90 == 0) {
        *(int *)(iVar3 + 0x14) = (int)*(short *)((int)param_1 + 0x13a) + *(int *)(iVar3 + 0x14);
      }
      param_1[0xe] = 0;
    }
  }
  return uVar8;
}

