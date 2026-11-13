extern int fn_826909B0();
extern int fn_82690A98();


void fn_82690F08(unsigned __int64 param_1,__int64 param_2,unsigned int param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar1 = (int)param_2;
  uVar3 = (unsigned int)*(unsigned short *)(iVar1 + 0xc);
  if (0x20 < uVar3) {
    uVar3 = *(unsigned int *)(iVar1 + 0x10);
  }
  if (param_4 != '\0') {
    uVar4 = (unsigned int)*(unsigned short *)(iVar1 + -2);
    if (0x20 < *(unsigned short *)(iVar1 + -2)) {
      uVar4 = *(unsigned int *)(iVar1 + -8);
    }
    param_2 = param_2 - (unsigned __int64)(uVar4 << (param_3 & 0x3f));
    uVar4 = (unsigned int)*(unsigned short *)((int)param_2 + 0xc);
    if (0x20 < uVar4) {
      uVar4 = *(unsigned int *)((int)param_2 + 0x10);
    }
    uVar3 = uVar4 + uVar3;
    fn_82690A98(param_1,param_2);
  }
  if (param_5 != '\0') {
    uVar4 = (unsigned int)*(unsigned short *)(iVar1 + 0xc);
    if (0x20 < *(unsigned short *)(iVar1 + 0xc)) {
      uVar4 = *(unsigned int *)(iVar1 + 0x10);
    }
    iVar1 = (uVar4 << (param_3 & 0x3f)) + iVar1;
    uVar4 = (unsigned int)*(unsigned short *)(iVar1 + 0xc);
    if (0x20 < uVar4) {
      uVar4 = *(unsigned int *)(iVar1 + 0x10);
    }
    uVar3 = uVar4 + uVar3;
    fn_82690A98(param_1);
  }
  iVar2 = (int)param_2;
  iVar1 = (uVar3 << (param_3 & 0x3f)) + iVar2;
  if (uVar3 < 0x21) {
    *(short *)(iVar1 + -2) = (short)uVar3;
    *(short *)(iVar2 + 0xc) = (short)uVar3;
  }
  else {
    *(unsigned short *)(iVar1 + -2) = 0x21;
    *(unsigned short *)(iVar2 + 0xc) = 0x21;
    *(unsigned int *)(iVar1 + -8) = uVar3;
    *(unsigned int *)(iVar2 + 0x10) = uVar3;
  }
  fn_826909B0(param_1,param_2);
  return;
}

