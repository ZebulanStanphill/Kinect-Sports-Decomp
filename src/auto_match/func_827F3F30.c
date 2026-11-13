extern unsigned int *auStack_20;
extern unsigned int fStack_28;
extern int fn_827FA7B8();
extern int fn_827FA918();
extern int fn_82809D40();
extern int fn_8280DF98();
extern unsigned int lbl_821AAD20;


double fn_827F3F30(int param_1)

{
  unsigned __int64 uVar1;
  double dVar2;
  float afStack_30 [2];
  float fStack_28;
  unsigned char auStack_20 [16];
  
  fn_827FA918(*(unsigned int *)(param_1 + 8),auStack_20);
  uVar1 = fn_827FA7B8(*(unsigned int *)(param_1 + 8));
  if ((uVar1 & 0xf) == 0) {
    dVar2 = (double)lbl_821AAD20;
  }
  else {
    fn_8280DF98(auStack_20,0xffffffff8219609c,afStack_30);
    dVar2 = (double)fn_82809D40((double)afStack_30[0],(double)fStack_28);
  }
  return dVar2;
}

