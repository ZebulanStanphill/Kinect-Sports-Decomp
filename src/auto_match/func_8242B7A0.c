extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_822B8700();
extern int fn_822C8B40();
extern int fn_8242C410();
extern int fn_8242D3A8();
extern int fn_8242D540();
extern int fn_8242E560();
extern int fn_82430D80();
extern int fn_8243A0B0();
extern int fn_82441EF0();
extern int fn_824CCFC8();
extern int fn_82522588();
extern int fn_82526C70();
extern int fn_8252CAF8();
extern int fn_827F57E8();
extern unsigned int iStack_ec;
extern unsigned int iStack_f4;
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_8242B7A0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned char auStack_f8 [4];
  int iStack_f4;
  unsigned char auStack_f0 [4];
  int iStack_ec;
  __int64 lStack_e8;
  unsigned char auStack_e0 [224];
  
  fn_8252CAF8(*(unsigned int *)(*(int *)(param_1 + 0x174) + 0xa0),3,0);
  fn_8252CAF8(*(unsigned int *)(*(int *)(param_1 + 0x174) + 0xa0),2,0);
  fn_8252CAF8(*(unsigned int *)(*(int *)(param_1 + 0x174) + 0xa0),1,1);
  fn_8252CAF8(*(unsigned int *)(*(int *)(param_1 + 0x174) + 0xa0),5,0);
  uVar7 = 1;
  do {
    fn_82526C70(auStack_e0,0x80,0xffffffff821b8e1c,uVar7);
    fn_8242D3A8(param_1,auStack_e0,0);
    uVar7 = uVar7 + 1;
  } while ((uVar7 & 0xffffffff) < 9);
  uVar7 = 1;
  do {
    fn_82526C70(auStack_e0,0x80,0xffffffff821b8e1c,uVar7 + 8);
    fn_8242D3A8(param_1,auStack_e0,0);
    uVar7 = uVar7 + 1;
  } while ((uVar7 & 0xffffffff) < 9);
  iVar6 = 0;
  *(unsigned int *)(*(int *)(param_1 + 0x174) + 0x120) = 0;
  iVar1 = fn_8242C410(param_1);
  dVar9 = (double)ltcg_pool_0_0f;
  if (0 < iVar1) {
    iVar1 = 0;
    dVar11 = (double)lbl_8218E8FC;
    dVar10 = (double)lbl_821CA460;
    do {
      piVar4 = *(int **)(**(int **)(param_1 + 8) + iVar1);
      iVar2 = fn_822ABA88(*(unsigned int *)(piVar4[4] * 4 + *piVar4),0);
      if (*(int **)(iVar2 + 0x24) == (int *)0x0) {
        iVar2 = *(int *)(iVar2 + 0x114);
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        lStack_e8 = (__int64)(*(int *)(iVar2 + 0xe4) - *(int *)(iVar2 + 0xe0) >> 3);
        fn_822C8B40(iVar2,((unsigned __int64)
                                 (unsigned int)(int)((float)((double)(float)(lbl_83265A28 & 0x7fffff |
                                                                    0x3f800000) - dVar10) *
                                            (float)lStack_e8) & 0x1fffffff) * 8 +
                                (unsigned __int64)*(unsigned int *)(iVar2 + 0xe0));
      }
      else {
        (**(int (***)())(**(int **)(iVar2 + 0x24) + 8))();
        iVar3 = fn_824CCFC8(*(unsigned int *)(iVar2 + 0x24));
        if ((iVar3 == 0) || (iVar3 = fn_8242E560(param_1), iVar3 != 0)) {
          iVar3 = *(int *)(iVar2 + 0x118);
          fn_827F57E8(dVar9,dVar11,*(unsigned int *)(iVar3 + 0x10));
          uVar5 = 0;
        }
        else {
          iVar3 = *(int *)(iVar2 + 0x118);
          fn_827F57E8(dVar10,dVar11,*(unsigned int *)(iVar3 + 0x10));
          uVar5 = 1;
        }
        uVar8 = *(unsigned int *)(iVar2 + 0x118);
        *(unsigned int *)(*(int *)(iVar3 + 0x10) + 0x108) =
             *(unsigned int *)(*(int *)(iVar3 + 0x10) + 0x10c);
        fn_822B8700(uVar8,uVar5);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + 4;
      iVar2 = fn_8242C410(param_1);
    } while (iVar6 < iVar2);
  }
  fn_8243A0B0((unsigned __int64)*(unsigned int *)(param_1 + 0x174) + 0x1c,param_2);
  uVar8 = 1;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x1d4) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x174) + 0x5c);
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1d4) * 4 + *(int *)(iVar1 + 0x1c4));
  }
  if (*(int *)(*(int *)(iVar1 + 0x40) + 0xf8) != 0) {
    iVar1 = lbl_832975B0;
    if (lbl_832975B0 == 0) {
      iVar1 = fn_82250A18();
    }
    if (*(char *)(iVar1 + 4) == '\0') {
      iVar1 = *(int *)(param_1 + 0x174);
      iVar6 = *(int *)(iVar1 + 0xbc);
      if (iVar6 != 2) {
        if (iVar6 < 3) goto LAB_8242badc;
        if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) * 4 +
                          *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c4));
        }
        if ((*(int *)(*(int *)(iVar1 + 0x40) + 0x204) != 0) && (iVar6 != 4)) goto LAB_8242badc;
      }
      uVar8 = 2;
    }
  }
LAB_8242badc:
  iVar1 = fn_8225F160();
  *(unsigned int *)(iVar1 + 0x60) = uVar8;
  iVar1 = *(int *)(param_1 + 0x174);
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) * 4 +
                    *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c4));
  }
  iVar6 = *(int *)(*(int *)(iVar6 + 0x40) + 0xf8);
  iVar2 = **(int **)(iVar1 + 0x14);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x1d0);
    if (iVar3 == iVar6) {
      if (iVar6 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      *(int *)(iVar2 + 0x1d0) = iVar3;
    }
  }
  *(int *)(*(int *)(iVar1 + 0x14) + 0x2c) = iVar6;
  fn_82441EF0((double)lbl_821917D4,(unsigned __int64)*(unsigned int *)(param_1 + 0x174) + 0x10,param_1);
  for (uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
      (uVar7 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x34); uVar7 = uVar7 + 8) {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x5c) + 0x2b4) == 0) {
      piVar4 = (int *)fn_82522588(auStack_f8,uVar7);
      iVar1 = *piVar4;
      fn_82430D80(iVar1,0,2);
      **(unsigned int **)(iVar1 + 0x244) = 2;
      *(unsigned int *)(*(int *)(iVar1 + 0x244) + 0xd8) = 0;
      *(float *)(*(int *)(iVar1 + 0x244) + 0x30) = (float)dVar9;
      *(unsigned char *)(*(int *)(iVar1 + 0x244) + 0x34) = 0;
      if (iStack_f4 != 0) {
        fn_822315A0();
      }
    }
    piVar4 = (int *)fn_82522588(auStack_f0,uVar7);
    *(unsigned int *)(*(int *)(*piVar4 + 0x244) + 0x60) = 0;
    if (iStack_ec != 0) {
      fn_822315A0();
    }
  }
  fn_8242D540(param_1,1);
  *(unsigned int *)(*(int *)(param_1 + 0x174) + 0x174) = 0;
  return;
}

