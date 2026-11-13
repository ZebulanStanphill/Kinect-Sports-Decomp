extern int fn_8225C430();
extern int fn_8265C9E0();
extern unsigned int lbl_83298FDC;
extern unsigned int lbl_83298FE0;


unsigned __int64 fn_8225C590(void)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  if ((lbl_83298FE0 & 1) == 0) {
    lbl_83298FE0 = lbl_83298FE0 | 1;
    iVar2 = fn_8265C9E0(0x74);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8225C430();
    }
    lbl_83298FDC = (unsigned int)uVar1;
  }
  else {
    uVar1 = (unsigned __int64)lbl_83298FDC;
  }
  return uVar1;
}

