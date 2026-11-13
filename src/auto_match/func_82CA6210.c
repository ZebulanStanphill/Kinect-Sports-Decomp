extern int fn_82C4E3B0();
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA60E0();


unsigned __int64
fn_82CA6210(int param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,int *param_7,int param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  short sVar7;
  unsigned __int64 *puVar8;
  unsigned char *pbVar9;
  char cVar10;
  int iVar12;
  unsigned __int64 uVar11;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  int in_stack_00000054;
  char cStack_50;
  char cStack_4f;
  
  fn_82CA60E0(param_1,&cStack_50,param_2,param_3,param_4,param_5,param_6);
  puVar8 = *(unsigned __int64 **)(param_1 + 0x54);
  if (param_7 == (int *)0x0) {
    *(unsigned int *)((int)puVar8 + 0x14) = 3;
    iVar16 = 0;
  }
  else {
    iVar12 = *param_7;
    sVar7 = *(short *)((int)((*puVar8 >> (0x40 - (unsigned __int64)*(unsigned char *)(param_7 + 2) & 0x7f) &
                             0xffffffff) << 1) + iVar12);
    uVar13 = (unsigned __int64)sVar7;
    if (sVar7 < 0) {
      fn_82C4E470(puVar8);
      do {
        uVar15 = *puVar8;
        fn_82C4E470(puVar8,1);
        sVar7 = *(short *)((int)(((uVar13 - ((__int64)uVar15 >> 0x3f)) + 0x8000 & 0xffffffff) << 1)
                          + iVar12);
        uVar13 = (unsigned __int64)sVar7;
        iVar16 = (int)sVar7;
      } while (sVar7 < 0);
    }
    else {
      iVar12 = *(int *)(puVar8 + 1);
      iVar16 = (int)(uVar13 & 0xf);
      *puVar8 = *puVar8 << (uVar13 & 0xf);
      *(int *)(puVar8 + 1) = iVar12 - iVar16;
      if (iVar12 < iVar16) {
        do {
          pbVar9 = *(unsigned char **)((int)puVar8 + 0xc);
          if (pbVar9 < (unsigned char *)(*(int *)(puVar8 + 2) - 4U)) {
            bVar1 = *pbVar9;
            bVar2 = pbVar9[1];
            bVar3 = pbVar9[2];
            bVar4 = pbVar9[3];
            bVar5 = pbVar9[4];
            bVar6 = pbVar9[5];
            iVar12 = *(int *)(puVar8 + 1);
            *(unsigned char **)((int)puVar8 + 0xc) = pbVar9 + 6;
            *(int *)(puVar8 + 1) = iVar12 + 0x30;
            *puVar8 = ((((((unsigned __int64)bVar1 * 0x100 + (unsigned __int64)bVar2) * 0x100 + (unsigned __int64)bVar3)
                         * 0x100 + (unsigned __int64)bVar4) * 0x100 + (unsigned __int64)bVar5) * 0x100 +
                       (unsigned __int64)bVar6 << ((__int64)-iVar12 & 0x7fU)) + *puVar8;
            goto LAB_82ca6344;
          }
          iVar12 = fn_82C4E3B0(puVar8);
        } while (iVar12 == 1);
        iVar16 = (int)sVar7 >> 4;
      }
      else {
LAB_82ca6344:
        iVar16 = (int)sVar7 >> 4;
      }
    }
  }
  puVar8 = *(unsigned __int64 **)(param_1 + 0x54);
  if (*(int *)((int)puVar8 + 0x14) == 0) {
    if (iVar16 == 1099) {
      uVar13 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
      uVar17 = 6;
      lVar14 = 0;
      uVar15 = uVar13 + 0x10;
      if ((uVar15 & 0xffffffff) < 6) {
        do {
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar15;
          *(int *)(puVar8 + 1) = (int)(uVar13 - uVar15);
          lVar14 = (unsigned __int64)
                   (unsigned int)((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) +
                   lVar14;
          *puVar8 = *puVar8 << (uVar15 & 0x7f);
          if ((__int64)(uVar13 - uVar15) < 0) {
            fn_82C4E5E8(puVar8);
          }
          uVar13 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
          uVar15 = uVar13 + 0x10;
        } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      *(int *)(puVar8 + 1) = (int)(uVar13 - uVar17);
      uVar15 = (*puVar8 >> (0x40 - uVar17 & 0x7f) & 0xffffffff) + lVar14;
      *puVar8 = *puVar8 << (uVar17 & 0x7f);
      if ((__int64)(uVar13 - uVar17) < 0) {
        fn_82C4E5E8(puVar8);
      }
      puVar8 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar18 = 6;
      lVar14 = 0;
      uVar13 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
      uVar17 = uVar13 + 0x10;
      if ((uVar17 & 0xffffffff) < 6) {
        do {
          if ((uVar17 & 0xffffffff) == 0) break;
          uVar18 = uVar18 - uVar17;
          *(int *)(puVar8 + 1) = (int)(uVar13 - uVar17);
          lVar14 = (unsigned __int64)
                   (unsigned int)((int)(*puVar8 >> (0x40 - uVar17 & 0x7f)) << ((unsigned int)uVar18 & 0x3f)) +
                   lVar14;
          *puVar8 = *puVar8 << (uVar17 & 0x7f);
          if ((__int64)(uVar13 - uVar17) < 0) {
            fn_82C4E5E8(puVar8);
          }
          uVar13 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
          uVar17 = uVar13 + 0x10;
        } while ((uVar17 & 0xffffffff) < (uVar18 & 0xffffffff));
      }
      *(int *)(puVar8 + 1) = (int)(uVar13 - uVar18);
      uVar17 = (*puVar8 >> (0x40 - uVar18 & 0x7f) & 0xffffffff) + lVar14;
      *puVar8 = *puVar8 << (uVar18 & 0x7f);
      if ((__int64)(uVar13 - uVar18) < 0) {
        fn_82C4E5E8(puVar8);
      }
    }
    else {
      uVar15 = (unsigned __int64)*(unsigned char *)(iVar16 + param_8);
      uVar17 = (unsigned __int64)*(unsigned char *)(iVar16 + in_stack_00000054);
    }
    lVar14 = (__int64)cStack_50 + uVar15 + -0x20;
    iVar12 = (int)lVar14;
    cVar10 = (char)((__int64)cStack_50 + uVar15);
    if (*(int *)(param_1 + 0xf4) < iVar12) {
      *param_2 = cVar10 + 0xa0;
    }
    else if (iVar12 < *(int *)(param_1 + 0xf0)) {
      *param_2 = cVar10 + 0x20;
    }
    else {
      *param_2 = (unsigned char)lVar14;
    }
    lVar14 = (__int64)cStack_4f + uVar17 + -0x20;
    iVar12 = (int)lVar14;
    cVar10 = (char)((__int64)cStack_4f + uVar17);
    if (*(int *)(param_1 + 0xf4) < iVar12) {
      param_2[1] = cVar10 + 0xa0;
    }
    else if (iVar12 < *(int *)(param_1 + 0xf0)) {
      param_2[1] = cVar10 + 0x20;
    }
    else {
      param_2[1] = (unsigned char)lVar14;
    }
    *(unsigned int *)(param_1 + 0x150) = 0;
    if ((*(int *)(param_1 + 0x1c8) == 1) && (((*param_2 & 1) != 0 || ((param_2[1] & 1) != 0)))) {
      puVar8 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar17 = 1;
      iVar16 = 0;
      uVar13 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
      uVar15 = uVar13 + 0x10;
      iVar12 = 0;
      if ((uVar15 & 0xffffffff) == 0) {
        do {
          iVar16 = iVar12;
          if ((uVar15 & 0xffffffff) == 0) break;
          uVar17 = uVar17 - uVar15;
          *(int *)(puVar8 + 1) = (int)(uVar13 - uVar15);
          iVar16 = ((int)(*puVar8 >> (0x40 - uVar15 & 0x7f)) << ((unsigned int)uVar17 & 0x3f)) + iVar16;
          *puVar8 = *puVar8 << (uVar15 & 0x7f);
          if ((__int64)(uVar13 - uVar15) < 0) {
            fn_82C4E5E8(puVar8);
          }
          uVar13 = (unsigned __int64)*(unsigned int *)(puVar8 + 1);
          uVar15 = uVar13 + 0x10;
          iVar12 = iVar16;
        } while ((uVar15 & 0xffffffff) < (uVar17 & 0xffffffff));
      }
      uVar15 = *puVar8;
      *(int *)(puVar8 + 1) = (int)(uVar13 - uVar17);
      *puVar8 = uVar15 << (uVar17 & 0x7f);
      if ((__int64)(uVar13 - uVar17) < 0) {
        fn_82C4E5E8(puVar8);
      }
      *(int *)(param_1 + 0x150) = (int)(uVar15 >> (0x40 - uVar17 & 0x7f)) + iVar16;
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
  return uVar11;
}

