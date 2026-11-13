extern unsigned int fStack00000014;
extern int fn_8306E888();
extern int fn_8306EA00();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E10;
extern unsigned int lbl_82186E14;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_8306F250(double param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  double dVar3;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float fStack00000014;
  
  if (lbl_821AAD20 < in_register_00010018) {
    dVar3 = (double)(lbl_82002AE0 / in_register_00010018);
    fStack00000014 = in_register_00010014;
    uVar1 = fn_8306EA00((double)(float)(dVar3 * (double)in_register_00010010));
    uVar2 = fn_8306EA00((double)(float)(dVar3 * (double)fStack00000014));
    dVar3 = (double)fn_8306E888(uVar1);
    if ((dVar3 <= (double)(float)((double)lbl_82186E14 - param_1)) &&
       (dVar3 = (double)fn_8306E888(uVar2),
       dVar3 <= (double)(float)((double)lbl_82186E10 - param_1))) {
      return 0;
    }
  }
  return 1;
}

