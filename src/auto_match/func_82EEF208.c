extern int fn_82EEDA80();
extern int fn_82EEDD60();
extern int fn_82EEE258();
extern int fn_82F41920();


__int64 fn_82EEF208(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4,
                      int param_5,__int64 param_6)

{
  __int64 lVar1;
  int iVar2;
  
  lVar1 = fn_82EEDD60();
  if (-1 < lVar1) {
    fn_82F41920(*param_4);
    lVar1 = (**(int (***)())(*param_1 + 0x24))
                      (param_1,-(unsigned __int64)(param_6 != 0) & 0x20000 | 0x800,*param_4);
    if (-1 < lVar1) {
      if ((int)lVar1 == 0) {
        if (((param_5 != 0) && (param_1[0x1c] != 0)) &&
           (iVar2 = fn_82EEDA80(param_1 + 2,0), -1 < iVar2)) {
          param_1[0x1c] = param_1[0x1c] + -1;
        }
        lVar1 = fn_82EEE258(param_1,*param_4);
        if (-1 < lVar1) {
          fn_82F41920(*param_4);
        }
      }
      else {
        lVar1 = -0x7fffbffb;
      }
    }
  }
  return lVar1;
}

