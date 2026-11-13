extern unsigned int *auStack_30;
extern int fn_828B55B0();
extern int fn_828B55C0();
extern int fn_828B5608();
extern int fn_828B57E8();


void fn_828ABD40(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned char auStack_30 [16];
  
  fn_828B5608(auStack_30);
  fn_828B57E8(auStack_30,*(unsigned int *)(param_1 + 4),param_2);
  if ((param_3 & 0xffffffff) != 0) {
    fn_828B55C0(param_3,auStack_30);
  }
  fn_828B55B0(auStack_30);
  return;
}

