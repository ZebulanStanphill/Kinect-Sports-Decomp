extern int fn_82F534D8();
extern int fn_82F538F8();
extern unsigned int lbl_82165968;
extern unsigned int lbl_8216596C;
extern unsigned int lbl_82165970;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4FBE8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  char cVar1;
  
  cVar1 = fn_82F538F8(param_2);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_82F534D8((double)lbl_82165968,(double)lbl_8216596C,(double)lbl_82165970,
                 (double)lbl_821AAD20);
  }
  return;
}

