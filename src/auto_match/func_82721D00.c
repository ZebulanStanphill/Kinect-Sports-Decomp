extern int fn_826824B0();
extern int fn_826826A8();
extern int fn_82696B20();
extern int fn_826A7398();
extern int fn_82F68918();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int iStack_a4;
extern unsigned int lbl_82005720;
extern unsigned int lbl_82005730;


void fn_82721D00(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned int param_6,unsigned int param_7,unsigned __int64 param_8)

{
  unsigned char *puVar1;
  int iVar3;
  int iVar4;
  __int64 lVar2;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int *piStack_a8;
  int iStack_a4;
  unsigned char bStack_a0;
  
  iVar3 = fn_82F6A548();
  uVar5 = (unsigned __int64)*(unsigned char *)(*(int *)(iVar3 + 0x78) + 0x2a4);
  uVar7 = (uVar5 - 1) - ((uVar5 - 2) + (unsigned __int64)(uVar5 - 1 == 0));
  if (((uVar5 == 1) && (param_6 != 0)) && ((param_3 == 100 || (param_3 == 0x65)))) {
    fn_82696B20(&piStack_a8,param_4,iVar3);
    if (piStack_a8 == (int *)0x0) {
LAB_82721dc4:
      piStack_a8 = (int *)0x0;
      if (((bStack_a0 & 1) == 0) && (iStack_a4 != 0)) {
        fn_826824B0();
      }
      lVar2 = -1;
      goto LAB_82722144;
    }
    iVar4 = (**(int (***)())(*piStack_a8 + 0x40))();
    if (iVar4 < 1) {
      if (1 < param_6) {
        if (((bStack_a0 & 2) == 0) && (piStack_a8 != (int *)0x0)) {
          fn_826824B0();
        }
        goto LAB_82721dc4;
      }
      uVar7 = 1;
    }
    if (((bStack_a0 & 2) == 0) && (piStack_a8 != (int *)0x0)) {
      fn_826824B0();
    }
    piStack_a8 = (int *)0x0;
    if (((bStack_a0 & 1) == 0) && (iStack_a4 != 0)) {
      fn_826824B0();
    }
    iStack_a4 = 0;
  }
  lVar2 = 0;
  if ((*(char *)(*(int *)(iVar3 + 0x78) + 0x2a4) == '\x01') && ((uVar7 & 0xff) == 0)) {
    if ((param_3 == 100) && ((param_8 & 0xff) != 0)) {
      uVar6 = *(int *)(iVar3 + 8) + 0x10;
      *(unsigned int *)(iVar3 + 8) = uVar6;
      if (*(unsigned int *)(iVar3 + 0x10) <= uVar6) {
        fn_826826A8((unsigned int *)(iVar3 + 8));
      }
      puVar1 = *(unsigned char **)(iVar3 + 8);
      if (puVar1 != (unsigned char *)0x0) {
        puVar1[4] = (char)param_8;
        *puVar1 = 2;
      }
      lVar2 = 1;
    }
    iVar4 = fn_826A7398(iVar3);
    if ((param_2 & 0xffffffff) < 4) {
      iVar4 = (int)param_2 * 0x24 + iVar4 + 0x944;
    }
    else {
      iVar4 = 0;
    }
    dVar11 = (double)*(float *)(iVar4 + 0x14);
    dVar10 = lbl_82005730;
    dVar9 = (double)fn_82F68918((double)*(float *)(iVar4 + 0x18) + lbl_82005730);
    puVar8 = (unsigned int *)(iVar3 + 8);
    uVar6 = *(int *)(iVar3 + 8) + 0x10;
    *(unsigned int *)(iVar3 + 8) = uVar6;
    dVar9 = dVar9 * lbl_82005720;
    dVar12 = lbl_82005720;
    if (*(unsigned int *)(iVar3 + 0x10) <= uVar6) {
      fn_826826A8(puVar8);
    }
    puVar1 = (unsigned char *)*puVar8;
    if (puVar1 != (unsigned char *)0x0) {
      *(double *)(puVar1 + 8) = dVar9;
      *puVar1 = 3;
    }
    dVar10 = (double)fn_82F68918(dVar11 + dVar10);
    uVar6 = *puVar8;
    dVar10 = dVar10 * dVar12;
    *puVar8 = uVar6 + 0x10;
    if (*(unsigned int *)(iVar3 + 0x10) <= uVar6 + 0x10) {
      fn_826826A8(puVar8);
    }
    puVar1 = (unsigned char *)*puVar8;
    if (puVar1 != (unsigned char *)0x0) {
      *(double *)(puVar1 + 8) = dVar10;
      *puVar1 = 3;
    }
    uVar6 = *puVar8;
    *puVar8 = uVar6 + 0x10;
    if (*(unsigned int *)(iVar3 + 0x10) <= uVar6 + 0x10) {
      fn_826826A8(puVar8);
    }
    puVar1 = (unsigned char *)*puVar8;
    if (puVar1 != (unsigned char *)0x0) {
      *(int *)(puVar1 + 8) = (int)param_2;
      *puVar1 = 4;
    }
    lVar2 = lVar2 + 3;
  }
  if (param_3 != 0x66) {
    if (((param_5 & 0xffffffff) == 0) || ((param_3 != 0x67 && ((uVar7 & 0xff) != 0)))) {
      if ((int)lVar2 == 0) goto LAB_82722050;
      uVar6 = *(int *)(iVar3 + 8) + 0x10;
      *(unsigned int *)(iVar3 + 8) = uVar6;
      if (*(unsigned int *)(iVar3 + 0x10) <= uVar6) {
        fn_826826A8((unsigned int *)(iVar3 + 8));
      }
      puVar1 = *(unsigned char **)(iVar3 + 8);
      if (puVar1 != (unsigned char *)0x0) {
        *puVar1 = 1;
      }
    }
    else {
      uVar6 = *(int *)(iVar3 + 8) + 0x10;
      *(unsigned int *)(iVar3 + 8) = uVar6;
      if (*(unsigned int *)(iVar3 + 0x10) <= uVar6) {
        fn_826826A8((unsigned int *)(iVar3 + 8));
      }
      puVar1 = *(unsigned char **)(iVar3 + 8);
      if (puVar1 != (unsigned char *)0x0) {
        *puVar1 = 5;
        iVar4 = *(int *)param_5;
        *(int *)(puVar1 + 4) = iVar4;
        *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1;
      }
    }
    lVar2 = lVar2 + 1;
  }
LAB_82722050:
  if (99 < param_3) {
    if (param_3 < 0x66) {
      if ((param_6 == 0) || ((uVar7 & 0xff) != 0)) {
        if ((int)lVar2 == 0) goto LAB_82722144;
        uVar6 = *(int *)(iVar3 + 8) + 0x10;
        *(unsigned int *)(iVar3 + 8) = uVar6;
        if (*(unsigned int *)(iVar3 + 0x10) <= uVar6) {
          fn_826826A8((unsigned int *)(iVar3 + 8));
        }
        puVar1 = *(unsigned char **)(iVar3 + 8);
        if (puVar1 != (unsigned char *)0x0) {
          *puVar1 = 1;
        }
      }
      else {
        uVar6 = *(int *)(iVar3 + 8) + 0x10;
        dVar12 = (double)param_6;
        *(unsigned int *)(iVar3 + 8) = uVar6;
        if (*(unsigned int *)(iVar3 + 0x10) <= uVar6) {
          fn_826826A8((unsigned int *)(iVar3 + 8));
        }
        puVar1 = *(unsigned char **)(iVar3 + 8);
        if (puVar1 != (unsigned char *)0x0) {
          *(double *)(puVar1 + 8) = dVar12;
          *puVar1 = 3;
        }
      }
    }
    else {
      if (param_3 != 0x67) goto LAB_82722144;
      uVar6 = *(int *)(iVar3 + 8) + 0x10;
      *(unsigned int *)(iVar3 + 8) = uVar6;
      if (*(unsigned int *)(iVar3 + 0x10) <= uVar6) {
        fn_826826A8((unsigned int *)(iVar3 + 8));
      }
      puVar1 = *(unsigned char **)(iVar3 + 8);
      if (puVar1 != (unsigned char *)0x0) {
        *(unsigned int *)(puVar1 + 8) = param_7;
        *puVar1 = 4;
      }
    }
    lVar2 = lVar2 + 1;
  }
LAB_82722144:
  fn_82F6A594(lVar2);
  return;
}

