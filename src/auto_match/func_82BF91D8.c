extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;


void fn_82BF91D8(int param_1)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  
  uVar1 = (&lbl_8322F4F8)[param_1];
  uVar2 = (&lbl_8322B4F8)[param_1];
  uVar3 = uVar2;
  if ((uVar1 != 0xffff) && (uVar3 = lbl_8322FD24, uVar1 < 0xfff0)) {
    (&lbl_8322B4F8)[uVar1] = uVar2;
    uVar3 = lbl_8322FD24;
  }
  lbl_8322FD24 = uVar3;
  if (uVar2 != 0xffff) {
    if (uVar2 < 0xfff0) {
      (&lbl_8322F4F8)[uVar2] = uVar1;
      return;
    }
    return;
  }
  lbl_8322FD22 = uVar1;
  return;
}

