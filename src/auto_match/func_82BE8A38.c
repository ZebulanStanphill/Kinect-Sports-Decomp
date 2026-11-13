extern int fn_82F68B6C();
extern unsigned int lbl_8322B224;


unsigned __int64 fn_82BE8A38(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  if ((lbl_8322B224 != 0) && (*(int *)(lbl_8322B224 + 0x58) == 2)) {
    lVar2 = param_1 + 0x2c;
    if ((param_1 & 0xffffffff) == 0) {
      lVar2 = 0;
    }
    uVar1 = fn_82F68B6C(lbl_8322B224,lVar2);
    return uVar1;
  }
  return 0;
}

