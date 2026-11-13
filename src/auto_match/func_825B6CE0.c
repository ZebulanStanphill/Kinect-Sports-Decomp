extern int fn_8251F720();
extern int fn_82522D98();


unsigned __int64 fn_825B6CE0(unsigned __int64 param_1)

{
  unsigned short *puVar1;
  
  puVar1 = (unsigned short *)fn_8251F720(param_1,0);
  if (puVar1 == (unsigned short *)0x0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82522D98(*puVar1);
}

