extern int fn_829E32C0();
extern int (*lbl_83217B28)();
extern unsigned int lbl_83217B38;
extern unsigned int lbl_832187E4;


__int64 fn_829DB3A0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  __int64 lVar1;
  
  lVar1 = fn_829E32C0(lbl_83217B38,param_2,param_3,param_3);
  if ((-1 < lVar1) && (lbl_83217B28 != (int (**)())0x0)) {
    lbl_832187E4 = (unsigned int)LZCOUNT(*param_3) >> 5;
    (*lbl_83217B28)();
  }
  return lVar1;
}

