typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82681BF8();
extern int fn_82681E98();
extern int fn_82687270();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_82696AD0();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_8269A418();
extern int fn_8269F500();
extern int fn_826C59F8();
extern int fn_826D2B68();
extern int fn_826DB990();
extern unsigned int iStack_40;
extern unsigned int iStack_9c;
extern unsigned int iStack_a4;
extern unsigned int iStack_a8;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_94;
extern unsigned int uStack_ac;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826D37C8(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  int *piVar5;
  unsigned __int64 uVar3;
  char cVar9;
  int iVar6;
  unsigned __int64 uVar4;
  int *piVar7;
  unsigned int uVar8;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  char in_RESERVE;
  unsigned char bVar13;
  double dVar14;
  unsigned int *puStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int *piStack_a0;
  int iStack_9c;
  int *piStack_98;
  unsigned int uStack_94;
  __int64 lStack_90;
  int aiStack_80 [16];
  int iStack_40;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  piVar5 = (int *)fn_826C59F8(param_1);
  bVar13 = (piVar5 == (int *)0x0) << 1;
  if (piVar5 == (int *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0x1c) < 3) {
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  uVar3 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_b0,uVar3,uVar2,0xffffffffffffffff,0);
  piStack_a0 = (int *)0x0;
  iStack_9c = 0;
  fn_8268C510(&uStack_ac,*puStack_b0);
  uVar3 = (**(int (***)())(*piVar5 + 0x48))(piVar5);
  cVar9 = fn_826DB990(uVar3,&piStack_a0,&uStack_ac);
  lVar11 = ((unsigned __int64)uStack_ac & 0xfffffffc) + 4;
  do {
    puVar12 = (unsigned int *)lVar11;
    uVar10 = (unsigned __int64)*puVar12;
    if (in_RESERVE != '\0') {
      uVar8 = storeWordConditionalIndexed(uVar10 - 1,0,lVar11);
      *puVar12 = uVar8;
      bVar13 = 2;
    }
  } while (!(bool)(bVar13 >> 1 & 1));
  if (uVar10 == 1) {
    fn_8267BE38();
  }
  if (cVar9 == '\0') {
    iVar6 = piVar5[0x20];
    uVar2 = *puStack_b0;
    if (iVar6 == 0) {
      iVar6 = fn_8269F500(piVar5);
    }
    uVar3 = 0xffffffff820058d0;
  }
  else {
    uVar10 = (**(int (***)())(*piStack_a0 + 8))();
    if ((uVar10 & 0x8000) != 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x18);
      iStack_a4 = piStack_a0[3];
      uStack_94 = *(unsigned int *)(iStack_9c + 0x2c);
      piStack_98 = piStack_a0;
      uVar3 = fn_826957D0(param_1,2);
      dVar14 = (double)fn_826972E0(uVar3,uVar2);
      lStack_90 = (__int64)(int)dVar14;
      fn_82681BF8((double)lbl_821AAD20,aiStack_80,&iStack_a4,
                      (unsigned __int64)(unsigned int)(int)dVar14 + 0x4000,1,0xffffffff831552e0,1,
                      0xffffffff83155190);
      if ((iStack_40 < 0) || (0x7efffffd < iStack_40)) {
        iVar6 = piVar5[0x20];
        uVar2 = *puStack_b0;
        if (iVar6 == 0) {
          iVar6 = fn_8269F500(piVar5);
        }
        fn_82681E98(piVar5 + 3,0xffffffff82005854,**(unsigned int **)(iVar6 + 0xc),uVar2,
                          iStack_40);
      }
      else {
        if (*(int *)(param_1 + 0x1c) == 4) {
          uVar2 = *(unsigned int *)(param_1 + 0x18);
          uVar3 = fn_826957D0(param_1,3);
          uVar3 = fn_82696AD0(uVar3,uVar2);
        }
        else {
          uVar3 = 0;
        }
        uVar2 = *(unsigned int *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,1);
        fn_82696D38(&iStack_a8,uVar4,uVar2,0xffffffffffffffff,0);
        piVar7 = (int *)fn_826D2B68(piVar5,aiStack_80,&iStack_a8,0,uVar3,0xffffffffffffffff,1,
                                      &piStack_98);
        if (piVar7 != (int *)0x0) {
          piVar7[1] = piVar7[1] + 1;
        }
        lVar11 = (unsigned __int64)*(unsigned int *)(iStack_a8 + 8) - 1;
        *(int *)(iStack_a8 + 8) = (int)lVar11;
        if (lVar11 == 0) {
          fn_826944C8(iStack_a8);
        }
        if (piVar7 != (int *)0x0) {
          (**(int (***)())(*piVar7 + 0x14))(piVar7,0);
          uVar8 = fn_8269A418(piVar5);
          if (5 < uVar8) {
            fn_82696480(*(unsigned int *)(param_1 + 4),
                              -(unsigned int)((*(unsigned char *)((int)piVar7 + 0x66) & 0x80) != 0) & (unsigned int)piVar7);
          }
          fn_8267C498(piVar7);
        }
      }
      if (aiStack_80[0] != 0) {
        fn_8267C498();
      }
      goto LAB_826d3b24;
    }
    iVar6 = piVar5[0x20];
    uVar2 = *puStack_b0;
    if (iVar6 == 0) {
      iVar6 = fn_8269F500(piVar5);
    }
    uVar3 = 0xffffffff82005894;
  }
  fn_82681E98(piVar5 + 3,uVar3,**(unsigned int **)(iVar6 + 0xc),uVar2);
LAB_826d3b24:
  if (piStack_a0 != (int *)0x0) {
    fn_82687270();
  }
  uVar8 = puStack_b0[2];
  puStack_b0[2] = (int)((unsigned __int64)uVar8 - 1);
  if ((unsigned __int64)uVar8 - 1 == 0) {
    fn_826944C8(puStack_b0);
  }
  return;
}

