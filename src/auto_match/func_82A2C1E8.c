extern int memset();


unsigned __int64 fn_82A2C1E8(int param_1)

{
  __int64 lVar1;
  
  lVar1 = ExAllocatePoolTypeWithTag(0x78,0x63467453,(param_1 == 0) + '\x01');
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(lVar1,0,0x78);
  }
  return 0;
}

