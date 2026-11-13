typedef unsigned char bool;
#define false 0
extern int fn_826415D0();
extern int fn_82642B68();
extern int fn_82642CC8();
extern int fn_82642E10();
extern int fn_82645110();
extern unsigned int iStack_b4;
extern unsigned int uRam832978b0;
extern unsigned int uRam832978b4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_82642F50(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned char bVar10;
  unsigned int *puVar9;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  int iVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  bool bVar19;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  int iStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  
  uVar6 = 0;
  uStack_bc = 0xffffffff;
  uStack_b8 = 0xffffffff;
  uStack_ac = 0xffffffff;
  uStack_a8 = 0xffffffff;
  iStack_b4 = -1;
  uVar11 = 0xffffffffffffffff;
  uStack_b0 = 0;
  if ((param_2 & 0x20000) != 0) {
    param_2 = fn_826415D0();
  }
  iVar1 = *(int *)(param_1 + 0x3248);
  iVar5 = *(int *)(param_1 + 0x2ed8);
  iVar4 = *(int *)(param_1 + 0x3244);
  if (iVar1 == 0) {
    return param_2;
  }
  uVar14 = 0;
  iVar15 = *(int *)(iVar1 + 0x380) + iVar1 + 0x368;
  if (iVar4 != 0) goto LAB_826430b8;
  if ((*(unsigned char *)(param_1 + 0x2abf) & 2) != 0) {
    uVar2 = *(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar2) {
      uVar2 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar2 + 4) = 0x5c8;
    *(unsigned int *)(uVar2 + 8) = 0x20000;
    *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar2 + 8);
    *(unsigned char *)(param_1 + 0x2abf) = *(unsigned char *)(param_1 + 0x2abf) & 0xfc;
  }
  iVar16 = 0;
  bVar19 = (*(unsigned int *)(iVar1 + 0x368) & 0x20) != 0;
  uVar2 = 0;
  if (bVar19) {
    iVar15 = *(int *)(iVar1 + 0x388) + iVar1 + 0x368;
  }
  uVar14 = (unsigned __int64)bVar19;
  uVar12 = param_2;
  if ((*(unsigned int *)(param_1 + 0x2954) & 7) != 5) {
    *(unsigned int *)(param_1 + 0x2954) = *(unsigned int *)(param_1 + 0x2954) & 0xfffffff8 | 5;
    uVar12 = param_2 | 0x80008;
    if ((*(unsigned char *)(param_1 + 0x2abf) & 8) != 0) {
      uVar12 = param_2 | 0x100000000080008;
      *(unsigned int *)(param_1 + 0x2884) = *(unsigned int *)(param_1 + 0x2884) & 0xfff0ffff;
    }
  }
  bVar19 = (*(unsigned int *)(iVar15 + 0x14) & 0x1f) != 0;
  do {
    if ((*(int *)(param_1 + 0x3590) != 0) || ((*(unsigned int *)(iVar1 + 0x368) & 0x10) == 0))
    goto LAB_8264324c;
    KeBugCheck(0xf5);
    param_2 = uVar12;
LAB_826430b8:
    iVar7 = *(int *)(iVar4 + 0x40) + iVar4;
    iVar16 = iVar7 + 0x28;
    uVar2 = *(unsigned int *)(iVar7 + 0x30);
    uVar6 = *(unsigned int *)(iVar7 + 0x34);
    uVar12 = -(unsigned __int64)(0x10000000 < (uVar2 & 0x70000000));
    *(unsigned char *)(param_1 + 0x2abe) =
         (unsigned char)((uVar12 & 1) << 3) | *(unsigned char *)(param_1 + 0x2abe) & 8 |
         *(unsigned char *)(param_1 + 0x2abe) & 0xf7;
    *(unsigned char *)(param_1 + 0x2abf) =
         (unsigned char)((uVar12 & 1) << 1) | *(unsigned char *)(param_1 + 0x2abf) & 2 |
         *(unsigned char *)(param_1 + 0x2abf) & 0xfd;
    uVar12 = param_2;
    if ((param_2 & 0x100000) != 0) {
      fn_82642CC8(param_1,iVar4 + 0x28,*(unsigned int *)(iVar4 + 0x18));
      uVar3 = *(unsigned int *)(param_1 + 0x30);
      if (*(unsigned int *)(param_1 + 0x38) < uVar3) {
        uVar3 = fn_82645110(param_1);
      }
      *(unsigned int *)(uVar3 + 4) = 0xc0012700;
      uVar12 = param_2 | 0x4000;
      uVar8 = *(int *)(*(int *)(iVar4 + 0x40) + iVar4 + 0x28) + *(int *)(iVar4 + 0x18);
      *(unsigned int *)(uVar3 + 8) = ((uVar8 >> 0x14) + 0x200 & 0x1000) + (uVar8 & 0x1ffffffe) | 1;
      *(unsigned int *)(uVar3 + 0xc) = *(unsigned int *)(*(int *)(iVar4 + 0x40) + iVar4 + 0x2c) >> 2;
      *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar3 + 0xc);
      *(unsigned int *)(param_1 + 0x2928) = *(unsigned int *)(iVar7 + 0x40);
      if ((*(unsigned int *)(param_1 + 0x2954) & 7) != 4) {
        uVar12 = param_2 | 0x84008;
        *(unsigned int *)(param_1 + 0x2954) = *(unsigned int *)(param_1 + 0x2954) & 0xfffffff8 | 4;
        if ((*(unsigned char *)(param_1 + 0x2abf) & 8) != 0) {
          uVar12 = param_2 | 0x100000000084008;
          *(unsigned int *)(param_1 + 0x2884) = *(unsigned int *)(*(int *)(param_1 + 0x3148) + 0x1c);
        }
      }
    }
    if ((uRam832978b4 & 1) == 0) {
      uRam832978b4 = uRam832978b4 | 1;
      uRam832978b0 = 0x603ff;
    }
    bVar19 = (*(unsigned int *)(iVar7 + 0x3c) & uRam832978b0) != (*(unsigned int *)(iVar15 + 0x14) & uRam832978b0);
  } while ((*(int *)(param_1 + 0x3590) != 0) || ((*(unsigned int *)(iVar4 + 0x28) & 0x10) == 0));
  KeBugCheck(0xf5);
