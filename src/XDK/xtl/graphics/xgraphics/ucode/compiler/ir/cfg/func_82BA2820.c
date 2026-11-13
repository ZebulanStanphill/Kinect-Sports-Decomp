#define true 1
extern int fn_82AB15D0();
extern int fn_82B9ED18();
extern int fn_82B9EE88();
extern int fn_82B9F018();
extern int fn_82B9F1A8();
extern int fn_82BA0AC8();
extern int fn_82BA0C40();
extern int fn_82BAFE48();
extern int fn_82BC0088();
extern int fn_82BC0E80();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC34D8();
extern int fn_82BC5538();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_b0;


void fn_82BA2820(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar8;
  unsigned __int64 uVar6;
  int iVar9;
  int *piVar10;
  char cVar11;
  unsigned __int64 uVar7;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  int iVar16;
  int *piVar17;
  __int64 lVar18;
  unsigned __int64 uVar19;
  int *piVar20;
  double dVar21;
  double dVar22;
  unsigned int uStack_b0;
  
  uVar8 = fn_82BA0AC8();
  dVar21 = (double)lbl_82002AE0;
  piVar20 = (int *)(param_1 + 0x448);
  dVar22 = (double)lbl_821AAD20;
  uVar19 = 0x10;
  uStack_b0 = 0x10;
  uVar13 = 0;
  do {
    iVar1 = *piVar20;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) == 0x14)) {
      iVar2 = *(int *)(iVar1 + 0x24);
      iVar16 = 0;
      uVar3 = *(unsigned int *)(iVar2 + 4);
      uVar15 = (unsigned __int64)uVar3;
      for (uVar14 = 1; uVar14 <= *(unsigned int *)(iVar2 + 4); uVar14 = uVar14 + 1) {
        iVar5 = *(int *)(*(int *)(iVar2 + 8) + iVar16);
        if (((*(unsigned int *)(iVar5 + 0xe4) & 1) != 0) && (lVar18 = 1, 0 < *(int *)(iVar5 + 0x14))) {
          piVar17 = (int *)(iVar5 + 0x20);
          do {
            if (iVar1 == *piVar17) {
              iVar9 = *(int *)(param_1 + 0xc);
              uVar4 = *(unsigned int *)(iVar1 + 0xc);
              uVar6 = (**(int (***)())(**(int **)(iVar9 + 0x5d0) + 0x1c))();
              iVar9 = fn_82B9EE88(*(unsigned int *)(param_1 + 0x10),uVar4,uVar6,0xffffffff82b7c800,
                                    iVar9);
              if (iVar9 == 1) {
                if ((uVar13 & 0xffffffff) == 0) {
                  piVar10 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
                  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) =
                       *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
                  uVar13 = fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0);
                  fn_82BC2958(piVar10,0,uVar13);
                  fn_82BC2958(piVar10,1,uVar8);
                  (**(int (***)())(*piVar10 + 0x58))(piVar10,1,0,2);
                  (**(int (***)())(*piVar10 + 0x58))(piVar10,1,1,3);
                  *(unsigned char *)((int)piVar10 + 0x9f) = 1;
                  fn_82BA0C40(param_1,piVar10);
                  fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar10);
                  cVar11 = fn_82BC2580(piVar10);
                  if (cVar11 == '\0') {
                    fn_82AB15D0(0,0xffffffff820d2ea4,"mov_zero->Validate()",0xffffffff820deb50
                                      ,0x9c5);
                  }
                  piVar10 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
                  fn_82BC2958(piVar10,0,uVar13);
                  fn_82BC34D8(dVar22,dVar22,dVar22,dVar21,piVar10,param_1,1);
                  (**(int (***)())(*piVar10 + 0x54))(piVar10,0,0,1);
                  (**(int (***)())(*piVar10 + 0x54))(piVar10,0,1,1);
                  fn_82BA0C40(param_1,piVar10);
                  fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar10);
                  cVar11 = fn_82BC2580(piVar10);
                  if (cVar11 == '\0') {
                    fn_82AB15D0(0,0xffffffff820d2ea4,"mov_zero->Validate()",0xffffffff820deb50
                                      ,0x9cf);
                  }
                }
                fn_82BC2958(iVar5,lVar18,uVar13);
                fn_82BA0C40(param_1,iVar5);
                cVar11 = fn_82BC2580(iVar5);
                if (cVar11 == '\0') {
                  fn_82AB15D0(0,0xffffffff820d2ea4,"use->Validate()",0xffffffff820deb50,0x9d4)
                  ;
                }
              }
              else {
                iVar9 = *(int *)(param_1 + 0xc);
                uVar6 = (**(int (***)())(**(int **)(iVar9 + 0x5d0) + 0x1c))();
                iVar9 = fn_82B9ED18(*(unsigned int *)(param_1 + 0x10),uVar4,uVar6,0xffffffff82b7c800
                                      ,iVar9);
                if (iVar9 == 0) {
                  piVar10 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
                  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) =
                       *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
                  uVar6 = fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0);
                  fn_82BC2958(piVar10,0,uVar6);
                  fn_82BC2958(piVar10,1,uVar8);
                  (**(int (***)())(*piVar10 + 0x58))(piVar10,1,0,2);
                  (**(int (***)())(*piVar10 + 0x58))(piVar10,1,1,3);
                  *(unsigned char *)((int)piVar10 + 0x9f) = 1;
                  fn_82BA0C40(param_1,piVar10);
                  fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar10);
                  cVar11 = fn_82BC2580(piVar10);
                  if (cVar11 == '\0') {
                    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,
                                      0x9e8);
                  }
                  piVar10 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
                  fn_82BC2958(piVar10,0,uVar6);
                  (**(int (***)())(*piVar10 + 0x54))(piVar10,0,0,1);
                  (**(int (***)())(*piVar10 + 0x54))(piVar10,0,1,1);
                  fn_82BC2958(piVar10,1,iVar1);
                  iVar9 = *(int *)(param_1 + 0xc);
                  uVar7 = (**(int (***)())(**(int **)(iVar9 + 0x5d0) + 0x1c))();
                  iVar9 = fn_82B9F018(*(unsigned int *)(param_1 + 0x10),uVar4,uVar7,
                                        0xffffffff82b7c800,iVar9);
                  if (iVar9 == 1) {
                    uVar7 = 0;
LAB_82ba2d44:
                    (**(int (***)())(*piVar10 + 0x58))(piVar10,1,2,uVar7);
                    (**(int (***)())(*piVar10 + 0x58))(piVar10,1,3,3);
                  }
                  else {
                    iVar9 = *(int *)(param_1 + 0xc);
                    uVar7 = (**(int (***)())(**(int **)(iVar9 + 0x5d0) + 0x1c))();
                    iVar9 = fn_82B9F1A8(*(unsigned int *)(param_1 + 0x10),uVar4,uVar7,
                                          0xffffffff82b7c800,iVar9);
                    if (iVar9 == 1) {
                      uVar7 = 2;
                      goto LAB_82ba2d44;
                    }
                    fn_82AB15D0(0,0xffffffff820d2ea4,"false",0xffffffff820deb50,0xa05);
                  }
                  fn_82BA0C40(param_1,piVar10);
                  fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar10);
                  cVar11 = fn_82BC2580(piVar10);
                  if (cVar11 == '\0') {
                    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,
                                      0xa0a);
                  }
                  fn_82BC2958(iVar5,lVar18,uVar6);
                  fn_82BA0C40(param_1,iVar5);
                  cVar11 = fn_82BC2580(iVar5);
                  if (cVar11 == '\0') {
                    fn_82AB15D0(0,0xffffffff820d2ea4,"use->Validate()",0xffffffff820deb50,
                                      0xa0f);
                  }
                }
              }
            }
            lVar18 = lVar18 + 1;
            piVar17 = piVar17 + 1;
          } while ((int)lVar18 <= *(int *)(iVar5 + 0x14));
          uVar19 = (unsigned __int64)uStack_b0;
        }
        iVar16 = iVar16 + 4;
      }
      if (uVar3 != 0) {
        iVar16 = uVar3 << 2;
        do {
          uVar15 = uVar15 - 1;
          iVar16 = iVar16 + -4;
          if ((uVar15 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(iVar2 + 4)) {
            puVar12 = (unsigned int *)(*(int *)(iVar2 + 8) + iVar16);
          }
          else {
            puVar12 = (unsigned int *)fn_82BC0088(iVar2,uVar15);
          }
          fn_82BC0E80(iVar1,*puVar12);
        } while ((int)uVar15 != 0);
      }
    }
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 1;
    uStack_b0 = (unsigned int)uVar19;
    if (uVar19 == 0) {
      return;
    }
  } while( true );
}

