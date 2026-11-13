#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_6c;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_82250928();
extern int fn_822509A0();
extern int fn_823AB470();
extern int fn_82517978();
extern int fn_8251B5E8();
extern int fn_8251B708();
extern int fn_8260D428();
extern int fn_8288A398();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828B62F0();
extern int fn_828B6380();
extern int fn_828B63C8();
extern int fn_828B65A8();
extern int fn_828BA4B8();
extern int fn_828BB4B8();
extern int fn_828BB690();
extern int fn_828C24F0();
extern int fn_828C2670();
extern int fn_828C3BF8();
extern int fn_828C3CA8();
extern int fn_828C3CE0();
extern int fn_828C41E8();
extern int fn_828C4360();
extern int fn_828EA820();
extern int fn_82923B38();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_68;
extern unsigned int lbl_83265988;
extern unsigned int lbl_8326C2A0;
extern unsigned int lbl_8326C2A4;
extern unsigned int lbl_8329EA40;
extern unsigned int lbl_8329EA50;
extern unsigned int lbl_8329EA54;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_64;


void fn_8251AAC8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  char cVar11;
  int iVar7;
  int *piVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar6;
  unsigned char *puVar10;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned char auStack_70 [4];
  unsigned char auStack_6c [4];
  int iStack_68;
  unsigned int uStack_64;
  unsigned char auStack_60 [4];
  unsigned char auStack_5c [4];
  unsigned int uStack_58;
  unsigned int uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  cVar11 = fn_828AD0F8(*(unsigned int *)(*(int *)(param_1 + 4) + 8));
  iVar12 = lbl_83265988;
  if (cVar11 == '\0') {
    cVar11 = fn_828AD488(*(unsigned int *)(*(int *)(param_1 + 4) + 8));
    if (cVar11 == '\0') {
      return;
    }
    fn_828C3CE0(auStack_6c,*(unsigned int *)(*(int *)(param_1 + 4) + 8));
    cVar11 = fn_828B62F0(auStack_6c);
    if (cVar11 != '\0') {
      fn_828C4360(auStack_6c);
      fn_828B65A8();
      fn_828C41E8(*(unsigned int *)(*(int *)(param_1 + 4) + 8),auStack_6c);
    }
    puVar10 = auStack_6c;
  }
  else {
    if (lbl_83265988 == 0) {
      if (*(int *)(param_1 + 0x50) == 2) {
        return;
      }
      *(unsigned int *)(param_1 + 0xc) = 1;
      *(unsigned int *)(param_1 + 0x54) = 2;
      return;
    }
    iVar7 = fn_823AB470(lbl_83265988);
    if (iVar7 != 2) {
      if (*(int *)(param_1 + 0x50) == 2) {
        return;
      }
      *(unsigned int *)(param_1 + 0xc) = 2;
      *(unsigned int *)(param_1 + 0x54) = 2;
      return;
    }
    iVar7 = *(int *)(param_1 + 0x18);
    iStack_68 = 0;
    piVar8 = (int *)fn_8251B708(&uStack_64,param_1 + 0x14);
    uVar1 = lbl_8326C2A4;
    if (*piVar8 != iVar7) {
      puVar9 = (unsigned int *)fn_8251B5E8(param_1 + 0x14);
      cVar11 = fn_828BA4B8(*puVar9,&iStack_68);
      uVar1 = lbl_8326C2A4;
      if ((cVar11 != '\0') && (iStack_68 != 0)) {
        uVar1 = lbl_8326C2A0;
      }
    }
    fn_82923B38(auStack_70);
    iVar7 = *(int *)(param_1 + 0x40);
    if (iVar7 == 0) {
      uVar2 = *(unsigned int *)(param_1 + 0x3c);
      uVar3 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
      uVar6 = fn_828EA820(iVar12);
      uVar6 = fn_828C3CA8(auStack_5c,uVar3,uVar6,uVar1,uVar2,2);
      fn_828B63C8(auStack_70,uVar6);
      puVar10 = auStack_5c;
    }
    else {
      uVar2 = *(unsigned int *)(param_1 + 0x3c);
      uVar3 = *(unsigned int *)(*(int *)(param_1 + 4) + 8);
      uVar6 = fn_828EA820(iVar12);
      uVar6 = fn_828C3BF8(auStack_60,uVar3,uVar6,uVar1,uVar2,iVar7,2);
      fn_828B63C8(auStack_70,uVar6);
      puVar10 = auStack_60;
    }
    fn_828B6380(puVar10);
    cVar11 = fn_828B62F0(auStack_70);
    if (cVar11 != '\0') {
      piVar8 = (int *)fn_828C4360(auStack_70);
      iVar7 = fn_8288A398();
      iVar12 = *piVar8;
      uVar6 = fn_828BB4B8(&uStack_58,*(unsigned int *)(iVar7 + 0x38));
      (**(int (***)())(iVar12 + 0x10))(piVar8,0xffffffff8329ea78,uVar6);
      piVar8 = (int *)fn_828C4360(auStack_70);
      iVar12 = *piVar8;
      uVar6 = fn_828BB4B8(&uStack_58,
                                *(unsigned int *)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x28));
      (**(int (***)())(iVar12 + 0x10))(piVar8,0xffffffff8329ea5c,uVar6);
      piVar8 = (int *)fn_828C4360(auStack_70);
      (**(int (***)())(*piVar8 + 0xc))(piVar8,0xffffffff8329600c,0xffffffff83295ff0);
      uStack_64 = **(int **)(param_1 + 0x18);
      if ((int *)uStack_64 != *(int **)(param_1 + 0x18)) {
        do {
          uVar5 = uStack_64;
          iVar12 = uStack_64 + 0xc;
          fn_828BB690(&iStack_50,*(unsigned int *)(*(int *)(param_1 + 4) + 8),iVar12);
          if (iStack_50 != 0) {
            uVar13 = 0xffffffff8329ea40;
            if (0xf < lbl_8329EA54) {
              uVar13 = (unsigned __int64)lbl_8329EA40;
            }
            iVar7 = fn_8260D428(iStack_50 + 0xc,0,*(unsigned int *)(iStack_50 + 0x1c),uVar13,
                                 lbl_8329EA50);
            if ((iVar7 != 0) || (iStack_68 != 0)) {
              piVar8 = (int *)fn_828C4360(auStack_70);
              uStack_58 = 0;
              uStack_54 = 0;
              fn_82517978(&uStack_58,*(unsigned int *)(uVar5 + 0x28),
                                *(unsigned int *)(uVar5 + 0x2c),0);
              (**(int (***)())(*piVar8 + 0x10))(piVar8,iVar12,&uStack_58);
            }
          }
          if (iStack_4c != 0) {
            fn_822315A0();
          }
          fn_82250928(&uStack_64);
        } while (uStack_64 != *(unsigned int *)(param_1 + 0x18));
      }
      puVar4 = *(unsigned int **)(param_1 + 0x28);
      uStack_64 = *puVar4;
      while (uVar13 = (unsigned __int64)uStack_64, uVar13 != ZEXT48(puVar4)) {
        fn_828C24F0(&iStack_40,*(unsigned int *)(*(int *)(param_1 + 4) + 8),uVar13 + 0xc);
        if (iStack_40 != 0) {
          fn_828C2670(&iStack_48,iStack_40,uVar13 + 0x28);
          if (iStack_48 != 0) {
            piVar8 = (int *)fn_828C4360(auStack_70);
            (**(int (***)())(*piVar8 + 0xc))(piVar8,uVar13 + 0xc,uVar13 + 0x28);
          }
          if (iStack_44 != 0) {
            fn_822315A0();
          }
        }
        if (iStack_3c != 0) {
          fn_822315A0();
        }
        fn_822509A0(&uStack_64);
        puVar4 = *(unsigned int **)(param_1 + 0x28);
      }
      piVar8 = (int *)fn_828C4360(auStack_70);
      (**(int (***)())(*piVar8 + 0xc))(piVar8,0xffffffff83296028,0xffffffff8329ea94);
      fn_828C4360(auStack_70);
      fn_828B65A8();
      fn_828C41E8(*(unsigned int *)(*(int *)(param_1 + 4) + 8),auStack_70);
    }
    puVar10 = auStack_70;
  }
  fn_828B6380(puVar10);
  return;
}

