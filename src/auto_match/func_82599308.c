extern int fn_8265C9E0();
extern int fn_82CE5430();
extern int fn_82F691F0();
extern unsigned int lbl_83297014;


__int64 fn_82599308(void)

{
  __int64 lVar1;
  
  lVar1 = KeTlsGetValue(lbl_83297014);
  if (lVar1 == 0) {
    lVar1 = fn_8265C9E0(0x2c);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      fn_82CE5430(lVar1 + 8);
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar1,0,0x2c);
  }
  return lVar1;
}

