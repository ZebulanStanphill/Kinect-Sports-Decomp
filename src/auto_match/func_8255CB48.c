extern int fn_8251E4D0();


void fn_8255CB48(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  __int64 lVar1;
  
  if ((param_4 == 0) || (lVar1 = param_1 + 0x18, (param_4 & 0x100) == 0)) {
    lVar1 = param_1 + 4;
  }
                    /* WARNING: Subroutine does not return */
  fn_8251E4D0(lVar1);
}

