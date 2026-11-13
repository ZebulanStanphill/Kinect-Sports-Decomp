extern int fn_82EF49F8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;


unsigned __int64 fn_82EF4B70(unsigned __int64 param_1,unsigned int *param_2)

{
  int iVar1;
  __int64 lVar2;
  
  if ((param_1 & 0xffffffff) == 0) {
    *param_2 = lbl_8202E618;
    param_2[1] = lbl_8202E61C;
    param_2[2] = lbl_8202E620;
    param_2[3] = lbl_8202E624;
    return param_1;
  }
  if (*(short *)param_1 != 0) {
    if (*(short *)param_1 != 0x7b) {
      return 0xffffffff80004001;
    }
    lVar2 = param_1 + 2;
    iVar1 = fn_82EF49F8(lVar2);
    if (((iVar1 == 1) && (*(short *)((int)lVar2 + 0x48) == 0x7d)) &&
       (*(short *)((int)lVar2 + 0x4a) == 0)) {
      return 0;
    }
  }
  return 0xffffffff800401f3;
}

