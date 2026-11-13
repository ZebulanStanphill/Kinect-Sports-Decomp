extern int fn_82BF9498();
extern unsigned int lbl_8322BCF8;
extern unsigned int lbl_8322ECF8;
extern unsigned int lbl_8322F4F8;
extern unsigned int lbl_8322FD1C;
extern unsigned int lbl_8322FD22;


unsigned __int64 fn_82BF94E0(unsigned int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uVar6;
  
  uVar3 = (unsigned int)lbl_8322FD1C;
  uVar2 = (unsigned int)lbl_8322FD22;
  uVar4 = uVar3;
  uVar6 = uVar2;
  if (uVar3 < param_1) {
    do {
      if (uVar6 == 0xffff) {
        return 0;
      }
      iVar5 = 0;
      for (uVar1 = (&lbl_8322ECF8)[uVar6]; uVar1 != 0xfffe; uVar1 = (&lbl_8322BCF8)[uVar1]) {
        iVar5 = iVar5 + 1;
      }
      uVar4 = iVar5 + uVar4;
      uVar6 = (unsigned int)(unsigned short)(&lbl_8322F4F8)[uVar6];
    } while (uVar4 < param_1);
    if (uVar3 < param_1) {
      while (fn_82BF9498(uVar2), lbl_8322FD1C < param_1) {
        uVar2 = (unsigned int)lbl_8322FD22;
      }
    }
  }
  return 1;
}

