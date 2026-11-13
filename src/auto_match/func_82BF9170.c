extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD1E;
extern unsigned int lbl_8322FD2F;


void fn_82BF9170(unsigned int param_1)

{
  unsigned short uVar1;
  short sVar2;
  
  if (param_1 < lbl_8322FD1E) {
    lbl_8322FD1E = (unsigned short)param_1;
  }
  sVar2 = 0;
  while (param_1 != 0xfffe) {
    sVar2 = sVar2 + 1;
    uVar1 = (&lbl_8322BCF8)[param_1];
    (&lbl_8322BCF8)[param_1] = 0xffff;
    param_1 = (unsigned int)uVar1;
  }
  lbl_8322FD2F = 1;
  lbl_8322FD1C = lbl_8322FD1C + sVar2;
  return;
}

