typedef unsigned char bool;
#define true 1
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_82468470();
extern int fn_8259BDA8();
extern int fn_82822368();
extern int fn_828223C8();
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_82825AD0();
extern int fn_82826050();
extern int fn_82827AC0();
extern int fn_828282D8();
extern int fn_82829120();
extern int fn_82829B70();
extern int fn_8286D418();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int iStack_70;


void fn_828283F0(int param_1,int param_2)

{
  unsigned int uVar1;
  bool bVar2;
  bool bVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar11;
  int iStack_70;
  int iStack_6c;
  int *piStack_68;
  int iStack_64;
  unsigned char auStack_60 [4];
  unsigned char auStack_5c [4];
  unsigned char auStack_58 [4];
  unsigned char auStack_54 [84];
  
  uVar4 = fn_828252D0(*(unsigned char *)(param_1 + 0x51));
  *(unsigned int *)(param_1 + 0x3cc) = uVar4;
  if (*(char *)(param_1 + 0x51) != '\0') {
    uVar10 = 0;
    do {
      uVar1 = uVar10 + 1 & 0xff;
      *(char *)(uVar10 + *(int *)(param_1 + 0x3cc)) = (char)uVar10 + -1;
      uVar10 = uVar1;
    } while (uVar1 < *(unsigned char *)(param_1 + 0x51));
  }
  uVar4 = fn_828252D0(*(int *)(param_1 + 0x24) << 2);
  *(unsigned int *)(param_1 + 0x3d0) = uVar4;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar11 = 0;
    do {
      iVar9 = uVar10 - 1;
      uVar10 = uVar10 + 1;
      *(int *)(iVar11 + *(int *)(param_1 + 0x3d0)) = iVar9;
      iVar11 = iVar11 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 0x24));
  }
  uVar4 = fn_828252D0(*(int *)(param_1 + 0x28) << 2);
  *(unsigned int *)(param_1 + 0x3d4) = uVar4;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar11 = 0;
    do {
      iVar9 = uVar10 - 1;
      uVar10 = uVar10 + 1;
      *(int *)(iVar11 + *(int *)(param_1 + 0x3d4)) = iVar9;
      iVar11 = iVar11 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 0x28));
  }
  iVar11 = param_1 + 0x2fc;
  fn_828223C8(iVar11,&iStack_6c);
  do {
    if (iStack_6c == 0) {
      fn_82827AC0(param_1);
      fn_828252D8(*(unsigned int *)(param_1 + 0x3cc));
      fn_828252D8(*(unsigned int *)(param_1 + 0x3d0));
      fn_828252D8(*(unsigned int *)(param_1 + 0x3d4));
      return;
    }
    fn_828223C8(iStack_6c,&iStack_64);
    iVar9 = iStack_6c;
    if (((param_2 == 0) && (*(int *)(iStack_6c + 0xc) == *(int *)(param_1 + 0x3d8))) ||
       ((param_2 == 1 && (*(int *)(*(int *)(iStack_6c + 0x3c) + 8) == 0)))) {
      fn_82822368();
      bVar2 = true;
      bVar3 = true;
      iVar7 = *(int *)(param_1 + 0x304);
      piVar5 = (int *)fn_82829120(auStack_60,iVar7,iVar9 + 0x18);
      iVar6 = iVar11;
      if (*piVar5 != *(int *)(iVar7 + 4)) {
        fn_82825AD0(auStack_5c,iVar7);
      }
      while (fn_828223C8(iVar6,&iStack_70), iStack_70 != 0) {
        bVar3 = (bool)(*(char *)(iStack_70 + 0x28) != *(char *)(iVar9 + 0x28) & bVar3);
        bVar2 = (bool)(*(int *)(iStack_70 + 0x10) != *(int *)(iVar9 + 0x10) & bVar2);
        iVar6 = iStack_70;
      }
      if (bVar2) {
        iVar7 = *(int *)(param_1 + 0x2f0);
        piVar5 = *(int **)(iVar7 + 4);
        piStack_68 = (int *)*piVar5;
        if (piStack_68 != piVar5) {
          iVar6 = *(int *)(iVar9 + 0x10);
          do {
            if (*(int *)(piStack_68[3] + 0x100) == iVar6) {
              fn_82468470(auStack_58,iVar7);
              break;
            }
            fn_8259BDA8(&piStack_68);
          } while (piStack_68 != piVar5);
        }
        piVar5 = (int *)**(int **)(param_1 + 0x2ec);
        piVar8 = (int *)*piVar5;
        if (piVar8 != piVar5) {
          do {
            if (piVar8[0x42] == *(int *)(iVar9 + 0x10)) {
              *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
              fn_8286D418(auStack_54);
              break;
            }
            piVar8 = (int *)*piVar8;
          } while (piVar8 != piVar5);
        }
      }
      if (bVar3) {
        iVar7 = param_1 + 0x2f4;
        do {
          fn_828223C8(iVar7,&iStack_70);
          if (iStack_70 == 0) goto LAB_828286c0;
          iVar7 = iStack_70;
        } while (*(char *)(iStack_70 + 0x14) != *(char *)(iVar9 + 0x28));
        *(char *)(param_1 + 0x51) = *(char *)(param_1 + 0x51) + -1;
        fn_82822368();
        iVar7 = iStack_70;
        if (*(int *)(iStack_70 + 0x28) != 0) {
          fn_82826050(*(int *)(iStack_70 + 0x28),1);
        }
        fn_828252D8(*(unsigned int *)(iVar7 + 8));
        fn_828252D8(iStack_70);
      }
LAB_828286c0:
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      fn_828282D8(iVar9);
      fn_82829B70(iVar9);
      fn_828252D8(iVar9);
    }
    iStack_6c = iStack_64;
  } while( true );
}

