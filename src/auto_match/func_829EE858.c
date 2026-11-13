extern int fn_829F1960();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern float lbl_82079F20;
extern float lbl_82079F24;
extern unsigned int lbl_82079F28;
extern unsigned int lbl_83218B9C;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_829EE858(void)

{
  float fVar1;
  double dVar2;
  unsigned __int64 uStack_30;
  unsigned __int64 uStack_28;
  
  fVar1 = lbl_82079F28;
  if (lbl_83218B9C != 0) {
    fVar1 = lbl_82002C28;
  }
  dVar2 = (double)fVar1;
  uStack_30 = (unsigned __int64)(((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF);
  uStack_28 = (unsigned __int64)(((unsigned __int64)(uStack_28) >> 32) & 0xFFFFFFFF);
  fn_829F1960(&uStack_30,&uStack_28);
  if ((dVar2 <= (double)(lbl_82002AE0 -
                        ABS(((float)(__int64)(((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) - lbl_82015BD0) * lbl_82079F24))) &&
     (dVar2 <= (double)(lbl_82002AE0 -
                       ABS(((float)(__int64)(((unsigned __int64)(uStack_28) >> 0) & 0xFFFFFFFF) - lbl_82015BD8) * lbl_82079F20)))) {
    lbl_83218B9C = 1;
    return;
  }
  lbl_83218B9C = 0;
  return;
}

