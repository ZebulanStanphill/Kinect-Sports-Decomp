typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_450;
extern unsigned int *auStack_470;
extern unsigned int *auStack_498;
extern int fn_822315A0();
extern int fn_8225C590();
extern int fn_8225DA18();
extern int fn_8225DA70();
extern int fn_82267890();
extern int fn_82268330();
extern int fn_822686B0();
extern int fn_82269440();
extern int fn_82282468();
extern int fn_82284B08();
extern int fn_82286EA8();
extern int fn_82286F08();
extern int fn_82287590();
extern int fn_82287638();
extern int fn_822888F0();
extern int fn_82289408();
extern int fn_8228ABB8();
extern int fn_8228B270();
extern int fn_8228B330();
extern int fn_8228BF40();
extern int fn_822C5B18();
extern int fn_8234F298();
extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_8266F628();
extern unsigned int iStack_48c;
extern unsigned int iStack_49c;
extern unsigned int iStack_4a0;
extern unsigned int lbl_821A96C8;
extern unsigned int lbl_832767C8;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82286FF0(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  __int64 lVar12;
  int *piVar13;
  unsigned int *puVar14;
  char in_RESERVE;
  unsigned char in_cr0;
  double dVar15;
  int iStack_4a0;
  int iStack_49c;
  unsigned char auStack_498 [8];
  unsigned char **ppuStack_490;
  int iStack_48c;
  unsigned char ***pppuStack_480;
  unsigned char auStack_470 [32];
  unsigned char auStack_450 [1104];
  
  uVar1 = *(unsigned int *)(param_2 + 0x600);
  if (uVar1 == 0) {
    uVar6 = fn_8225C590();
    piVar13 = (int *)(param_2 + 0x6a8);
    bVar5 = true;
    uVar10 = 0;
    do {
      if ((piVar13[1] != -1) &&
         (((*piVar13 == 1 || (*piVar13 == 0)) && (uVar7 = fn_8225DA18(uVar6), piVar13[4] != 0)
          ))) {
        iVar8 = fn_8225DA70(uVar6,auStack_450,uVar7,0);
        if (iVar8 != 0) {
          uVar9 = uVar10;
          if (*(int *)(*(int *)(param_2 + 0x11f0) + 0x18b8) == 1) {
            uVar9 = -((unsigned __int64)(uVar10 < 2) - 1);
          }
          fn_8234F298(*(int *)(param_2 + 0x11f0) + 0x234,uVar9,&iStack_4a0,auStack_498);
          fn_8228ABB8(param_2,uVar10,auStack_450,&iStack_4a0,auStack_498);
          piVar13[5] = 1;
          piVar13[4] = 0;
        }
        bVar5 = false;
      }
      if (piVar13[5] != 0) {
        lVar12 = fn_82287590(param_2,uVar10);
        bVar5 = (bool)(lVar12 != 0 & bVar5);
      }
      uVar10 = uVar10 + 1;
      piVar13 = piVar13 + 0x10;
    } while ((int)uVar10 < 4);
    if (bVar5) {
      *(unsigned int *)(param_2 + 0x604) = 1;
    }
    goto LAB_82287438;
  }
  if (3 < uVar1) {
    if (uVar1 == 4) {
      if (*(int *)(param_2 + 0x7c8) == 0) {
        *(unsigned int *)(param_2 + 0x7c8) = 1;
        fn_82289408(param_2,1,0,1);
      }
      goto LAB_82287438;
    }
    if (0xd < uVar1) {
      if (uVar1 == 0xe) {
        uVar10 = (unsigned __int64)lbl_832767C8;
        do {
          puVar11 = (unsigned int *)(uVar10 + 0xa0);
          uVar1 = *puVar11;
          if (in_RESERVE != '\0') {
            uVar4 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,uVar10 + 0xa0);
            *puVar11 = uVar4;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        if (uVar1 == 0) {
          *(unsigned int *)(param_2 + 0x604) = 0xf;
        }
      }
      goto LAB_82287438;
    }
  }
  lVar12 = 0;
  piVar13 = (int *)(param_2 + 0x6bc);
  do {
    if (*piVar13 != 0) {
      fn_82287590(param_2,lVar12);
    }
    lVar12 = lVar12 + 1;
    piVar13 = piVar13 + 0x10;
  } while ((int)lVar12 < 4);
  if (*(int *)(param_2 + 0x60c) != 0) {
    fn_82267890(param_1,*(unsigned int *)(*(int *)(param_2 + 0x60c) + 0x5c0));
    iVar8 = *(int *)(*(int *)(param_2 + 0x60c) + 0x5c0);
    if (*(int *)(iVar8 + 4) == 0) {
      puVar14 = *(unsigned int **)(iVar8 + 0xc);
      for (puVar2 = (unsigned int *)*puVar14; puVar2 != puVar14; puVar2 = (unsigned int *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_82287140;
      }
      if (*(int *)(param_2 + 0x60c) != 0) {
        fn_82286EA8();
      }
      *(unsigned int *)(param_2 + 0x60c) = 0;
    }
  }
LAB_82287140:
  if (*(int *)(param_2 + 0x610) != 0) {
    fn_82267890(param_1,*(unsigned int *)(*(int *)(param_2 + 0x610) + 0x5c0));
    iVar8 = *(int *)(*(int *)(param_2 + 0x610) + 0x5c0);
    if (*(int *)(iVar8 + 4) == 0) {
      puVar14 = *(unsigned int **)(iVar8 + 0xc);
      for (puVar2 = (unsigned int *)*puVar14; puVar2 != puVar14; puVar2 = (unsigned int *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_822871a4;
      }
      if (*(int *)(param_2 + 0x610) != 0) {
        fn_82286EA8();
      }
      *(unsigned int *)(param_2 + 0x610) = 0;
    }
  }
LAB_822871a4:
  iVar8 = *(int *)(param_2 + 0x614);
  if (iVar8 != 0) {
    if ((*(int *)(param_2 + 0x7cc) == 0) &&
       (*(unsigned int *)(iVar8 + 0x630) <
        (unsigned int)((*(int *)(iVar8 + 0x6ec) - *(int *)(iVar8 + 0x6e8)) / 0x38))) {
      pppuStack_480 = &ppuStack_490;
      dVar15 = (double)*(float *)(param_2 + 0x1220);
      uVar3 = *(unsigned int *)(param_2 + 0x67c);
      ppuStack_490 = &lbl_821A96C8;
      iStack_48c = param_2;
      fn_822C5B18(auStack_470,&ppuStack_490);
      fn_8228BF40(dVar15,uVar3,uVar3);
      fn_82359C18(&ppuStack_490);
      *(unsigned int *)(param_2 + 0x7cc) = 1;
    }
    fn_822686B0(param_1,*(unsigned int *)(param_2 + 0x614));
    iVar8 = *(int *)(param_2 + 0x614);
    if (*(int *)(*(int *)(iVar8 + 0x5c0) + 4) == 0) {
      puVar14 = *(unsigned int **)(*(int *)(iVar8 + 0x5c0) + 0xc);
      for (puVar2 = (unsigned int *)*puVar14; puVar2 != puVar14; puVar2 = (unsigned int *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_8228729c;
      }
      if (iVar8 != 0) {
        fn_82268330(iVar8);
        fn_8265CA20(iVar8);
      }
      *(unsigned int *)(param_2 + 0x614) = 0;
    }
  }
LAB_8228729c:
  iVar8 = *(int *)(param_2 + 0x618);
  if (iVar8 != 0) {
    if ((*(int *)(iVar8 + 0x2b4) != 0) || (*(int *)(iVar8 + 0x2b8) != 0)) {
      fn_82269440(iVar8);
    }
    if (*(int *)(iVar8 + 0x380) != 0) {
      fn_82284B08(param_1);
    }
    fn_82267890(param_1,*(unsigned int *)(iVar8 + 0x2cc));
    iVar8 = *(int *)(*(int *)(param_2 + 0x618) + 0x2cc);
    if (*(int *)(iVar8 + 4) == 0) {
      puVar14 = *(unsigned int **)(iVar8 + 0xc);
      for (puVar2 = (unsigned int *)*puVar14; puVar2 != puVar14; puVar2 = (unsigned int *)*puVar2) {
        if (*(int *)(puVar2[2] + 0x52c) != 8) goto LAB_82287438;
      }
      if (*(int *)(param_2 + 0x618) != 0) {
        fn_82286F08();
      }
      *(unsigned int *)(param_2 + 0x618) = 0;
    }
  }
LAB_82287438:
  fn_82287638(param_2);
  if (*(int *)(param_2 + 0x11f4) != 0) {
    fn_82284B08(param_1);
  }
  if (*(int *)(param_2 + 0x67c) != 0) {
    fn_82267890(param_1,*(unsigned int *)(*(int *)(param_2 + 0x67c) + 0x80));
  }
  if ((*(int *)(param_2 + 0x600) != 1) && (*(int *)(param_2 + 0x600) != 10)) {
    iVar8 = *(int *)(param_2 + 0x69c);
    if ((*(int *)(iVar8 + 0x44) != 0) &&
       (((*(int *)(iVar8 + 0x44) != 2 && (*(int *)(iVar8 + 0x8c) == 0)) &&
        (*(int *)(iVar8 + 0x6c) == 0)))) {
      fn_822888F0(&iStack_4a0,param_2);
      if (iStack_4a0 != 0) {
        fn_8266F628(iStack_4a0,1);
      }
      if (iStack_49c != 0) {
        fn_822315A0();
      }
    }
  }
  lVar12 = 0;
  puVar14 = (unsigned int *)(param_2 + 0x62c);
  do {
    if (puVar14[1] != 0) {
      if (puVar14[-3] == 0) {
        fn_8228B270(param_2,lVar12);
      }
      fn_8228B330(param_2,lVar12,*puVar14);
      piVar13 = *(int **)(puVar14[-4] + 0xb4);
      iVar8 = (**(int (***)())(*piVar13 + 0x14))(piVar13);
      if (iVar8 == 0) {
        (**(int (***)())(*piVar13 + 0xc))(piVar13);
      }
      else {
        fn_82282468(puVar14[-4],puVar14[-1]);
        puVar14[1] = 0;
      }
    }
    lVar12 = lVar12 + 1;
    puVar14 = puVar14 + 6;
  } while ((int)lVar12 < 4);
  return;
}

