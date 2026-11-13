#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern unsigned int *auStack_70;
extern int fn_82AB15D0();
extern int fn_82B7BEB0();
extern int fn_82BA02A8();
extern int fn_82BA03B8();
extern int fn_82BA0450();
extern int fn_82BA04B8();
extern int fn_82BA05E8();
extern int fn_82BB9EC0();
extern int fn_82BB9F48();
extern int fn_82BBA368();
extern int fn_82BBA760();
extern int fn_82BBFFC8();
extern int fn_82BC0088();
extern unsigned int iStack_6c;
extern unsigned int lbl_820E0814;
extern unsigned int lbl_820E082C;
extern unsigned int uStack_64;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82BBB1A8(int param_1)

{
  unsigned char *pbVar1;
  int *piVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned char uVar10;
  unsigned __int64 uVar9;
  __int64 lVar11;
  int iVar12;
  __int64 lVar13;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  int aiStack_78 [2];
  unsigned char auStack_70 [4];
  int iStack_6c;
  int *piStack_68;
  unsigned int uStack_64;
  
  fn_82BA03B8(auStack_70,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5b0));
  fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820e0a1c);
  iVar12 = 0;
  for (uVar5 = 1; uVar5 <= *(unsigned int *)(*(int *)(param_1 + 0x814) + 4); uVar5 = uVar5 + 1) {
    iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x814) + 8) + iVar12);
    if ((*(unsigned int *)(iVar6 + 0xe4) & 1) != 0) {
      iVar7 = *(int *)(iVar6 + 0x80);
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 0x10))) & ((unsigned __int64)0xFF)) << 8));
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 16))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 8))) & ((unsigned __int64)0xFF)) << 16));
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 24))) | ((((unsigned __int64)((unsigned char)iVar7)) & ((unsigned __int64)0xFF)) << 24));
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 0))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 0x18))) & ((unsigned __int64)0xFF)) << 0));
      stack_pair_80.first = CONCAT31(CONCAT21(CONCAT11((char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1) -
                                             (((((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 2) +
                                             ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1 == 0)),
                                             (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1) -
                                             (((((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 2) +
                                             ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1 == 0))),
                                    (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1) -
                                    (((((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 2) + ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1 == 0)))
                           ,(char)((unsigned __int64)(unsigned char)stack_pair_80.second - 1) -
                            (((unsigned char)stack_pair_80.second - 2) + ((unsigned __int64)(unsigned char)stack_pair_80.second - 1 == 0)));
      *(unsigned int *)(iVar6 + 0xc) = stack_pair_80.first;
      stack_pair_80.second = iVar7;
      piVar2 = (int *)fn_82BC0088(auStack_70,iStack_6c);
      *piVar2 = iVar6;
    }
    iVar12 = iVar12 + 4;
  }
  while (iStack_6c != 0) {
    iVar12 = *piStack_68;
    fn_82BBFFC8(auStack_70,0);
    fn_82BBA760(iVar12);
    if ((*(unsigned int *)(iVar12 + 0xe4) >> 9 & 1) == 0) {
      iVar6 = *(int *)(iVar12 + 0x14);
    }
    else {
      iVar6 = *(int *)(iVar12 + 0x14) + -1;
    }
    lVar11 = 1;
    if (0 < iVar6) {
      piVar2 = (int *)(iVar12 + 0xec);
      do {
        iVar7 = *piVar2;
        uVar3 = fn_82BBA368(iVar12,lVar11,param_1);
        uVar5 = *(unsigned int *)(iVar7 + 0xc);
        if ((uVar5 | uVar3) != uVar5) {
          *(unsigned int *)(iVar7 + 0xc) = uVar5 | uVar3;
          piVar4 = (int *)fn_82BC0088(auStack_70,iStack_6c);
          *piVar4 = iVar7;
        }
        lVar11 = lVar11 + 1;
        piVar2 = piVar2 + 1;
      } while ((int)lVar11 <= iVar6);
    }
    if ((*(unsigned int *)(iVar12 + 0xe4) >> 9 & 1) != 0) {
      iVar7 = fn_82BA0450(iVar12);
      iVar6 = *(int *)(iVar12 + 0x80);
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar6 >> 0x10))) & ((unsigned __int64)0xFF)) << 8));
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 16))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar6 >> 8))) & ((unsigned __int64)0xFF)) << 16));
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 24))) | ((((unsigned __int64)((unsigned char)iVar6)) & ((unsigned __int64)0xFF)) << 24));
      stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 0))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar6 >> 0x18))) & ((unsigned __int64)0xFF)) << 0));
      stack_pair_80.first = CONCAT31(CONCAT21(CONCAT11((char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1) -
                                             (((((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 2) +
                                             ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1 == 0)),
                                             (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1) -
                                             (((((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 2) +
                                             ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1 == 0))),
                                    (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1) -
                                    (((((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 2) + ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1 == 0)))
                           ,(char)((unsigned __int64)(unsigned char)stack_pair_80.second - 1) -
                            (((unsigned char)stack_pair_80.second - 2) + ((unsigned __int64)(unsigned char)stack_pair_80.second - 1 == 0)));
      uVar9 = (unsigned __int64)stack_pair_80.first;
      stack_pair_80.second = iVar6;
      uVar5 = fn_82BB9EC0(uVar9,*(unsigned int *)(iVar12 + 0xc));
      uVar3 = fn_82BB9F48(uVar9);
      if (uVar5 != uVar3) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e09d8,0xffffffff820e0950,0x34b);
      }
      uVar3 = *(unsigned int *)(iVar7 + 0xc);
      if ((uVar3 | uVar5) != uVar3) {
        *(unsigned int *)(iVar7 + 0xc) = uVar3 | uVar5;
        piVar2 = (int *)fn_82BC0088(auStack_70,iStack_6c);
        *piVar2 = iVar7;
      }
    }
  }
  for (iVar12 = *(int *)(param_1 + 0x88); *(int *)(iVar12 + 8) != 0; iVar12 = *(int *)(iVar12 + 8))
  {
    for (iVar6 = *(int *)(iVar12 + 0x1c); *(int *)(iVar6 + 8) != 0; iVar6 = *(int *)(iVar6 + 8)) {
      if ((*(unsigned int *)(iVar6 + 0xe4) & 1) != 0) {
        stack_pair_80.first = *(unsigned int *)(iVar6 + 0xc);
        stack_pair_80.second = *(int *)(iVar6 + 0x80);
        iVar7 = 0;
        lVar11 = 4;
        do {
          if (*(char *)((int)&stack_pair_80.first + iVar7) == '\x01') {
            uVar10 = *(unsigned char *)((int)aiStack_78 + iVar7 + -4);
          }
          else {
            uVar10 = 1;
          }
          *(unsigned char *)((int)aiStack_78 + iVar7 + -4) = uVar10;
          iVar7 = iVar7 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
        *(int *)(iVar6 + 0x80) = stack_pair_80.second;
      }
    }
  }
  iVar12 = *(int *)(param_1 + 0x88);
  iVar6 = *(int *)(iVar12 + 8);
  while (iVar6 != 0) {
    for (piVar2 = *(int **)(iVar12 + 0x1c); piVar2[2] != 0; piVar2 = (int *)piVar2[2]) {
      if ((piVar2[0x39] & 1U) != 0) {
        if (piVar2[0x20] != lbl_820E082C) {
          lVar11 = 1;
          iVar6 = (**(int (***)())(*piVar2 + 4))(piVar2);
          if (0 < iVar6) {
            piVar4 = piVar2 + 0x21;
            do {
              iVar6 = piVar4[0x1a];
              aiStack_78[0] = *piVar4;
              uVar5 = 0;
              iVar8 = 0;
              iVar7 = *(int *)(iVar6 + 0x80);
              lVar13 = 4;
              stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 16))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 8))) & ((unsigned __int64)0xFF)) << 16));
              stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 0x10))) & ((unsigned __int64)0xFF)) << 8));
              stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 0))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 0x18))) & ((unsigned __int64)0xFF)) << 0));
              stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 24))) | ((((unsigned __int64)((unsigned char)iVar7)) & ((unsigned __int64)0xFF)) << 24));
              stack_pair_80.first = CONCAT31(CONCAT21(CONCAT11((char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1) -
                                                     (((((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 2) +
                                                     ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1 == 0)),
                                                     (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1) -
                                                     (((((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 2) +
                                                     ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1 == 0))),
                                            (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1) -
                                            (((((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 2) +
                                            ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1 == 0))),
                                   (char)((unsigned __int64)(unsigned char)stack_pair_80.second - 1) -
                                   (((unsigned char)stack_pair_80.second - 2) + ((unsigned __int64)(unsigned char)stack_pair_80.second - 1 == 0)));
              do {
                pbVar1 = (unsigned char *)((int)aiStack_78 + iVar8);
                iVar8 = iVar8 + 1;
                uVar5 = *(unsigned int *)(&lbl_820E0814 + (unsigned int)*pbVar1 * 4) | uVar5;
                lVar13 = lVar13 + -1;
                stack_pair_80.second = iVar7;
              } while (lVar13 != 0);
              while ((stack_pair_80.first == 0 || (uVar5 == 0))) {
                iVar6 = fn_82BA0450();
                iVar7 = *(int *)(iVar6 + 0x80);
                stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 16))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 8))) & ((unsigned __int64)0xFF)) << 16));
                stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 0))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 0x18))) & ((unsigned __int64)0xFF)) << 0));
                stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar7 >> 0x10))) & ((unsigned __int64)0xFF)) << 8));
                stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 24))) | ((((unsigned __int64)((unsigned char)iVar7)) & ((unsigned __int64)0xFF)) << 24));
                stack_pair_80.first = CONCAT31(CONCAT21(CONCAT11((char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1) -
                                                       (((((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 2) +
                                                       ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1 == 0)),
                                                       (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1) -
                                                       (((((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 2) +
                                                       ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1 == 0))),
                                              (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1) -
                                              (((((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 2) +
                                              ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1 == 0))),
                                     (char)((unsigned __int64)(unsigned char)stack_pair_80.second - 1) -
                                     (((unsigned char)stack_pair_80.second - 2) + ((unsigned __int64)(unsigned char)stack_pair_80.second - 1 == 0))
                                    );
                stack_pair_80.second = iVar7;
              }
              fn_82BA05E8(piVar2,lVar11,iVar6);
              lVar11 = lVar11 + 1;
              piVar4 = piVar4 + 1;
              iVar6 = (**(int (***)())(*piVar2 + 4))(piVar2);
            } while ((int)lVar11 <= iVar6);
          }
          if (((unsigned int)piVar2[0x39] >> 9 & 1) != 0) {
            fn_82BA0450(piVar2);
            iVar6 = piVar2[0x20];
            stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 8))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar6 >> 0x10))) & ((unsigned __int64)0xFF)) << 8));
            stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 0))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar6 >> 0x18))) & ((unsigned __int64)0xFF)) << 0));
            stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 24))) | ((((unsigned __int64)((unsigned char)iVar6)) & ((unsigned __int64)0xFF)) << 24));
            stack_pair_80.second = ((((unsigned __int64)(stack_pair_80.second)) & (~(((unsigned __int64)0xFF) << 16))) | ((((unsigned __int64)((unsigned char)((unsigned int)iVar6 >> 8))) & ((unsigned __int64)0xFF)) << 16));
            stack_pair_80.first = CONCAT31(CONCAT21(CONCAT11((char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1) -
                                                   (((((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 2) +
                                                   ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 0) & 0xFF) - 1 == 0)),
                                                   (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1) -
                                                   (((((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 2) +
                                                   ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 8) & 0xFF) - 1 == 0))),
                                          (char)((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1) -
                                          (((((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 2) +
                                          ((unsigned __int64)(((unsigned __int64)(stack_pair_80.second) >> 16) & 0xFF) - 1 == 0))),
                                 (char)((unsigned __int64)(unsigned char)stack_pair_80.second - 1) -
                                 (((unsigned char)stack_pair_80.second - 2) + ((unsigned __int64)(unsigned char)stack_pair_80.second - 1 == 0)));
            uVar9 = (unsigned __int64)stack_pair_80.first;
            stack_pair_80.second = iVar6;
            iVar6 = fn_82BB9EC0(uVar9,piVar2[3]);
            iVar7 = fn_82BB9F48(uVar9);
            if (iVar6 != iVar7) {
              fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e09d8,0xffffffff820e0950,0x381);
            }
            if (iVar6 == 0) {
              fn_82BA04B8(piVar2);
            }
          }
        }
        piVar2[3] = 0;
      }
    }
    iVar12 = *(int *)(iVar12 + 8);
    iVar6 = *(int *)(iVar12 + 8);
  }
  fn_82B7BEB0(uStack_64,piStack_68);
  return;
}

