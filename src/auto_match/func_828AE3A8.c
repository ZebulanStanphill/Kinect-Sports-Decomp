typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82381BC0();
extern int fn_823AA970();
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_82897BD0();
extern int fn_8289D8D0();
extern int fn_8289DAD0();
extern int fn_8289E030();
extern int fn_8289EEE0();
extern int fn_828ACCE8();
extern int fn_828ACDB8();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828AECC0();
extern int fn_828B0528();
extern int fn_828B0DB8();
extern int fn_828BE158();
extern int fn_828C4240();
extern int fn_828C8008();
extern int fn_82A4AAA8();


__int64 fn_828AE3A8(int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int *piVar3;
  bool bVar4;
  char cVar12;
  int iVar8;
  int *piVar9;
  int *piVar10;
  unsigned int *puVar11;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar13;
  int aiStack_50;
  
  cVar12 = fn_828ACCE8();
  if ((cVar12 == '\0') || (bVar4 = true, param_1[0x23] == 0)) {
    bVar4 = false;
  }
  if ((bVar4) &&
     (((cVar12 = fn_828AD488(param_1), cVar12 != '\0' ||
       (cVar12 = fn_828AD0F8(param_1), cVar12 != '\0')) ||
      (cVar12 = fn_828C4240(param_1), cVar12 != '\0')))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    iVar8 = fn_8289D8D0(param_1);
    bVar4 = true;
    if (iVar8 == 0) goto LAB_828ae458;
  }
  else {
LAB_828ae458:
    bVar4 = false;
  }
  if (bVar4) {
    iVar8 = fn_8289E030(param_1);
    lVar13 = 1;
    if (iVar8 == 0) goto LAB_828ae47c;
  }
  else {
LAB_828ae47c:
    lVar13 = 0;
  }
  *(unsigned char *)(param_1 + 0x25) = 1;
  if (lVar13 == 0) goto LAB_828ae804;
  param_1[0x2d] = (int)param_2;
  piVar9 = (int *)fn_8289D8D0(param_1);
  piVar10 = (int *)fn_8289EEE0(param_1);
  cVar12 = fn_8289DAD0(piVar9);
  if (cVar12 == '\0') {
    uVar5 = fn_8265C9E0(0x90);
    if ((uVar5 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_823AA970(piVar9);
      uVar6 = fn_828C8008(uVar5,1,uVar6,param_2);
    }
    fn_82886518(uVar6,0xffffffffffffffff,0xffffffffffffffff);
    uVar7 = fn_82897BD0(piVar10);
    fn_828BE158(param_1,uVar6,uVar7,0);
    aiStack_50 = *(int *)param_1[0x88];
    if ((int *)aiStack_50 != (int *)param_1[0x88]) {
      do {
        piVar3 = *(int **)(aiStack_50 + 0x10);
        if (piVar3 == piVar9) {
          fn_82381BC0(&aiStack_50);
        }
        else {
          uVar6 = (**(int (***)())(*piVar3 + 0xc))(piVar3);
          fn_828AECC0(uVar6,2);
          fn_82381BC0(&aiStack_50);
          if (piVar3 != piVar10) {
            (**(int (***)())*piVar3)(piVar3,1);
          }
        }
      } while (aiStack_50 != param_1[0x88]);
    }
  }
  else {
    cVar12 = (**(int (***)())(*param_1 + 0x14))(param_1);
    if (cVar12 == '\0') {
LAB_828ae4fc:
      bVar4 = false;
    }
    else {
      cVar12 = fn_828B0528(param_1);
      bVar4 = true;
      if (cVar12 == '\0') goto LAB_828ae4fc;
    }
    puVar11 = (unsigned int *)0x0;
    if (bVar4) {
      iVar8 = fn_8289D8D0(param_1);
      puVar11 = (unsigned int *)fn_828B0DB8(*(unsigned int *)(iVar8 + 100));
      if ((puVar11 == (unsigned int *)0x0) || (bVar4 = true, *(char *)((int)puVar11 + 0x26) != '\0'))
      goto LAB_828ae548;
    }
    else {
LAB_828ae548:
      bVar4 = false;
    }
    piVar10 = (int *)param_1[0x8c];
    aiStack_50 = *piVar10;
    if (bVar4) {
      if ((int *)aiStack_50 != piVar10) {
        do {
          puVar1 = *(unsigned int **)(aiStack_50 + 0x10);
          bVar4 = true;
          if (puVar1 == puVar11) {
            uVar5 = fn_8265C9E0(0x90);
            if ((uVar5 & 0xffffffff) == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = fn_823AA970(piVar9);
              uVar6 = fn_828C8008(uVar5,0,uVar6,param_2);
            }
            fn_82886518(uVar6,0xffffffffffffffff,0xffffffffffffffff);
            uVar7 = fn_82897BD0(puVar11);
            fn_828BE158(param_1,uVar6,uVar7,0);
            bVar4 = false;
          }
          iVar8 = fn_82A4AAA8(puVar1);
          if (iVar8 != 2) {
            fn_828AECC0(puVar1,2);
          }
          fn_82381BC0(&aiStack_50);
          if ((bVar4) && (puVar1 != (unsigned int *)0x0)) {
            (**(int (***)())*puVar1)(puVar1,1);
          }
        } while (aiStack_50 != param_1[0x8c]);
      }
    }
    else if ((int *)aiStack_50 != piVar10) {
      do {
        uVar2 = *(unsigned int *)(aiStack_50 + 0x10);
        iVar8 = fn_82A4AAA8(uVar2);
        if (iVar8 != 2) {
          uVar5 = fn_8265C9E0(0x90);
          if ((uVar5 & 0xffffffff) == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = fn_823AA970(piVar9);
            uVar6 = fn_828C8008(uVar5,0,uVar6,0xc);
          }
          fn_82886518(uVar6,0xffffffffffffffff,0xffffffffffffffff);
          uVar7 = fn_82897BD0(uVar2);
          fn_828BE158(param_1,uVar6,uVar7,0);
          fn_828AECC0(uVar2,2);
        }
        fn_82381BC0(&aiStack_50);
      } while (aiStack_50 != param_1[0x8c]);
    }
  }
  (**(int (***)())(*piVar9 + 0x18))(piVar9);
  *(unsigned char *)(param_1 + 0x32) = 0;
  fn_828ACDB8(param_1,6);
LAB_828ae804:
  *(unsigned char *)(param_1 + 0x25) = 0;
  return lVar13;
}

