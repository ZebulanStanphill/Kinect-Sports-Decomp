extern int fn_82644040();
extern int fn_82644930();
extern int fn_82644C68();
extern int fn_82644DF0();
extern int fn_826452A8();
extern unsigned int iStack_20;
extern unsigned int lbl_832823F8;
extern unsigned int uStack_1c;


unsigned int fn_82645110(int param_1)

{
  __int64 lVar1;
  int iStack_20;
  unsigned int uStack_1c;
  
  if ((((*(int *)(param_1 + 0x3460) == 0) && ((*(unsigned char *)(param_1 + 0x2abc) & 0x80) == 0)) &&
      (fn_82644930(param_1,&uStack_1c,&iStack_20), iStack_20 != 0)) &&
     (lVar1 = fn_82644040(param_1,4,4), lVar1 != 0)) {
    fn_82644DF0(param_1,lVar1,uStack_1c,iStack_20,0,param_1 + 0x3500,0);
  }
  fn_82644C68(param_1);
  if ((((*(unsigned char *)(param_1 + 0x2abc) & 0x80) == 0) && (lbl_832823F8 != 0)) &&
     ((*(unsigned char *)(param_1 + 0x2abd) & 2) == 0)) {
    lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2a9c) - 2;
    if (lVar1 != 0) {
      fn_826452A8(param_1,lVar1,0,0);
    }
    *(unsigned char *)(param_1 + 0x2abd) = *(unsigned char *)(param_1 + 0x2abd) | 2;
  }
  return *(unsigned int *)(param_1 + 0x30);
}

