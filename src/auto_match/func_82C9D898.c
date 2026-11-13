extern int iRam83234c80;
extern unsigned int lbl_83232478;


unsigned __int64 fn_82C9D898(void)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  
  iRam83234c80 = iRam83234c80 + 1;
  if (iRam83234c80 != 1) {
    return (unsigned __int64)lbl_83232478;
  }
  iVar2 = -0x1400;
  lVar3 = 0x2800;
  lbl_83232478 = 0x83233880;
  iRam83234c80 = 1;
  do {
    if (iVar2 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0xff;
      if (iVar2 < 0x100) {
        iVar1 = iVar2;
      }
    }
    *(char *)(iVar2 + -0x7cdcc780) = (char)iVar1;
    iVar2 = iVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return 0xffffffff83233880;
}

