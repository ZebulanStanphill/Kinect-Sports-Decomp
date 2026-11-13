extern int fn_82BD3818();
extern int (*lbl_83223ED8)();


unsigned __int64 fn_82BD38E8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((lbl_83223ED8 == (int (**)())0x0) &&
     (fn_82BD3818(0x31a,0xffffffff83223ed8), lbl_83223ED8 == (int (**)())0x0)) {
    uVar1 = 0xffffffff80004005;
  }
  else {
    uVar1 = (*lbl_83223ED8)(param_1,param_2);
  }
  return uVar1;
}

