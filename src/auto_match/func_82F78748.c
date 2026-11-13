extern unsigned int *auStack_20;
extern int fn_82F72808();
extern int fn_82F72F40();
extern int fn_82F73988();
extern int fn_82F739E8();
extern int fn_82F775F0();
extern int fn_82F78540();
extern unsigned int *lbl_832635C0;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


unsigned __int64 fn_82F78748(unsigned __int64 param_1)

{
  char cVar1;
  unsigned __int64 *puVar2;
  unsigned __int64 uStack_30;
  struct { unsigned int first; unsigned int second; } stack_pair_28;

  unsigned char auStack_20 [16];
  
  fn_82F72808(&uStack_30);
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F73988(param_1,1,&uStack_30);
  }
  else {
    if (cVar1 == '?') {
      lbl_832635C0 = lbl_832635C0 + 1;
      stack_pair_28.second = stack_pair_28.second & 0xffff;
      stack_pair_28.first = 0;
      puVar2 = (unsigned __int64 *)
               fn_82F775F0(auStack_20,&uStack_30,0xffffffff82196582,&stack_pair_28.first,0);
      uStack_30 = *puVar2;
    }
    else if (cVar1 == 'X') {
      lbl_832635C0 = lbl_832635C0 + 1;
      if ((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) == 0) {
        fn_82F72F40(param_1,0xffffffff8202f48c);
        return param_1;
      }
      fn_82F739E8(param_1,0xffffffff82169e5c,&uStack_30);
      return param_1;
    }
    fn_82F78540(param_1,&uStack_30);
  }
  return param_1;
}

