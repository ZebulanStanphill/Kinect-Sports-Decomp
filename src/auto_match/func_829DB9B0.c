extern unsigned int *auStack_30;
extern int fn_829DB8F0();
extern int fn_829E2FF8();
extern int fn_829E3148();
extern int fn_829E36E0();
extern int fn_829E3B08();
extern int fn_829E3B70();
extern int fn_829E3BB8();
extern int fn_829E3F40();
extern int fn_829E44C0();
extern unsigned int lbl_82057810;
extern unsigned int lbl_83217B30;
extern unsigned int lbl_83217B38;
extern unsigned int lbl_83217B3C;
extern unsigned int lbl_83217B50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_829DB9B0(void)

{
  int iVar3;
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_30 [48];
  
  if ((((unsigned __int64)(lbl_83217B30) >> 0) & 0xFFFFFFFF) == 0) {
    iVar3 = fn_829E3BB8(0x2418);
    if (iVar3 == 0) {
      lbl_83217B30 = ((((unsigned __int64)(lbl_83217B30)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(0)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    }
    else {
      lbl_83217B30 = ((((unsigned __int64)(lbl_83217B30)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(fn_829E3B08())) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    }
    if ((((unsigned __int64)(lbl_83217B30) >> 0) & 0xFFFFFFFF) == 0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      lVar1 = fn_829E3B70();
    }
    if ((int)lVar1 < 0) {
      return lVar1;
    }
  }
  if ((((unsigned __int64)(lbl_83217B30) >> 32) & 0xFFFFFFFF) == 0) {
    iVar3 = fn_829E3BB8(0x108);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_829E3F40();
    }
    lbl_83217B30 = ((((unsigned __int64)(lbl_83217B30)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)uVar2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    if ((uVar2 & 0xffffffff) == 0) {
      lVar1 = -0x7ff8fff2;
    }
    else {
      lVar1 = fn_829E44C0(uVar2,(((unsigned __int64)(lbl_83217B30) >> 0) & 0xFFFFFFFF));
    }
  }
  else {
    lVar1 = -0x7ff8fb21;
  }
  if (-1 < (int)lVar1) {
    if (lbl_83217B38 == 0) {
      iVar3 = fn_829E3BB8(0x98);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = fn_829E2FF8();
      }
      lbl_83217B38 = (int)uVar2;
      if ((uVar2 & 0xffffffff) == 0) {
        lVar1 = -0x7ff8fff2;
      }
      else {
        lVar1 = fn_829E36E0(uVar2,(((unsigned __int64)(lbl_83217B30) >> 32) & 0xFFFFFFFF));
        if (lVar1 < 0) {
          return lVar1;
        }
        fn_829E3148(lbl_82057810,lbl_83217B38,auStack_30);
        lbl_83217B3C = &lbl_83217B50;
      }
    }
    if ((-1 < (int)lVar1) &&
       (lVar1 = fn_829DB8F0(0xffffffff820577fc,0xffffffff82057790,0xffffffff83217a08), -1 < lVar1)
       ) {
      lVar1 = fn_829DB8F0(0xffffffff820577ec,0xffffffff82057720,0xffffffff83217a88);
    }
  }
  return lVar1;
}

