extern char cRam8327f87e;
extern int fn_8259A168();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A1E5B8();


unsigned int fn_8259A230(int param_1)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (cRam8327f87e == '\0') {
    fn_8259A168();
  }
  iVar2 = 0;
  uVar3 = 0;
  piVar4 = (int *)0x8326f5bc;
  do {
    if (*piVar4 == param_1) {
      return *(unsigned int *)(iVar2 * 0xc + -0x7cd90a40);
    }
    uVar3 = uVar3 + 0xc;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 3;
  } while ((uVar3 & 0xffffffff) < 0x180);
  uVar5 = 0xffffffff;
  iVar2 = fn_82A1BB18();
  if (param_1 == iVar2) {
    fn_82A1E5B8();
    uVar5 = 0xfffffffe;
  }
  lVar1 = fn_82A1BB18();
  fn_8259C5D8(0xffffffff8326f5a8,0,lVar1 + 1);
  uVar6 = 0x1f;
  piVar4 = (int *)0x8326f604;
  iVar2 = 6;
  uVar3 = 0x48;
  do {
    if (*piVar4 == -1) {
      iVar2 = iVar2 * 0xc;
      *(unsigned int *)(iVar2 + -0x7cd90a48) = uVar5;
      *(int *)(iVar2 + -0x7cd90a44) = param_1;
      uVar6 = *(unsigned int *)(iVar2 + -0x7cd90a40);
      break;
    }
    uVar3 = uVar3 + 0xc;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 3;
  } while ((uVar3 & 0xffffffff) < 0x174);
  fn_82A1BB18();
  fn_8259C738(0xffffffff8326f5a8);
  return uVar6;
}

