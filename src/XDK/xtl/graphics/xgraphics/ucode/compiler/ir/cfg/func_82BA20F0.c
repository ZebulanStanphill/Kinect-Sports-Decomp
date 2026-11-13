extern unsigned int *auStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_82AB15D0();
extern int fn_82B9E158();
extern int fn_82B9E1F8();
extern int fn_82BA0C40();
extern int fn_82BBC7F8();
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
extern unsigned int lbl_820DEB20;
extern unsigned int lbl_820DEB2C;
extern unsigned int lbl_820DEB30;


void fn_82BA20F0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  char cVar4;
  int iVar3;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  double dVar8;
  float fStack_70;
  float fStack_6c;
  unsigned int auStack_68 [26];
  
  cVar4 = fn_82BBC7F8(param_1 + 0xb8,0x20,0,auStack_68);
  if (cVar4 != '\0') {
    iVar3 = fn_82BC5AC0(*(unsigned int *)(param_1 + 0xa8));
    if (iVar3 != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded2c,0xffffffff820deb50,0x838);
    }
    iVar6 = 0;
    iVar3 = *(int *)(*(int *)(param_1 + 0xa8) + 0x3c);
    uVar7 = auStack_68[0];
    for (uVar5 = 1; uVar5 <= *(unsigned int *)(iVar3 + 4); uVar5 = uVar5 + 1) {
      uVar7 = *(unsigned int *)(*(int *)(iVar3 + 8) + iVar6);
      iVar6 = iVar6 + 4;
    }
    uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 0x20);
    fn_82B9E1F8(*(unsigned int *)(param_1 + 0x10),0,&fStack_6c,0xffffffff82b7c800,
                  *(unsigned int *)(param_1 + 0xc));
    fn_82B9E158(*(unsigned int *)(param_1 + 0x10),0,&fStack_70,0xffffffff82b7c800,
                  *(unsigned int *)(param_1 + 0xc));
    iVar3 = fn_82BC4370(0x40,*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(iVar3 + 0x38) = 0;
    *(unsigned int *)(iVar3 + 0x50) = 0x20;
    fn_82BC2958(iVar3,1,uVar1);
    *(unsigned int *)(iVar3 + 0x84) = lbl_820DEB30;
    fn_82BA0C40(param_1,iVar3);
    fn_82BC5538(uVar7,iVar3);
    cVar4 = fn_82BC2580(iVar3);
    if (cVar4 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded0c,0xffffffff820deb50,0x852);
    }
    iVar3 = fn_82BC49F8(0x13,*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(iVar3 + 0x38) = 0;
    *(unsigned int *)(iVar3 + 0x50) = 0x20;
    *(unsigned int *)(iVar3 + 0x3c) = 0;
    *(unsigned int *)(iVar3 + 0x54) = 0x20;
    dVar8 = (double)fStack_70;
    fn_82BC34D8(dVar8,dVar8,dVar8,iVar3,param_1,2);
    fn_82BA0C40(param_1,iVar3);
    fn_82BC5538(uVar7,iVar3);
    cVar4 = fn_82BC2580(iVar3);
    if (cVar4 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded0c,0xffffffff820deb50,0x85b);
    }
    iVar3 = fn_82BC4478(0x14,*(unsigned int *)(param_1 + 0xc));
    uVar2 = lbl_820DEB1C;
    *(unsigned int *)(iVar3 + 0x38) = 0;
    *(unsigned int *)(iVar3 + 0x50) = 0x20;
    *(unsigned int *)(iVar3 + 0x3c) = 0;
    *(unsigned int *)(iVar3 + 0x54) = 0x20;
    *(unsigned int *)(iVar3 + 0x80) = uVar2;
    fn_82BC2958(iVar3,2,uVar1);
    *(unsigned int *)(iVar3 + 0x88) = lbl_820DEB2C;
    dVar8 = (double)fStack_6c;
    fn_82BC34D8(dVar8,dVar8,dVar8,iVar3,param_1,3);
    fn_82BA0C40(param_1,iVar3);
    fn_82BC5538(uVar7,iVar3);
    cVar4 = fn_82BC2580(iVar3);
    if (cVar4 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820ded0c,0xffffffff820deb50,0x867);
    }
    iVar3 = fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
    uVar2 = lbl_820DEB20;
    *(unsigned int *)(iVar3 + 0x38) = 0;
    *(unsigned int *)(iVar3 + 0x50) = 0x20;
    *(unsigned int *)(iVar3 + 0x80) = uVar2;
    fn_82BC2958(iVar3,1,uVar1);
    *(unsigned int *)(iVar3 + 0x84) = lbl_820DEB30;
    fn_82BA0C40(param_1,iVar3);
    fn_82BC5538(uVar7,iVar3);
    cVar4 = fn_82BC2580(iVar3);
    if (cVar4 == '\0') {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820decd0,0xffffffff820deb50,0x871);
    }
  }
  return;
}

