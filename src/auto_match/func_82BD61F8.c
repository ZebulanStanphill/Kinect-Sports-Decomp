extern int fn_82BD3818();
extern int (*lbl_83223F44)();


unsigned __int64 fn_82BD61F8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((lbl_83223F44 == (int (**)())0x0) &&
     (fn_82BD3818(0x48c,0xffffffff83223f44), lbl_83223F44 == (int (**)())0x0)) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = (*lbl_83223F44)(param_1,param_2);
  }
  return uVar1;
}

