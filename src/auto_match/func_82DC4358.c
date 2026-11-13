typedef unsigned char bool;
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82CE8E78();
extern int fn_82CE8E78();
extern int fn_82D80CB8();
extern int fn_82D80CE8();
extern int fn_82D90888();
extern int fn_82CE8FC8();
extern int fn_82DAEE18();
extern int fn_82DB4D88();
extern int fn_83088518();
extern int fn_830885D0();
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int iStack_94;
extern unsigned int iStack_a0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82DC4358(int *param_1,unsigned __int64 param_2,unsigned char *param_3)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar8;
  int *piVar9;
  int iVar10;
  char cVar14;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned __int64 uVar7;
  unsigned int *puVar15;
  unsigned int uVar16;
  int iVar17;
  char *pcVar18;
  unsigned __int64 uVar19;
  __int64 lVar20;
  unsigned int *puVar21;
  char in_RESERVE;
  unsigned char in_cr0;
  struct { int first; unsigned int second; } stack_pair_a0;

  unsigned int uStack_98;
  int iStack_94;
  struct { int first; unsigned int second; } stack_pair_90;

  unsigned int uStack_88;
  int iStack_84;

  iVar13 = *(int *)(param_3 + 0x14);
  iVar8 = KeTlsGetValue(lbl_8323B4A0);
  puVar2 = *(unsigned int **)(iVar8 + 4);
  if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
    *puVar2 = "TtBroadphase";
    uVar7 = TBLr;
    puVar2[1] = (int)uVar7;
    *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
  }
  if ((((*(int *)(*(int *)(param_3 + 0x18) + 8) != 0) && (*(char *)(*param_1 + 0xd5) != '\0')) &&
      ((*(unsigned char *)(iVar13 + 0x26) & 0x30) != 0)) && ((*(unsigned char *)(iVar13 + 0x25) & 0x30) == 0)) {
    fn_82D90888(*param_1,iVar13);
  }
  iVar8 = *(int *)(param_3 + 0x18);
  pcVar18 = (char *)(iVar8 + 0x20);
  uVar3 = *(unsigned int *)(*param_1 + 0x33c);
  stack_pair_90.first = 0;
  stack_pair_90.second = 0;
  uStack_88 = 0x80000000;
  piVar9 = (int *)fn_82CE5410();
  uStack_88 = uVar3 | 0x80000000;
  stack_pair_90.first = *piVar9;
  *piVar9 = (uVar3 * 8 + 0x7f & 0xffffff80) + stack_pair_90.first;
  uVar3 = *(unsigned int *)(*param_1 + 0x33c);
  stack_pair_a0.first = 0;
  stack_pair_a0.second = 0;
  uStack_98 = 0x80000000;
  iStack_84 = stack_pair_90.first;
  piVar9 = (int *)fn_82CE5410();
  uStack_98 = uVar3 | 0x80000000;
  stack_pair_a0.first = *piVar9;
  *piVar9 = (uVar3 * 8 + 0x7f & 0xffffff80) + stack_pair_a0.first;
  uVar3 = *(unsigned int *)(param_3 + 0x18);
  iStack_94 = stack_pair_a0.first;
  fn_82DB4D88(param_1[0x3c],*(unsigned int *)(iVar13 + 0x48),*(unsigned int *)(iVar13 + 0x4c),*param_1
                ,&stack_pair_90.first,&stack_pair_a0.first);
  iVar11 = *(int *)(uVar3 + 0x10);
  iVar17 = 0;
  lVar20 = (unsigned __int64)uVar3 + 0xc;
  puVar21 = (unsigned int *)lVar20;
  if (iVar11 == 1) {
    uVar16 = *(unsigned int *)(uVar3 + 0xc);
    *(unsigned int *)(uVar3 + 0xc) = uVar16 - 1;
  }
  else {
    do {
      uVar16 = *puVar21;
      if (in_RESERVE != '\0') {
        uVar5 = storeWordConditionalIndexed((unsigned __int64)uVar16 - 1,0,lVar20);
        *puVar21 = uVar5;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  if (uVar16 == *(unsigned int *)(uVar3 + 0x10)) {
    if (iVar8 != -0x20) {
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(unsigned int **)(iVar8 + 4);
      if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
        *puVar2 = "TtWaitForExport";
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
      }
      do {
        if (*pcVar18 == '\x01') break;
      } while (*pcVar18 != '\x02');
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(unsigned int **)(iVar8 + 4);
      if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
        *puVar2 = &lbl_82132BC4;
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
      }
    }
    puVar21 = *(unsigned int **)(uVar3 + 0x24);
    if (puVar21 != (unsigned int *)0x0) {
      uVar19 = 0;
      do {
        uVar16 = *puVar21;
        puVar21 = (unsigned int *)puVar21[1];
        uVar19 = uVar16 + uVar19;
      } while (puVar21 != (unsigned int *)0x0);
      piVar9 = (int *)fn_82CE5410();
      iVar8 = *piVar9;
      iVar10 = 0;
      *piVar9 = ((int)((uVar19 & 0xffffffff) << 4) + 0x7fU & 0xffffff80) + iVar8;
      for (puVar21 = *(unsigned int **)(uVar3 + 0x24); puVar21 != (unsigned int *)0x0; puVar21 = (unsigned int *)puVar21[1])
      {
        puVar15 = puVar21 + 4;
        lVar20 = ((unsigned __int64)*puVar21 & 0x3fffffff) << 2;
        if (0 < (int)lVar20) {
          iVar6 = iVar10 * 0x10 - (int)puVar15;
          do {
            *(unsigned int *)(iVar6 + iVar8 + (int)puVar15) = *puVar15;
            puVar15 = puVar15 + 1;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        iVar10 = *puVar21 + iVar10;
      }
      fn_82DAEE18(*param_1,iVar8,uVar19);
      piVar9 = (int *)fn_82CE5410();
      *piVar9 = iVar8;
    }
    *pcVar18 = '\x02';
  }
  else {
    if (*pcVar18 != '\x02') {
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(unsigned int **)(iVar8 + 4);
      if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
        *puVar2 = "TtWaitForSolverCallbacks";
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
      }
      do {
      } while (*pcVar18 != '\x02');
      iVar8 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(unsigned int **)(iVar8 + 4);
      if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
        *puVar2 = &lbl_82132BC4;
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
      }
    }
    if (*(int *)(uVar3 + 0x10) < 3) {
      iVar17 = -1;
    }
    else {
      do {
        uVar16 = *puVar21;
        if (in_RESERVE != '\0') {
          uVar5 = storeWordConditionalIndexed((unsigned __int64)uVar16 - 1,0,lVar20);
          *puVar21 = uVar5;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      iVar17 = uVar16 - 1;
    }
  }
  if ((unsigned __int64)stack_pair_a0.second + (unsigned __int64)stack_pair_90.second != 0) {
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = "LtAddRemoveAgnts";
      puVar2[3] = "StInit";
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 4;
    }
    piVar9 = *(int **)(iVar13 + 0x48);
    iVar8 = *param_1;
    if ((unsigned __int64)stack_pair_a0.second + (unsigned __int64)stack_pair_90.second != 0) {
      iVar10 = KeTlsGetValue(lbl_8323B4A0);
      puVar2 = *(unsigned int **)(iVar10 + 4);
      if (puVar2 < *(unsigned int **)(iVar10 + 0xc)) {
        *puVar2 = "StRemoveAgt";
        uVar7 = TBLr;
        puVar2[1] = (int)uVar7;
        *(unsigned int **)(iVar10 + 4) = puVar2 + 3;
      }
      fn_82D80CB8(iVar8,*(unsigned int *)(*piVar9 + 0xcc));
      fn_830885D0(*(unsigned int *)(iVar8 + 100),stack_pair_a0.first,stack_pair_a0.second);
      uVar16 = stack_pair_90.second;
      iVar10 = fn_82CE5410();
      cVar14 = (**(int (***)())(**(int **)(iVar10 + 0x10) + 0x24))
                         (*(int **)(iVar10 + 0x10),uVar16 << 10);
      if (cVar14 == '\0') {
        uVar12 = *(unsigned int *)(*piVar9 + 0xcc);
      }
      else {
        iVar10 = KeTlsGetValue(lbl_8323B4A0);
        puVar2 = *(unsigned int **)(iVar10 + 4);
        if (puVar2 < *(unsigned int **)(iVar10 + 0xc)) {
          *puVar2 = "StAddAgt";
          uVar7 = TBLr;
          puVar2[1] = (int)uVar7;
          *(unsigned int **)(iVar10 + 4) = puVar2 + 3;
        }
        fn_83088518(*(unsigned int *)(iVar8 + 100),stack_pair_90.first,stack_pair_90.second,
                        -(unsigned __int64)((unsigned __int64)*(unsigned int *)(iVar8 + 0x7c) != 0) &
                        (unsigned __int64)*(unsigned int *)(iVar8 + 0x7c) + 8);
        uVar12 = *(unsigned int *)(*piVar9 + 0xcc);
      }
      fn_82D80CE8(iVar8,uVar12);
    }
    iVar8 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar8 + 4);
    if (puVar2 < *(unsigned int **)(iVar8 + 0xc)) {
      *puVar2 = &lbl_8202CF7C;
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(unsigned int **)(iVar8 + 4) = puVar2 + 3;
    }
  }
  if (iVar17 == 1 - iVar11) {
    iVar8 = *(int *)(uVar3 + 0x68);
    while (iVar8 != 0) {
      puVar2 = *(unsigned int **)(uVar3 + 0x68);
      *(unsigned int *)(uVar3 + 0x68) = *puVar2;
      iVar8 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),puVar2,0x1000);
      iVar8 = *(int *)(uVar3 + 0x68);
    }
    iVar8 = *(int *)(uVar3 + 0x78);
    while (iVar8 != 0) {
      puVar2 = *(unsigned int **)(uVar3 + 0x78);
      *(unsigned int *)(uVar3 + 0x78) = *puVar2;
      iVar8 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),puVar2,0x30);
      iVar8 = *(int *)(uVar3 + 0x78);
    }
    iVar8 = *(int *)(uVar3 + 0x14);
    if (iVar8 != 0) {
      uVar12 = *(unsigned int *)(uVar3 + 0x1c);
      iVar11 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar11 + 0x18) + 0x10))(*(int **)(iVar11 + 0x18),iVar8,uVar12,1);
      *(unsigned int *)(uVar3 + 0x14) = 0;
    }
    if (1 < *(int *)(uVar3 + 0x10)) {
      uVar1 = *(unsigned short *)(uVar3 + 0x56);
      uVar12 = *(unsigned int *)(uVar3 + 0x50);
      iVar8 = fn_82CE5410();
      (**(int (***)())(**(int **)(iVar8 + 0x10) + 0x10))(*(int **)(iVar8 + 0x10),uVar12,uVar1,4);
      *(unsigned int *)(uVar3 + 0x50) = 0;
    }
    iVar8 = fn_82CE5410();
    piVar9 = *(int **)(iVar8 + 0x10);
    *(unsigned int *)(uVar3 + 0x60) = 0;
    if ((*(unsigned int *)(uVar3 + 100) & 0x80000000) == 0) {
      (**(int (***)())(*piVar9 + 0x10))
                (piVar9,*(unsigned int *)(uVar3 + 0x5c),*(unsigned int *)(uVar3 + 100) & 0x3fffffff,4);
    }
    *(unsigned int *)(uVar3 + 0x5c) = 0;
    *(unsigned int *)(uVar3 + 100) = 0x80000000;
    iVar8 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar8 + 0x10) + 8))(*(int **)(iVar8 + 0x10),(unsigned __int64)uVar3,0x80);
  }
  uVar3 = *(unsigned int *)(iVar13 + 0x60);
  if ((int)uVar3 < 1) {
    iVar13 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar13 + 4);
    if (puVar2 < *(unsigned int **)(iVar13 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(unsigned int **)(iVar13 + 4) = puVar2 + 3;
    }
    uVar7 = fn_82CE8E78(param_2,param_3,param_3);
  }
  else {
    iVar8 = *param_1;
    uVar12 = *(unsigned int *)(iVar13 + 0x58);
    uVar4 = *(unsigned int *)(iVar13 + 0x5c);
    uVar16 = *(unsigned int *)(iVar8 + 0xe0);
    *param_3 = 0xd;
    param_3[1] = 0;
    param_3[2] = 1;
    *(unsigned short *)(param_3 + 6) = 0xffff;
    *(unsigned short *)(param_3 + 4) = 0x50;
    *(unsigned int *)(param_3 + 0x30) = *(unsigned int *)(iVar8 + 0x1d0);
    *(unsigned int *)(param_3 + 0x34) = *(unsigned int *)(iVar8 + 0x1d4);
    *(unsigned int *)(param_3 + 0x38) = *(unsigned int *)(iVar8 + 0x1d8);
    *(unsigned int *)(param_3 + 0x3c) = *(unsigned int *)(iVar8 + 0x1dc);
    *(unsigned short *)(param_3 + 0x24) = 0;
    *(unsigned int *)(param_3 + 0x2c) = uVar4;
    *(short *)(param_3 + 0x28) = (short)uVar3;
    *(short *)(param_3 + 0x2a) = (short)uVar16;
    *(unsigned int *)(param_3 + 0x20) = 0;
    param_3[1] = 1;
    *(unsigned int *)(param_3 + 0x40) = 0;
    *(short *)(param_3 + 0x44) = (short)uVar12;
    if ((int)uVar16 < (int)uVar3) {
      uVar19 = (unsigned __int64)uVar3 - 1;
      lVar20 = (__int64)((int)uVar19 / (int)uVar16) + 1;
      uVar19 = (unsigned __int64)uVar16 &
               ~(((uVar19 & 0x7fffffff) << 1 | (uVar19 & 0xffffffff) >> 0x1f) - 1);
      trapWord(6,(unsigned __int64)uVar16,0);
      trapWord(5,uVar19,0xffff);
      uVar12 = fn_82CE8FC8(lVar20,0x10,uVar4,uVar12,uVar19);
      *(unsigned int *)(param_3 + 0x20) = uVar12;
      *(short *)(param_3 + 0x26) = (short)lVar20;
    }
    iVar13 = KeTlsGetValue(lbl_8323B4A0);
    puVar2 = *(unsigned int **)(iVar13 + 4);
    if (puVar2 < *(unsigned int **)(iVar13 + 0xc)) {
      *puVar2 = &lbl_82132BC4;
      uVar7 = TBLr;
      puVar2[1] = (int)uVar7;
      *(unsigned int **)(iVar13 + 4) = puVar2 + 3;
    }
    uVar7 = fn_82CE8E78(param_2,0,1,param_3,0);
  }
  iVar13 = iStack_94;
  stack_pair_a0.second = -(unsigned int)(stack_pair_a0.first != iStack_94) & stack_pair_a0.second;
  piVar9 = (int *)fn_82CE5410();
  *piVar9 = iVar13;
  iVar13 = fn_82CE5410();
  stack_pair_a0.second = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar13 + 0x10) + 0x10))
              (*(int **)(iVar13 + 0x10),stack_pair_a0.first,uStack_98 & 0x3fffffff);
  }
  iVar13 = iStack_84;
  stack_pair_a0.first = 0;
  uStack_98 = 0x80000000;
  stack_pair_90.second = -(unsigned int)(stack_pair_90.first != iStack_84) & stack_pair_90.second;
  piVar9 = (int *)fn_82CE5410();
  *piVar9 = iVar13;
  iVar13 = fn_82CE5410();
  stack_pair_90.second = 0;
  if ((uStack_88 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar13 + 0x10) + 0x10))
              (*(int **)(iVar13 + 0x10),stack_pair_90.first,uStack_88 & 0x3fffffff,8);
  }
  return uVar7;
}