LAB_8264324c:
  uStack_c0 = *(unsigned int *)(iVar15 + 8);
  uVar3 = *(unsigned int *)(param_1 + 0x2954);
  uVar8 = *(unsigned int *)(iVar15 + 0xc);
  uVar13 = uVar2;
  uVar18 = uVar3;
  if ((*(unsigned char *)(param_1 + 0x2abc) & 0x40) != 0) {
    if (iVar16 == 0) {
LAB_826432b0:
      uVar18 = uVar3 & 0xfffffff8 | 5;
    }
    else if ((((*(unsigned int *)(param_1 + 0x293c) & 8) == 0) && ((*(unsigned int *)(iVar16 + 0x1c) & 0x10) == 0))
            && ((*(unsigned int *)(iVar16 + 0x1c) & 0x20) == 0)) {
      uVar13 = 0;
      uStack_b0 = *(unsigned char *)(param_1 + 0x2abf) & 1;
      *(unsigned char *)(param_1 + 0x2abf) = *(unsigned char *)(param_1 + 0x2abf) & 0xfe;
      goto LAB_826432b0;
    }
    if ((uVar12 & 0x40000) != 0) {
      uStack_bc = uStack_c0 | uVar13;
      uStack_b8 = uVar8 | uVar6;
    }
    if ((uVar18 != *(unsigned int *)(param_1 + 0x324c)) || ((uVar12 & 8) != 0)) {
      uVar12 = uVar12 | 8;
      *(unsigned int *)(param_1 + 0x324c) = uVar18;
      uStack_ac = uVar18;
      if (((*(unsigned char *)(param_1 + 0x2abf) & 8) != 0) &&
         (uStack_a8 = *(unsigned int *)(param_1 + 0x2884), (uVar18 & 7) == 5)) {
        uStack_a8 = uStack_a8 & 0xfff0ffff;
      }
    }
  }
  *(unsigned char *)(param_1 + 0x2abf) =
       *(unsigned char *)(param_1 + 0x2abf) & 0xfe |
       -(0x10000000 < (uVar13 & 0x70000000)) & 1U | *(unsigned char *)(param_1 + 0x2abf) & 1;
  if (((*(unsigned char *)(param_1 + 0x2abe) & 0x80) == 0) && (bVar19 == false)) {
    if ((uVar12 & 0x80000) == 0) goto LAB_826434a0;
    puVar17 = (unsigned int *)(iVar1 + 0x368);
    fn_82642CC8(param_1,puVar17,*(unsigned int *)(iVar1 + 0x20));
    bVar10 = *(unsigned char *)(param_1 + 0x2abe) & 0xbf;
    *(unsigned char *)(param_1 + 0x2abe) = bVar10;
    if ((iVar5 == 0) || ((*puVar17 & 0x40) != 0)) {
      uVar11 = uVar14;
      if ((((uVar18 ^ uVar3) & 7) == 0) || ((*puVar17 & 0x20) == 0)) goto LAB_826434a0;
    }
    else {
      if ((*(unsigned char *)(param_1 + 0x2abc) & 0x80) != 0) {
        bVar19 = false;
        goto LAB_82643484;
      }
      iVar4 = fn_82642E10(param_1,iVar1,iVar5,uVar14);
      if (iVar4 == 0) {
        fn_82642B68(param_1,0,iVar1,&uStack_c0,iVar5,iVar15,iVar16,uVar14);
        uVar14 = uVar11;
      }
      uVar11 = uVar14;
      if (((((uVar18 ^ uVar3) & 7) == 0) || ((*puVar17 & 0x20) == 0)) ||
         (iVar5 = fn_82642E10(param_1,iVar1,iVar5,1), iVar5 == 0)) goto LAB_826434a0;
      bVar10 = *(unsigned char *)(param_1 + 0x2abe);
    }
    iStack_b4 = 1;
    *(unsigned char *)(param_1 + 0x2abe) = bVar10 | 0x40;
    uVar11 = uVar14;
  }
  else {
    if ((uVar12 & 0x180000) == 0) goto LAB_826434a0;
    *(unsigned char *)(param_1 + 0x2abe) = *(unsigned char *)(param_1 + 0x2abe) & 0xbf;
    fn_82642CC8(param_1,iVar1 + 0x368,*(unsigned int *)(iVar1 + 0x20));
LAB_82643484:
    fn_82642B68(param_1,bVar19,iVar1,&uStack_c0,iVar5,iVar15,iVar16,uVar14);
  }
