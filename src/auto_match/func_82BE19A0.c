extern int fn_82F66368();
extern int fn_82F6D460();
extern unsigned int lbl_831751D0;


__int64 fn_82BE19A0(unsigned __int64 param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  
  if ((param_1 & 0xffffffff) != 0) {
    lVar1 = fn_82F6D460(param_1,2000);
    lVar2 = (*(int (**)())lbl_831751D0)(lVar1 + 1);
    if (lVar2 != 0) {
      fn_82F66368(lVar2,lVar1 + 1,param_1,lVar1);
      return lVar2;
    }
  }
  return 0;
}

