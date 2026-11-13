extern unsigned int fStack_60;
extern int fn_82AB15D0();
extern int fn_82B9ADF0();
extern int fn_82B9AF08();
extern int fn_82B9B018();
extern int fn_82B9B130();
extern int fn_82B9DEF0();
extern int fn_82B9DFF8();
extern int fn_82B9E158();
extern int fn_82B9E1F8();
extern int fn_82BA0C40();
extern int fn_82BAFE48();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC2958();
extern int fn_82BC34D8();
extern int fn_82BC4370();
extern int fn_82BC4478();
extern int fn_82BC49F8();
extern int fn_82BC5538();
extern int fn_82BC5AC0();
extern unsigned int lbl_820DEB1C;
extern unsigned int lbl_820DEB28;
extern unsigned int lbl_820DEB2C;
extern unsigned int lbl_820DEB30;


void fn_82BA13E0(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar3;
  char cVar8;
  unsigned int uVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  float fStack_60;
  float afStack_5c [23];
  
  iVar6 = *(int *)(param_1 + 0xc);
  uVar2 = (**(int (***)())(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  iVar4 = fn_82B9ADF0(*(unsigned int *)(param_1 + 0x10),0,uVar2,0xffffffff82b7c800,iVar6);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar2 = (**(int (***)())(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  iVar5 = fn_82B9AF08(*(unsigned int *)(param_1 + 0x10),0,uVar2,0xffffffff82b7c800,iVar6);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar2 = (**(int (***)())(**(int **)(iVar6 + 0x5d0) + 0x1c))();
  iVar6 = fn_82B9B018(*(unsigned int *)(param_1 + 0x10),0,uVar2,0xffffffff82b7c800,iVar6);
  *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
  uVar2 = fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0);
  iVar7 = fn_82BC5AC0(*(unsigned int *)(param_1 + 0xa8));
  if (iVar7 != 1) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded2c,0xffffffff820deb50,0x53a);
  }
  iVar10 = 0;
  iVar7 = *(int *)(*(int *)(param_1 + 0xa8) + 0x3c);
  fVar11 = afStack_5c[0];
  for (uVar9 = 1; uVar9 <= *(unsigned int *)(iVar7 + 4); uVar9 = uVar9 + 1) {
    fVar11 = *(float *)(*(int *)(iVar7 + 8) + iVar10);
    iVar10 = iVar10 + 4;
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 0x20);
  if (iVar6 == 1) {
    iVar6 = *(int *)(param_1 + 0xc);
    uVar3 = (**(int (***)())(**(int **)(iVar6 + 0x5d0) + 0x1c))();
    iVar6 = fn_82B9B130(*(unsigned int *)(param_1 + 0x10),0,uVar3,0xffffffff82b7c800,iVar6);
    if (iVar6 == 0) {
      fn_82B9DEF0(*(unsigned int *)(param_1 + 0x10),0,&fStack_60,0xffffffff82b7c800,
                    *(unsigned int *)(param_1 + 0xc));
      fn_82B9DFF8(*(unsigned int *)(param_1 + 0x10),0,afStack_5c,0xffffffff82b7c800,
                    *(unsigned int *)(param_1 + 0xc));
      iVar6 = fn_82BC49F8(0x12,*(unsigned int *)(param_1 + 0xc));
      fn_82BC2958(iVar6,0,uVar2);
      *(unsigned int *)(iVar6 + 0x80) = lbl_820DEB1C;
      dVar12 = (double)fStack_60;
      fn_82BC34D8(dVar12,dVar12,dVar12,iVar6,param_1,1);
      *(unsigned char *)(iVar6 + 0x99) = 1;
      fn_82BC2958(iVar6,2,uVar1);
      *(unsigned int *)(iVar6 + 0x88) = lbl_820DEB30;
      fn_82BA0C40(param_1,iVar6);
      fn_82BC5538(fVar11,iVar6);
      cVar8 = fn_82BC2580(iVar6);
      if (cVar8 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded1c,0xffffffff820deb50,0x55c);
      }
      iVar6 = fn_82BC49F8(0x13,*(unsigned int *)(param_1 + 0xc));
      uVar1 = lbl_820DEB1C;
      *(unsigned int *)(iVar6 + 0x38) = 0;
      *(unsigned int *)(iVar6 + 0x50) = 0x17;
      *(unsigned int *)(iVar6 + 0x80) = uVar1;
      fn_82BC2958(iVar6,1,uVar2);
      *(unsigned int *)(iVar6 + 0x84) = lbl_820DEB28;
      dVar12 = (double)afStack_5c[0];
      fn_82BC34D8(dVar12,dVar12,dVar12,iVar6,param_1,2);
      fn_82BA0C40(param_1,iVar6);
      fn_82BC5538(fVar11,iVar6);
      cVar8 = fn_82BC2580(iVar6);
      if (cVar8 != '\0') {
        return;
      }
      uVar3 = 0x567;
      uVar2 = 0xffffffff820ded0c;
    }
    else {
      iVar6 = fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
      *(unsigned int *)(iVar6 + 0x38) = 0;
      *(unsigned int *)(iVar6 + 0x50) = 0x17;
      *(unsigned int *)(iVar6 + 0x80) = lbl_820DEB1C;
      fn_82BC2958(iVar6,1,uVar1);
      *(unsigned int *)(iVar6 + 0x84) = lbl_820DEB30;
      fn_82BA0C40(param_1,iVar6);
      fn_82BC2580(iVar6);
      fn_82BC5538(fVar11,iVar6);
      cVar8 = fn_82BC2580(iVar6);
      if (cVar8 != '\0') {
        return;
      }
      uVar3 = 0x572;
      uVar2 = 0xffffffff820decd0;
    }
  }
  else if (iVar5 == 0) {
    if (iVar4 != 0) {
      return;
    }
    uVar3 = 0x598;
    uVar2 = 0xffffffff820decfc;
  }
  else {
    fn_82B9E1F8(*(unsigned int *)(param_1 + 0x10),0,&fStack_60,0xffffffff82b7c800,
                  *(unsigned int *)(param_1 + 0xc));
    fn_82B9E158(*(unsigned int *)(param_1 + 0x10),0,afStack_5c,0xffffffff82b7c800,
                  *(unsigned int *)(param_1 + 0xc));
    iVar6 = fn_82BC4370(0x40,*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(iVar6 + 0x38) = 0;
    *(unsigned int *)(iVar6 + 0x50) = 0x17;
    fn_82BC2958(iVar6,1,uVar1);
    *(unsigned int *)(iVar6 + 0x84) = lbl_820DEB30;
    fn_82BA0C40(param_1,iVar6);
    fn_82BC5538(fVar11,iVar6);
    cVar8 = fn_82BC2580(iVar6);
    uVar2 = 0xffffffff820ded0c;
    if (cVar8 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded0c,0xffffffff820deb50,0x584);
    }
    iVar6 = fn_82BC49F8(0x13,*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(iVar6 + 0x38) = 0;
    *(unsigned int *)(iVar6 + 0x50) = 0x17;
    *(unsigned int *)(iVar6 + 0x3c) = 0;
    *(unsigned int *)(iVar6 + 0x54) = 0x17;
    dVar12 = (double)afStack_5c[0];
    fn_82BC34D8(dVar12,dVar12,dVar12,iVar6,param_1,2);
    fn_82BA0C40(param_1,iVar6);
    fn_82BC5538(fVar11,iVar6);
    cVar8 = fn_82BC2580(iVar6);
    if (cVar8 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded0c,0xffffffff820deb50,0x58c);
    }
    iVar6 = fn_82BC4478(0x14,*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(iVar6 + 0x38) = 0;
    *(unsigned int *)(iVar6 + 0x50) = 0x17;
    *(unsigned int *)(iVar6 + 0x3c) = 0;
    *(unsigned int *)(iVar6 + 0x54) = 0x17;
    fn_82BC2958(iVar6,2,uVar1);
    *(unsigned int *)(iVar6 + 0x88) = lbl_820DEB2C;
    dVar12 = (double)fStack_60;
    fn_82BC34D8(dVar12,dVar12,dVar12,iVar6,param_1,3);
    fn_82BA0C40(param_1,iVar6);
    fn_82BC5538(fVar11,iVar6);
    cVar8 = fn_82BC2580(iVar6);
    if (cVar8 != '\0') {
      return;
    }
    uVar3 = 0x596;
  }
  fn_82AB15D0(0,0xffffffff820d2ea4,uVar2,0xffffffff820deb50,uVar3);
  return;
}