LAB_826434a0:
  if ((uVar12 & 0x180000) != 0) {
    *(unsigned int *)(param_1 + 0x2924) = uVar8 | uVar6;
    uVar12 = uVar12 | 0x18000;
    *(unsigned int *)(param_1 + 0x2920) = uStack_c0 | uVar2;
    if ((*(unsigned char *)(param_1 + 0x2abe) & 0x40) == 0) {
      if ((uVar13 == 0) && (uVar2 != 0)) {
        uStack_bc = uStack_c0;
        uStack_b8 = uVar8;
      }
    }
    else {
      iVar5 = *(int *)(iVar1 + 0x388) + iVar1;
      uStack_bc = *(unsigned int *)(iVar5 + 0x370) | uVar13;
      uStack_b8 = *(unsigned int *)(iVar5 + 0x374) | uVar6;
    }
  }
  iVar5 = (int)uVar11;
  if ((*(unsigned char *)(param_1 + 0x2abc) & 0x40) == 0) {
    if (iVar5 != -1) {
      uVar6 = *(unsigned int *)(param_1 + 0x30);
      if (*(unsigned int *)(param_1 + 0x38) < uVar6) {
        uVar6 = fn_82645110(param_1);
      }
      *(unsigned int *)(uVar6 + 4) = 0xc0012700;
      iVar4 = (int)((uVar11 + 0x70 & 0xffffffff) << 3);
      uVar2 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
      *(unsigned int *)(uVar6 + 8) = ((uVar2 >> 0x14) + 0x200 & 0x1000) + (uVar2 & 0x1fffffff);
      *(unsigned int *)(uVar6 + 0xc) = *(unsigned int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
      *(unsigned int *)(iVar5 * 0x1a0 + iVar1 + 0x40) = *(unsigned int *)(param_1 + 0x2a9c);
      *(unsigned int **)(param_1 + 0x30) = (unsigned int *)(uVar6 + 0xc);
    }
  }
  else {
    uVar6 = *(unsigned int *)(param_1 + 0x30);
    if (*(unsigned int *)(param_1 + 0x38) < uVar6) {
      uVar6 = fn_82645110(param_1);
    }
    *(unsigned int *)(uVar6 + 4) = 0xc0006000;
    *(unsigned int *)(uVar6 + 8) = 0x15555555;
    *(unsigned int *)(uVar6 + 0xc) = 0xc0006100;
    puVar17 = (unsigned int *)(uVar6 + 0x10);
    *puVar17 = 0;
    if ((uVar12 & 8) != 0) {
      *(unsigned int *)(uVar6 + 0x14) = 0x2208;
      uVar12 = uVar12 & 0xfffffffffffffff7;
      puVar17 = (unsigned int *)(uVar6 + 0x18);
      *puVar17 = *(unsigned int *)(param_1 + 0x2954);
    }
    if (uStack_b0 != 0) {
      puVar17[1] = 0xc0002601;
      puVar17 = puVar17 + 2;
      *puVar17 = 0;
    }
    if (uStack_ac != 0xffffffff) {
      puVar17[1] = 0xc0012d01;
      puVar17[2] = 0x40208;
      puVar17 = puVar17 + 3;
      *puVar17 = uStack_ac;
    }
    if ((uVar12 & 0x100000000000000) != 0) {
      puVar17[1] = 0x2001;
      uVar12 = uVar12 & 0xfeffffffffffffff;
      puVar17 = puVar17 + 2;
      *puVar17 = *(unsigned int *)(param_1 + 0x2884);
    }
    if (uStack_a8 != 0xffffffff) {
      puVar17[1] = 0xc0012d01;
      puVar17[2] = 0x40001;
      puVar17 = puVar17 + 3;
      *puVar17 = uStack_a8;
    }
    if ((uVar12 & 0x10000) != 0) {
      puVar17[1] = 0x12180;
      uVar12 = uVar12 & 0xfffffffffffe7fff;
      puVar17[2] = *(unsigned int *)(param_1 + 0x2920);
      puVar17 = puVar17 + 3;
      *puVar17 = *(unsigned int *)(param_1 + 0x2924);
    }
    if (uStack_bc != 0xffffffff) {
      puVar17[1] = 0xc0022d01;
      puVar17[2] = 0x40180;
      puVar17[3] = uStack_bc;
      puVar17 = puVar17 + 4;
      *puVar17 = uStack_b8;
    }
    if (iStack_b4 == -1) {
      puVar9 = puVar17;
      if (iVar5 != -1) {
        iVar4 = (int)((uVar11 + 0x70 & 0xffffffff) << 3);
        puVar17[1] = 0xc0012700;
        uVar6 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
        puVar17[2] = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
        puVar9 = puVar17 + 3;
        *puVar9 = *(unsigned int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
        *(unsigned int *)(iVar5 * 0x1a0 + iVar1 + 0x40) = *(unsigned int *)(param_1 + 0x2a9c);
      }
    }
    else {
      iVar4 = (iStack_b4 + 0x70) * 8;
      puVar17[1] = 0xc0012701;
      uVar6 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
      puVar17[2] = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
      puVar17[3] = *(unsigned int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
      *(unsigned int *)(iStack_b4 * 0x1a0 + iVar1 + 0x40) = *(unsigned int *)(param_1 + 0x2a9c);
      puVar9 = puVar17 + 3;
      if (iVar5 != -1) {
        puVar17[4] = 0xc0006000;
        iVar4 = (int)((uVar11 + 0x70 & 0xffffffff) << 3);
        puVar17[5] = 0x2aaaaaaa;
        puVar17[6] = 0xc0012701;
        uVar6 = *(int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x368) + *(int *)(iVar1 + 0x20);
        puVar17[7] = ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
        puVar9 = puVar17 + 8;
        *puVar9 = *(unsigned int *)(*(int *)(iVar4 + iVar1) + iVar1 + 0x36c) >> 2;
        *(unsigned int *)(iVar5 * 0x1a0 + iVar1 + 0x40) = *(unsigned int *)(param_1 + 0x2a9c);
      }
    }
    puVar9[1] = 0xc0006000;
    puVar9[2] = *(unsigned int *)(param_1 + 0x3254);
    puVar9[3] = 0xc0006100;
    puVar9[4] = *(unsigned int *)(param_1 + 0x3258);
    *(unsigned int **)(param_1 + 0x30) = puVar9 + 4;
  }
  return uVar12;
}

