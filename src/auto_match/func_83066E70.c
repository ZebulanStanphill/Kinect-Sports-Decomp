extern int fn_82810280();
extern unsigned int lbl_831BCA5C;
extern unsigned int lbl_831BCA60;


unsigned __int64 fn_83066E70(__int64 param_1,__int64 param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_82810280();
  if ((double)lbl_831BCA60 <= dVar1) {
    dVar1 = (double)fn_82810280(param_1,param_1 + 0xc);
    dVar2 = (double)fn_82810280(param_2,param_2 + 0xc);
    if ((dVar1 <= (double)(float)((double)lbl_831BCA5C + dVar2)) &&
       ((double)(float)(dVar2 - (double)lbl_831BCA5C) <= dVar1)) {
      return 1;
    }
  }
  return 0;
}

