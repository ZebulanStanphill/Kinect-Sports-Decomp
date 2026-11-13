extern int fn_8296CF68();
extern int memset();


unsigned __int64 fn_829750C8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  fn_8296CF68();
  if ((param_2 & 0xffffffff) == 0) {
    return 0xffffffff80004005;
  }
                    /* WARNING: Subroutine does not return */
  memset(param_2,0,100);
}

