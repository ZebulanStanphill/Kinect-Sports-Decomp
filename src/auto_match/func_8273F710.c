typedef unsigned char bool;
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_82694BF0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696BC8();
extern int fn_82696D38();
extern int fn_8269A190();
extern int fn_826A7398();
extern int fn_826AE288();
extern int fn_826B32D0();
extern int fn_8273C948();
extern int fn_8273CA78();
extern int fn_8273E508();
extern int fn_8273F468();
extern unsigned int iStack_84;
extern unsigned int iStack_8c;
extern unsigned int iStack_b0;
extern unsigned int lbl_820121E0;
extern unsigned int lbl_82012260;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_88;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8273F710(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned __int64 uVar3;
  int iVar5;
  char cVar8;
  int iVar6;
  int *piVar7;
  __int64 lVar4;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  int *piVar12;
  __int64 lVar13;
  char in_RESERVE;
  unsigned char bVar14;
  int iStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int *puStack_a4;
  int *apiStack_a0 [2];
  int *piStack_98;
  unsigned char ***pppuStack_94;
  unsigned char **ppuStack_90;
  int iStack_8c;
  unsigned int uStack_88;
  int iStack_84;
  unsigned char bStack_80;
  unsigned char **ppuStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned char uStack_54;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    fn_82696D38(&puStack_a4,uVar3,uVar1,0xffffffffffffffff,0);
    fn_82681728(&piStack_98,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      0xffffffff82196582);
    piVar12 = piStack_98;
    if (1 < *(int *)(param_1 + 0x1c)) {
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,1);
      fn_82696D38(apiStack_a0,uVar3,uVar1,0xffffffffffffffff,0);
      piVar12 = apiStack_a0[0];
      apiStack_a0[0][2] = apiStack_a0[0][2] + 1;
      uVar10 = piStack_98[2];
      piStack_98[2] = (int)((unsigned __int64)uVar10 - 1);
      if ((unsigned __int64)uVar10 - 1 == 0) {
        fn_826944C8();
      }
      uVar10 = apiStack_a0[0][2];
      apiStack_a0[0][2] = (int)((unsigned __int64)uVar10 - 1);
      if ((unsigned __int64)uVar10 - 1 == 0) {
        fn_826944C8(apiStack_a0[0]);
      }
    }
    fn_8268C510(&uStack_a8,*puStack_a4);
    fn_8268C510(&uStack_ac,*piVar12);
    fn_8269A190(&iStack_b0,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                      &uStack_ac);
    fn_82694BF0(&iStack_b0,0xffffffff8201232c);
    fn_82694BF0(&iStack_b0,((unsigned __int64)uStack_a8 & 0xfffffffc) + 8);
    fn_826AE288(&uStack_88,*(unsigned int *)(param_1 + 0x18),0x2a);
    lVar13 = (unsigned __int64)uStack_88 + 0x34;
    iVar5 = fn_8273E508(lVar13,&iStack_b0);
    uVar10 = -(unsigned int)(iVar5 != 0) & iVar5 + 4U;
    if (uVar10 == 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      iVar5 = fn_826B32D0(*(int *)(param_1 + 0x18),*(unsigned int *)(iVar5 + 0x2a0),iVar5 + 0xb0
                                ,0,0xffffffffffffffff);
      cVar8 = fn_8273C948(iVar5,&uStack_a8,&uStack_ac);
      if (cVar8 == '\0') {
        puVar2 = *(unsigned char **)(param_1 + 4);
        fn_826959C8(puVar2);
        *puVar2 = 1;
        if (iVar5 != 0) {
          fn_826824B0(iVar5);
        }
        if (((bStack_80 & 2) == 0) && (uStack_88 != 0)) {
          fn_826824B0();
        }
        uStack_88 = 0;
        if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
          fn_826824B0();
        }
        iStack_84 = 0;
        lVar13 = (unsigned __int64)*(unsigned int *)(iStack_b0 + 8) - 1;
        bVar14 = (lVar13 == 0) << 1;
        *(int *)(iStack_b0 + 8) = (int)lVar13;
        if (lVar13 == 0) {
          fn_826944C8(iStack_b0);
        }
        lVar13 = ((unsigned __int64)uStack_ac & 0xfffffffc) + 4;
        do {
          puVar11 = (unsigned int *)lVar13;
          uVar9 = (unsigned __int64)*puVar11;
          if (in_RESERVE != '\0') {
            uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
            *puVar11 = uVar10;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
        bVar14 = (uVar9 == 1) << 1;
        if (uVar9 == 1) {
          fn_8267BE38();
        }
        lVar13 = ((unsigned __int64)uStack_a8 & 0xfffffffc) + 4;
        do {
          puVar11 = (unsigned int *)lVar13;
          uVar9 = (unsigned __int64)*puVar11;
          if (in_RESERVE != '\0') {
            uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
            *puVar11 = uVar10;
            bVar14 = 2;
          }
        } while (!(bool)(bVar14 >> 1 & 1));
      }
      else {
        iVar6 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
        uVar9 = fn_826B32D0(*(int *)(param_1 + 0x18),*(unsigned int *)(iVar6 + 0x2a0),
                                  iVar6 + 0xc,0,0xffffffffffffffff);
        uStack_68 = *(unsigned int *)(param_1 + 0x18);
        uStack_64 = (unsigned int)uVar9;
        uStack_60 = 0;
        ppuStack_70 = &lbl_82012260;
        uStack_6c = 1;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        iVar6 = fn_826A7398(uStack_68);
        piVar7 = (int *)(**(int (***)())(*(int *)(iVar6 + 8) + 0xc))((int *)(iVar6 + 8),0x25);
        iVar6 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
        lVar4 = (**(int (***)())(*(int *)(iVar6 + 8) + 0xc))((int *)(iVar6 + 8),10);
        if (lVar4 != 0) {
          fn_8267C4F0(lVar4);
        }
        if ((piVar7 == (int *)0x0) ||
           (cVar8 = (**(int (***)())(*piVar7 + 4))(piVar7,&uStack_a8,&uStack_ac,&ppuStack_70,lVar4),
           cVar8 == '\0')) {
          puVar2 = *(unsigned char **)(param_1 + 4);
          fn_826959C8(puVar2);
          *puVar2 = 1;
          if (piVar7 != (int *)0x0) {
            fn_8267C4F0(piVar7);
          }
          fn_8267BE38(uStack_60);
          fn_8267C488(&ppuStack_70);
          if ((uVar9 & 0xffffffff) != 0) {
            fn_826824B0(uVar9);
          }
          if (iVar5 != 0) {
            fn_826824B0(iVar5);
          }
          if (((bStack_80 & 2) == 0) && (uStack_88 != 0)) {
            fn_826824B0();
          }
          uStack_88 = 0;
          if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
            fn_826824B0();
          }
          iStack_84 = 0;
          lVar13 = (unsigned __int64)*(unsigned int *)(iStack_b0 + 8) - 1;
          bVar14 = (lVar13 == 0) << 1;
          *(int *)(iStack_b0 + 8) = (int)lVar13;
          if (lVar13 == 0) {
            fn_826944C8(iStack_b0);
          }
          lVar13 = ((unsigned __int64)uStack_ac & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar13;
            uVar9 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
              *puVar11 = uVar10;
              bVar14 = 2;
            }
          } while (!(bool)(bVar14 >> 1 & 1));
          bVar14 = (uVar9 == 1) << 1;
          if (uVar9 == 1) {
            fn_8267BE38();
          }
          lVar13 = ((unsigned __int64)uStack_a8 & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar13;
            uVar9 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
              *puVar11 = uVar10;
              bVar14 = 2;
            }
          } while (!(bool)(bVar14 >> 1 & 1));
        }
        else {
          fn_8273CA78(iVar5,*(unsigned int *)(param_1 + 0x18),uVar9);
          fn_82696BC8(*(unsigned int *)(param_1 + 4),iVar5);
          if (iVar5 != 0) {
            *(unsigned int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1U & 0x8fffffff;
          }
          piStack_98 = &iStack_b0;
          pppuStack_94 = &ppuStack_90;
          ppuStack_90 = &lbl_820121E0;
          iStack_8c = iVar5;
          fn_8273F468(lVar13,lVar13,&piStack_98,*(unsigned int *)(iStack_b0 + 0xc));
          ppuStack_90 = &lbl_820121E0;
          if (iStack_8c != 0) {
            fn_826824B0();
          }
          fn_8267C4F0(piVar7);
          fn_8267BE38(uStack_60);
          fn_8267C488(&ppuStack_70);
          if ((uVar9 & 0xffffffff) != 0) {
            fn_826824B0(uVar9);
          }
          if (iVar5 != 0) {
            fn_826824B0(iVar5);
          }
          if (((bStack_80 & 2) == 0) && (uStack_88 != 0)) {
            fn_826824B0();
          }
          uStack_88 = 0;
          if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
            fn_826824B0();
          }
          iStack_84 = 0;
          lVar13 = (unsigned __int64)*(unsigned int *)(iStack_b0 + 8) - 1;
          bVar14 = (lVar13 == 0) << 1;
          *(int *)(iStack_b0 + 8) = (int)lVar13;
          if (lVar13 == 0) {
            fn_826944C8(iStack_b0);
          }
          lVar13 = ((unsigned __int64)uStack_ac & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar13;
            uVar9 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
              *puVar11 = uVar10;
              bVar14 = 2;
            }
          } while (!(bool)(bVar14 >> 1 & 1));
          bVar14 = (uVar9 == 1) << 1;
          if (uVar9 == 1) {
            fn_8267BE38();
          }
          lVar13 = ((unsigned __int64)uStack_a8 & 0xfffffffc) + 4;
          do {
            puVar11 = (unsigned int *)lVar13;
            uVar9 = (unsigned __int64)*puVar11;
            if (in_RESERVE != '\0') {
              uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
              *puVar11 = uVar10;
              bVar14 = 2;
            }
          } while (!(bool)(bVar14 >> 1 & 1));
        }
      }
    }
    else {
      fn_82696BC8(*(unsigned int *)(param_1 + 4),*(unsigned int *)(uVar10 + 4));
      if (((bStack_80 & 2) == 0) && (uStack_88 != 0)) {
        fn_826824B0();
      }
      uStack_88 = 0;
      if (((bStack_80 & 1) == 0) && (iStack_84 != 0)) {
        fn_826824B0();
      }
      iStack_84 = 0;
      lVar13 = (unsigned __int64)*(unsigned int *)(iStack_b0 + 8) - 1;
      bVar14 = (lVar13 == 0) << 1;
      *(int *)(iStack_b0 + 8) = (int)lVar13;
      if (lVar13 == 0) {
        fn_826944C8(iStack_b0);
      }
      lVar13 = ((unsigned __int64)uStack_ac & 0xfffffffc) + 4;
      do {
        puVar11 = (unsigned int *)lVar13;
        uVar9 = (unsigned __int64)*puVar11;
        if (in_RESERVE != '\0') {
          uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
          *puVar11 = uVar10;
          bVar14 = 2;
        }
      } while (!(bool)(bVar14 >> 1 & 1));
      bVar14 = (uVar9 == 1) << 1;
      if (uVar9 == 1) {
        fn_8267BE38();
      }
      lVar13 = ((unsigned __int64)uStack_a8 & 0xfffffffc) + 4;
      do {
        puVar11 = (unsigned int *)lVar13;
        uVar9 = (unsigned __int64)*puVar11;
        if (in_RESERVE != '\0') {
          uVar10 = storeWordConditionalIndexed(uVar9 - 1,0,lVar13);
          *puVar11 = uVar10;
          bVar14 = 2;
        }
      } while (!(bool)(bVar14 >> 1 & 1));
    }
    if (uVar9 == 1) {
      fn_8267BE38();
    }
    uVar10 = piVar12[2];
    piVar12[2] = (int)((unsigned __int64)uVar10 - 1);
    if ((unsigned __int64)uVar10 - 1 == 0) {
      fn_826944C8(piVar12);
    }
    uVar10 = puStack_a4[2];
    puStack_a4[2] = (int)((unsigned __int64)uVar10 - 1);
    if ((unsigned __int64)uVar10 - 1 == 0) {
      fn_826944C8(puStack_a4);
    }
  }
  return;
}

