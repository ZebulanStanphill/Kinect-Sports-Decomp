extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_829C7AA8();
extern int fn_829C7FC8();
extern int fn_829C8848();
extern unsigned int lbl_82028800;
extern unsigned int lbl_820570E0;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83217B18;
extern unsigned int lbl_83217B20;


__int64 fn_829DB5F0(void)

{
  __int64 lVar1;
  float fStack_20;
  float fStack_1c;
  float afStack_18 [2];
  
  fn_829C7AA8(0,1);
  lVar1 = fn_829C7FC8(0,1,6,&fStack_1c);
  if (((lVar1 < 0) || (lVar1 = fn_829C7FC8(0,1,7,&fStack_20), lVar1 < 0)) ||
     (lVar1 = fn_829C7FC8(0,1,8,afStack_18), lVar1 < 0)) goto LAB_829db718;
  lbl_83217B18 = ((((unsigned __int64)(lbl_83217B18)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(fStack_1c - fStack_20)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  lbl_83217B18 = ((((unsigned __int64)(lbl_83217B18)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(afStack_18[0] - fStack_20)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  if ((((unsigned __int64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) < lbl_821AAD20) {
    if (lbl_821AAD20 <= (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) {
      lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(lbl_82028800 - (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(lbl_820570E0 - (((unsigned __int64)(lbl_83217B18) >> 0) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      goto LAB_829db718;
    }
    lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(lbl_82028800)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if ((((unsigned __int64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) < (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) {
      lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(lbl_820570E0 - (((unsigned __int64)(lbl_83217B18) >> 0) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      goto LAB_829db718;
    }
  }
  else {
    lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(lbl_820570E0)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    if ((((unsigned __int64)(lbl_83217B18) >> 0) & 0xFFFFFFFF) < (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) {
      lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(lbl_82028800 - (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      goto LAB_829db718;
    }
    lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)(lbl_82028800 - (((unsigned __int64)(lbl_83217B18) >> 0) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if (lbl_821AAD20 <= (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF)) goto LAB_829db718;
  }
  lbl_83217B20 = ((((unsigned __int64)(lbl_83217B20)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)(lbl_820570E0 - (((unsigned __int64)(lbl_83217B18) >> 32) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
LAB_829db718:
  fn_829C8848(0,1);
  return lVar1;
}

