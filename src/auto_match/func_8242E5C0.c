extern int fn_82250A18();
extern int fn_8242C1B8();
extern unsigned int lbl_832975B0;


unsigned __int64 fn_8242E5C0(unsigned __int64 param_1)

{
  int iVar1;
  
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    fn_8242C1B8(param_1);
  }
  return 0;
}

