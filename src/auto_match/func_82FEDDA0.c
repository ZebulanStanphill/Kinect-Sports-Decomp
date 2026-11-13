typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82FECAA8();
extern int fn_82FEDCA8();
extern int fn_8301BB18();
extern int fn_8301BB58();
extern int fn_8301BBB0();
extern int fn_8301BD18();
extern int fn_8301BE38();
extern int fn_8301D458();
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;
extern unsigned int uStack_70;


void fn_82FEDDA0(void)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar5;
  unsigned __int64 uVar4;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned __int64 uStack_70;
  
LAB_82feddb4:
  uVar8 = 0;
  uVar1 = lbl_831BC794;
LAB_82feddbc:
  uVar10 = (unsigned __int64)uVar1;
  uStack_70 = CONCAT44(uVar1,(int)uVar8);
LAB_82feddc4:
  do {
    if (uVar10 == 0) {
      return;
    }
    bVar3 = false;
    puVar11 = (unsigned int *)uVar10;
    uVar1 = puVar11[3];
    uVar4 = uStack_70 & 0xffffffff;
    uVar7 = uStack_70 >> 0x20;
    do {
      puVar9 = (unsigned int *)uVar7;
      if (uVar1 != puVar9[3]) break;
      if ((puVar9[4] == 0) &&
         (((puVar9[2] == 0 || (puVar9[2] == 1)) && (*(int *)(puVar9[5] + 0x10) != 2)))) {
        iVar5 = fn_82FEDCA8(puVar9[1],puVar9[5],uVar7 + 0x10);
        if (iVar5 == 2) {
          uVar1 = *puVar9;
          if (uVar7 != lbl_831BC794) {
            *(unsigned int *)uVar4 = *puVar9;
            uVar1 = lbl_831BC794;
          }
          lbl_831BC794 = uVar1;
          if (uVar7 == ZEXT48(lbl_831BC798)) {
            lbl_831BC798 = (unsigned int *)uVar4;
          }
          *puVar9 = (unsigned int)lbl_831BC79C;
          lbl_831BC7A8 = lbl_831BC7A8 + -1;
          lbl_831BC79C = puVar9;
          goto LAB_82feddb4;
        }
        if (*(int *)(uVar7 + 0x10) == 0) {
          bVar3 = true;
          break;
        }
      }
      uVar4 = uVar7;
      uVar7 = (unsigned __int64)*puVar9;
    } while ((unsigned __int64)*puVar9 != 0);
    if (bVar3) {
      do {
        uVar8 = uVar10;
        uVar2 = *(unsigned int *)uVar8;
        uVar10 = (unsigned __int64)uVar2;
        uStack_70 = CONCAT44(uVar2,(unsigned int *)uVar8);
        if (uVar10 == 0) {
          return;
        }
      } while (uVar1 == *(unsigned int *)(uVar2 + 0xc));
      goto LAB_82feddc4;
    }
    lVar6 = uVar10 + 4;
    uVar7 = 1;
    uVar4 = 0;
    puVar9 = (unsigned int *)uVar8;
    if ((puVar11[5] == 0) && (uVar4 = fn_82FECAA8(lVar6), (uVar4 & 0xffffffff) == 0)) {
      uVar1 = *puVar11;
      uVar2 = uVar1;
      if (uVar10 != lbl_831BC794) {
        *puVar9 = uVar1;
        uVar2 = lbl_831BC794;
      }
      lbl_831BC794 = uVar2;
      if (uVar10 == ZEXT48(lbl_831BC798)) {
        lbl_831BC798 = puVar9;
      }
      uVar7 = 0;
      uStack_70 = CONCAT44(uVar1,puVar9);
      *puVar11 = (unsigned int)lbl_831BC79C;
      uVar10 = (unsigned __int64)uVar1;
      lbl_831BC7A8 = lbl_831BC7A8 + -1;
      lbl_831BC79C = puVar11;
    }
    if ((uVar7 & 0xff) != 0) {
      iVar5 = (int)lVar6;
      uVar1 = *(unsigned int *)(iVar5 + 4);
      puVar11 = (unsigned int *)uVar10;
      if (*(int *)(iVar5 + 0xc) == 0) {
        if ((uVar1 != 2) || ((uVar4 & 0xffffffff) == 0)) break;
        fn_8301BB18(uVar4 + 8);
        uVar1 = *puVar11;
        uVar2 = uVar1;
        if (uVar10 != lbl_831BC794) {
          *puVar9 = uVar1;
          uVar2 = lbl_831BC794;
        }
        lbl_831BC794 = uVar2;
        if (uVar10 == ZEXT48(lbl_831BC798)) {
          lbl_831BC798 = puVar9;
        }
        uStack_70 = CONCAT44(uVar1,puVar9);
        *puVar11 = (unsigned int)lbl_831BC79C;
        lbl_831BC7A8 = lbl_831BC7A8 + -1;
        uVar10 = (unsigned __int64)uVar1;
        lbl_831BC79C = puVar11;
      }
      else {
        lVar6 = (unsigned __int64)*(unsigned int *)(iVar5 + 0x10) + 8;
        if (uVar1 < 7) {
          if (uVar1 == 1) {
            fn_8301BE38(lVar6);
LAB_82fedf80:
            fn_8301BB58(lVar6);
          }
          else if (uVar1 == 2) {
            fn_8301BB18(lVar6);
          }
          else {
            if (uVar1 == 3) goto LAB_82fedf80;
            if (uVar1 == 4) {
              fn_8301BBB0(lVar6);
            }
            else if (uVar1 == 5) {
              fn_8301D458(lVar6);
            }
            else if (uVar1 == 0) {
              fn_8301BE38(lVar6);
            }
            else {
              fn_8301BD18(lVar6);
            }
          }
        }
        uVar1 = *puVar11;
        uVar2 = uVar1;
        if (uVar10 != lbl_831BC794) {
          *puVar9 = uVar1;
          uVar2 = lbl_831BC794;
        }
        lbl_831BC794 = uVar2;
        if (uVar10 == ZEXT48(lbl_831BC798)) {
          lbl_831BC798 = puVar9;
        }
        uStack_70 = CONCAT44(uVar1,puVar9);
        *puVar11 = (unsigned int)lbl_831BC79C;
        lbl_831BC7A8 = lbl_831BC7A8 + -1;
        uVar10 = (unsigned __int64)uVar1;
        lbl_831BC79C = puVar11;
      }
    }
  } while( true );
  uVar1 = *puVar11;
  uVar8 = uVar10;
  goto LAB_82feddbc;
}

