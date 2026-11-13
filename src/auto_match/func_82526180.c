extern int fn_82F68CC0();
extern unsigned int lbl_8327F24C;


unsigned __int64 fn_82526180(unsigned __int64 param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x832767f0;
  if ((unsigned __int64)lbl_8327F24C < 0x23) {
    fn_82F68CC0((unsigned __int64)lbl_8327F24C * 0x3f4 + -0x7cd8980c,param_1,1000);
    *(unsigned int *)(lbl_8327F24C * 0x3f4 + -0x7cd89424) = param_2;
    *(unsigned int *)(lbl_8327F24C * 0x3f4 + -0x7cd89420) = param_3;
    iVar1 = lbl_8327F24C * 0x3f4;
    lbl_8327F24C = 0;
    *(unsigned int *)(iVar1 + -0x7cd89810) = 1;
    do {
      if (*piVar3 == 0) break;
      piVar3 = piVar3 + 0xfd;
      lbl_8327F24C = lbl_8327F24C + 1;
    } while ((int)piVar3 < -0x7cd80db4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

