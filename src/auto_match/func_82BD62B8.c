extern unsigned int *auStack_10;


unsigned int fn_82BD62B8(unsigned int *param_1)

{
  int iVar1;
  unsigned int auStack_10;
  
  iVar1 = XamUserGetDeviceContext(*param_1,1,&auStack_10);
  if (iVar1 < 0) {
    auStack_10 = 0;
  }
  else {
    auStack_10 = auStack_10 & 0xf0000000;
  }
  return auStack_10;
}

