typedef unsigned char bool;
extern unsigned int lbl_8322B4F8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD22;
extern unsigned int lbl_8322FD24;


void fn_82BF9248(int param_1)

{
  bool bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  
  uVar2 = lbl_8322FD24;
  uVar3 = (unsigned short)param_1;
  if (lbl_8322FD24 != 0xffff) {
    (&lbl_8322F4F8)[lbl_8322FD24] = uVar3;
  }
  bVar1 = lbl_8322FD22 != -1;
  lbl_8322FD24 = uVar3;
  (&lbl_8322F4F8)[param_1] = 0xffff;
  (&lbl_8322B4F8)[param_1] = uVar2;
  if (bVar1) {
    return;
  }
  lbl_8322FD22 = uVar3;
  return;
}

