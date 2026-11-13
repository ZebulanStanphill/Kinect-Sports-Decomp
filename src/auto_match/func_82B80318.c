extern int fn_82F655D8();
extern int fn_82F6E018();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_820D8078;


unsigned __int64 fn_82B80318(double param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (param_1 < lbl_820D8078) {
    if (lbl_820D8078 <= ABS(param_1)) {
      return lbl_82005710;
    }
    iVar1 = fn_82F6E018(param_1);
    if (iVar1 == 4) {
      return lbl_82005710;
    }
    if (iVar1 != 0x200) {
      uVar2 = fn_82F655D8(lbl_82002C40,param_1);
      return uVar2;
    }
  }
  return 0x7ff0000000000000;
}

