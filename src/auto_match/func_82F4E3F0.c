extern unsigned fn_8265C9E0(unsigned);
extern int fn_829CF908();
extern int fn_82A1DD38();
extern int fn_82A1E1A8();
extern int fn_82A1E6A0();
extern int fn_82F4D6A0();
extern int fn_82F4DF08();
extern int fn_82F4E058();
extern int fn_82F58CD8();
extern int fn_82F58FF8();
extern unsigned fn_82F590E0(unsigned);
extern int fn_82F59390();
extern unsigned lbl_831BA878[];
extern unsigned char *lbl_8326183C;


unsigned int fn_82F4E3F0(void)

{
  unsigned char *puVar1;
  unsigned iVar4;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar5;
  unsigned char **ppuVar6;
  unsigned int uVar7;
  int lVar8;
  
  if (lbl_8326183C == (unsigned char *)0x0) {
    iVar4 = fn_8265C9E0(0x2e10);
    if(iVar4 != 0) lbl_8326183C=(unsigned char*)fn_82F4DF08(iVar4);else lbl_8326183C=0;
  }
  uVar7 = 0;
  ppuVar6 = (unsigned char **)(lbl_831BA878-1);
  lVar8 = 3;
  do {
    ppuVar6 = ppuVar6 + 3;
    uVar7 = (unsigned int)*ppuVar6 | uVar7;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar4 = fn_829CF908(uVar7 | 0x808,3);
  if ((int)iVar4 < 0) {
    uVar2 = 0;
  }
  else {
    RtlInitializeCriticalSection(lbl_8326183C + 0x2b0c);
    fn_82F4E058();
    fn_82F4D6A0();
    fn_824B4298(lbl_8326183C + 0x2b34,"?",0x14);
    uVar3 = fn_8265C9E0(0x28);
    uVar5=uVar3?fn_82F58CD8(uVar3,4,2,0):0;
    *(unsigned int *)(lbl_8326183C + 0x2d8c) = uVar5;
    fn_82F58FF8();
    iVar4 = fn_8265C9E0(0x1e4);
    iVar4=iVar4?fn_82F590E0(iVar4):0;
    *(int *)(lbl_8326183C + 0x2db4) = iVar4;
    if (iVar4 != 0) {
      fn_82F59390(iVar4);
    }
    uVar5 = fn_82A1E6A0(0,0,0,"NuiSensor-SkeletonAvailable");
    puVar1 = lbl_8326183C;
    *(unsigned int *)(lbl_8326183C + 0x2dc4) = uVar5;
    *puVar1 = 1;
    RtlInitializeCriticalSection(puVar1 + 0x2dec);
    fn_82A1E1A8(0);
    uVar2 = 1;
  }
  return uVar2;
}

