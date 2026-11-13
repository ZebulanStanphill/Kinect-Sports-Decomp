extern unsigned int *auStack_74;
extern unsigned int *auStack_7c;
extern int fn_8280D8E0();
extern int fn_828116B8();
extern int fn_827F6950();


void fn_827FB4D0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned char auStack_7c [8];
  unsigned char auStack_74 [84];

  fn_827F6950(param_1);
  fn_828116B8(param_2,auStack_74);
                    /* WARNING: Subroutine does not return */
  fn_8280D8E0(param_1,auStack_7c);
}
