extern int fn_82530948();
extern int fn_82531118();
extern int fn_825315E0();
extern unsigned int lbl_8320A898;
extern unsigned int lbl_83296BAC;
extern unsigned int lbl_83296BB0;
extern unsigned int lbl_83296BB4;
extern unsigned int lbl_83296BB8;
extern unsigned int lbl_83296BBC;


void fn_825306A0(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = lbl_8320A898;
  if (param_1 == 0) {
    if (lbl_83296BAC != 0) {
      lbl_83296BAC = 0;
      lbl_83296BBC = 1;
      lbl_83296BB0 = 1;
      lbl_83296BB4 = 1;
      fn_82530948(lbl_8320A898);
      fn_825315E0(uVar1);
      fn_82531118();
    }
  }
  else if (param_1 == 1) {
    lbl_83296BB8 = 1;
    fn_825315E0(lbl_8320A898);
  }
  return;
}

