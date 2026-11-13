extern int fn_8268DEB8();
extern int iRam831e928c;


unsigned int fn_8268E008(unsigned int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  sync(1);
  if (iRam831e928c == 0) {
    fn_8268DEB8();
  }
  uVar2 = (unsigned int)*(unsigned short *)((param_1 >> 2 & 0x3ffffffe) + 0x831e7e84);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(unsigned int *)(((param_1 & 7) + uVar2) * 4 + -0x7ce17d80);
  }
  return uVar1;
}

