extern int fn_82522D98();
extern int fn_82522ED8();
extern int fn_82819420();
extern int fn_82819430();
extern unsigned int lbl_831E7B50;
extern unsigned int uRam831e7b54;
extern unsigned int uRam831e7b58;


void fn_82679FF0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  if (lbl_831E7B50 != 0) {
    fn_82819430();
    lbl_831E7B50 = 0;
    fn_82522ED8(uRam831e7b54);
    uRam831e7b54 = 0;
    fn_82522ED8(uRam831e7b58);
    uRam831e7b58 = 0;
  }
  fn_82819420(param_2);
                    /* WARNING: Subroutine does not return */
  fn_82522D98();
}

