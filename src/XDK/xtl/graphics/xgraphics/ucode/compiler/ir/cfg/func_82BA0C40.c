extern int fn_82AB15D0();
extern int fn_82BA0AC8();
extern int fn_82BAF508();
extern int fn_82BAF560();
extern int fn_82BC0A30();
extern int fn_82BC0A80();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC5538();
extern unsigned int lbl_820DEB18;
extern unsigned int lbl_820DEB28;
extern unsigned int lbl_8316FF50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82BA0C40(int param_1,int param_2)

{
  int *piVar3;
  unsigned __int64 uVar1;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar2;
  int iVar6;
  char cVar7;
  unsigned char uVar8;
  __int64 lVar9;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    piVar3 = (int *)fn_82BAF508(*(unsigned int *)(param_1 + 0xac),param_2,0);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)fn_82BAF560(*(unsigned int *)(param_1 + 0xac),
                                        *(unsigned int *)(param_2 + 0x50),
                                        *(unsigned int *)(param_2 + 0x38));
      uVar1 = (**(int (***)())(*piVar3 + 0x1c))
                        (piVar3,*(unsigned int *)(param_2 + 0x80),param_1,
                         *(unsigned int *)(param_1 + 0xc));
    }
    else {
      uVar1 = (**(int (***)())(*piVar3 + 0x20))(piVar3,*(unsigned int *)(param_2 + 0x80),param_1);
    }
    if ((uVar1 & 0xffffffff) == 0) {
      fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820dece0,0xffffffff820deb50,0x289);
    }
    fn_82BC0A30(uVar1,param_2);
    fn_82BC2958(param_2,0,uVar1);
  }
  lVar9 = 1;
  if (0 < *(int *)(param_2 + 0x14)) {
    piVar3 = (int *)(param_2 + 0x54);
    do {
      iVar5 = *piVar3;
      if ((iVar5 == 0x1a) || (iVar5 == 0x1b)) {
        iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
        *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = iVar6;
        piVar3[-6] = iVar6;
        *piVar3 = iVar5;
      }
      piVar4 = (int *)fn_82BAF508(*(unsigned int *)(param_1 + 0xac),param_2,lVar9);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)fn_82BAF560(*(unsigned int *)(param_1 + 0xac),*piVar3,piVar3[-6]);
        iVar5 = (**(int (***)())(*piVar4 + 0x1c))
                          (piVar4,lbl_820DEB18,param_1,*(unsigned int *)(param_1 + 0xc));
      }
      else {
        iVar5 = (**(int (***)())(*piVar4 + 0x20))(piVar4,lbl_820DEB18,param_1);
      }
      fn_82BC0A80(iVar5,lVar9,param_2);
      fn_82BC2958(param_2,lVar9,iVar5);
      if (*(int *)(iVar5 + 0x20) == 0x1a) {
        uVar2 = fn_82BA0AC8(param_1);
        iVar6 = fn_82BC24F0(0x3e,*(unsigned int *)(param_1 + 0xc));
        *(unsigned char *)(param_1 + 0x819) = 1;
        fn_82BC2958(iVar6,0,iVar5);
        fn_82BC2958(iVar6,1,uVar2);
        *(unsigned int *)(iVar6 + 0x84) = lbl_820DEB28;
        fn_82BA0C40(param_1,iVar6);
        fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),iVar6);
        cVar7 = fn_82BC2580(iVar6);
        if (cVar7 == '\0') {
          uVar2 = 0x2c0;
LAB_82ba0f14:
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,uVar2);
        }
      }
      else if (*(int *)(iVar5 + 0x20) == 0x1b) {
        uVar2 = fn_82BA0AC8(param_1);
        piVar4 = (int *)fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
        fn_82BC2958(piVar4,0,iVar5);
        fn_82BC2958(piVar4,1,uVar2);
        (**(int (***)())(*piVar4 + 0x58))(piVar4,1,0,2);
        (**(int (***)())(*piVar4 + 0x58))(piVar4,1,1,3);
        fn_82BA0C40(param_1,piVar4);
        fn_82BC5538(*(unsigned int *)(param_1 + 0xa4),piVar4);
        cVar7 = fn_82BC2580(piVar4);
        if (cVar7 == '\0') {
          uVar2 = 0x2ce;
          goto LAB_82ba0f14;
        }
      }
      if ((((*(unsigned int *)(&lbl_8316FF50 + *(int *)(param_2 + 0x18) * 0x34) >> 6 & 1) == 0) &&
          ((*(unsigned int *)(&lbl_8316FF50 + *(int *)(param_2 + 0x18) * 0x34) >> 1 & 1) != 0)) &&
         (*(int *)(iVar5 + 0x20) != 0xb)) {
        if (*(char *)(param_2 + 0x80) == '\x01') {
          uVar8 = 0;
        }
        else {
          uVar8 = *(unsigned char *)(piVar3 + 0xc);
        }
        *(unsigned char *)(piVar3 + 0xc) = uVar8;
        uVar8 = 1;
        if (*(char *)(param_2 + 0x81) != '\x01') {
          uVar8 = *(unsigned char *)((int)piVar3 + 0x31);
        }
        *(unsigned char *)((int)piVar3 + 0x31) = uVar8;
        if (*(char *)(param_2 + 0x82) == '\x01') {
          uVar8 = 2;
        }
        else {
          uVar8 = *(unsigned char *)((int)piVar3 + 0x32);
        }
        *(unsigned char *)((int)piVar3 + 0x32) = uVar8;
        if (*(char *)(param_2 + 0x83) == '\x01') {
          uVar8 = 3;
        }
        else {
          uVar8 = *(unsigned char *)((int)piVar3 + 0x33);
        }
        *(unsigned char *)((int)piVar3 + 0x33) = uVar8;
      }
      lVar9 = lVar9 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)lVar9 <= *(int *)(param_2 + 0x14));
  }
  return;
}

