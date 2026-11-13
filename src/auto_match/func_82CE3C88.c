extern int (*lbl_8323A940)();


int fn_82CE3C88(int param_1)

{
  int uVar1;
  
  if (lbl_8323A940 != (int (**)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x82ce3ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*lbl_8323A940)(1,param_1);
    return uVar1;
  }
  return 0x80004001;
}

